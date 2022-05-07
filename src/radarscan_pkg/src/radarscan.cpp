#include "radarscan.h"
#include "ui_radarscan.h"

radarScan::radarScan(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::radarScan)
{
  ui->setupUi(this);
  initParamTTC();
  initTimer();
  initGraphicRadar();

  sub = n.subscribe("Radar_Data", 1, &radarScan::chatterCallback, this) ;
  timerRadar->start(100);

}


radarScan::~radarScan()
{
  delete ui;
}


void radarScan::initParamTTC()
{
  paramTTC.safety = ui->txtTTCSafety->toPlainText().toFloat();
  paramTTC.warning = ui->txtTTCWarning->toPlainText().toFloat();
  paramTTC.accidence = ui->txtTTCAccidence->toPlainText().toFloat();

  paramTTC.carNormal = "white";
  paramTTC.carSafety = "green";
  paramTTC.carWarning = "yellow";
  paramTTC.carAccidence = "red";
}

/*----------QTimer----------------------------------*/

void radarScan::spinOnce()
{
  if(ros::ok())
    ros::spinOnce();
  else QApplication::quit();
}

void radarScan::initTimer()
{
  timerRadar = new QTimer(this);
  connect(timerRadar, SIGNAL(timeout()), this, SLOT(spinOnce()));
}


/*----------QGraphic--------------------------------*/

float radarScan::nRound(float num, int n)
{
  int base = pow(10,n);
  return round(num * base) /base;
}

void radarScan::initGraphicRadar()
{
  // parameter Background Radar Scan
  paramGraphicRadar.sizeInPixel.x = 210;
  paramGraphicRadar.sizeInPixel.y = 386;
  paramGraphicRadar.sizeInMetre.x = 12;
  paramGraphicRadar.sizeInMetre.y = 22;
  paramGraphicRadar.sizeMarker.x = 30;
  paramGraphicRadar.sizeMarker.y = 30;
  paramGraphicRadar.posRadar.x = 134;
  paramGraphicRadar.posRadar.y = 416;
  paramGraphicRadar.ratioX = paramGraphicRadar.sizeInPixel.x / paramGraphicRadar.sizeInMetre.x;
  paramGraphicRadar.ratioY = paramGraphicRadar.sizeInPixel.y / paramGraphicRadar.sizeInMetre.y;
  // offset of icon detectObj
  paramGraphicRadar.offset = paramGraphicRadar.sizeMarker.x / 2;

  // add Item radarScanBackGround.png
  ui->graphicsView_radarScan->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  ui->graphicsView_radarScan->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  radarScanBG =  new QGraphicsPixmapItem(QPixmap(":/radarScanBG/RadarScanBG_v2/RadarScanBG_v21.png").scaled(250, 450, Qt::KeepAspectRatio));
}


/*---------- Plot + chatterCallback ROS ------------*/
void radarScan::clearVector()
{
  vMarkerObj.clear();   // vector Marker for display car*.png
  vttcObj.clear();    // vector ttcObj for time to collision in the circle car*.png
}

float radarScan::x2p(float x)
{
  // convert position from metre to pixel
  return paramGraphicRadar.posRadar.x + paramGraphicRadar.ratioX * x;
}

float radarScan::y2p(float y)
{
  // convert position from metre to pixel
  return paramGraphicRadar.posRadar.y - paramGraphicRadar.ratioX * y;
}

QString radarScan::carColor(string name)
{
  if (name == "carNormal")
    return paramTTC.carNormal;
  else if (name == "carSafety")
    return paramTTC.carSafety;
  else if (name == "carWarning")
    return paramTTC.carWarning;
  else
    return "red";
}

void radarScan::plotDetectObj()
{
  // create a new graphic
  graphicRadar = new QGraphicsScene();
  graphicRadar->addItem(radarScanBG);
  ui->graphicsView_radarScan->setScene(graphicRadar);
  float offset = paramGraphicRadar.offset;

  // show car*.png for each Object
  for (int i = 0; i < ttcRadar.numObj; i++) {
    markerObj = new QGraphicsPixmapItem(QPixmap(":/car/"+QString::fromStdString(ttcRadar.safetyZone[i])+".png"));
    if (ttcRadar.ttc[i] != 99) {
      ttcObj = new QGraphicsTextItem(QString::number(nRound(ttcRadar.ttc[i], 0)));
    } else ttcObj = new QGraphicsTextItem("  ");
    vMarkerObj.push_back(markerObj);
    vttcObj.push_back(ttcObj);

    // show image radarScanBackGround in GUI
    graphicRadar->addItem(vMarkerObj[i]);
    graphicRadar->addItem(vttcObj[i]);
    vMarkerObj[i]->setPos(  x2p(ttcRadar.posX[i])-offset, y2p(ttcRadar.posY[i])-offset  );
    vttcObj[i]->setPos(  x2p(ttcRadar.posX[i])- offset+2, y2p(ttcRadar.posY[i])-offset+4  );
    vttcObj[i]->setFont(QFont("Helvetica", 9, QFont::Bold));
    vttcObj[i]->setDefaultTextColor(carColor(ttcRadar.safetyZone[i]));
  }
}

void radarScan::displayParamTTC()
{
  QString txt = "";
  for (int i = 0; i < ttcRadar.numObj; i++) {
   txt = txt + "Object " + QString::number(i) + ": \n"
       + "Distance  m   = " + QString::number(nRound(ttcRadar.dis[i],1)) + "\n"
       + "Velocity  m/s = " + QString::number(nRound(ttcRadar.vel[i],1)) + "\n\n" ;
  }
  ui->lblTTC->setText(txt);

//  if (ttcRadar.numObj) {
//    ui->lblTTC->setText(QString::number(nRound(ttcRadar.dis[0],1)));
//    ui->lblVel->setText(QString::number(nRound(ttcRadar.vel[0],1)));
//  }
}

void radarScan::autoDrive()
{
  vector<string> state_description;
  vector<string> state_key;
  string key = "";
  static float speed = 2.0;
  static float steering = 0.0;
  float speed_max = 5.0;
  float duty = 0;
  float X_max = 2;
  float X_min = -2;
  float ttc_min = 5; // s
  float dis_min = 8; // m

  float x = 0;
  float th = 0;
  static float cnt = 0;
  cnt++;

  // tracking and warning dangerous objects.
  if (!ttcRadar.numObj) {
    state_description.push_back("no obstacle");
    state_key.push_back("i");
    speed = 5.0;
    steering = 0;
    x = 1; th = 0;
  }
  else {

    // get state_description and state_key for controller
    for (uint8_t i = 0; i < ttcRadar.numObj; i++) {

      if (ttcRadar.safetyZone[i] == "carAccidence" || ttcRadar.safetyZone[i] == "carWarning") {

        // duty is the period of deceleration between 2 consecutive times. it changes depending on the object distance.
        duty = round(ttcRadar.dis[i]/0.8);
        if (duty < 1) duty = 1;

        if (ttcRadar.posX[i] > X_min && ttcRadar.posX[i] < X_max) {
          state_description.push_back("front");
          if (ttcRadar.dis[i] < dis_min) {
            if (cnt == round(cnt/duty)*duty)
              state_key.push_back("x"); else state_key.push_back("i");
          }
          else state_key.push_back("i");
        }
        else if (ttcRadar.posX[i] >= X_max) {
          state_description.push_back("right");
          if (ttcRadar.ttc[i] < ttc_min) {
            state_key.push_back("u");
            speed = 2.0;
            steering = 0.05;
          }
          else state_key.push_back("i");
        }
        else if (ttcRadar.posX[i] <= X_min) {
          state_description.push_back("left");
          if (ttcRadar.ttc[i] < ttc_min) {
            state_key.push_back("o");
            speed = 2.0;
            steering = 0.05;
          }
          else state_key.push_back("i");
        }
        else state_description.push_back("unknown state_description");
      }
      else {
        state_description.push_back("no obstacle");
        state_key.push_back("i");
        speed = 5.0;
        steering = 0;
        x = 1; th = 0;
      }
    }
  }

  // assign control command character (key), x is moveBindings


  sort(state_key.begin(), state_key.end());
  for (int i = 0; i < state_key.size(); ) {
      if (state_key[i] == state_key[i+1]) {
          state_key.erase(state_key.begin() + i);
      }
      else i++;
  }

  static vector<string> key_i{"i"};
  static vector<string> key_o{"0"};
  static vector<string> key_u{"u"};
  static vector<string> key_x{"x"};
  static vector<string> key_io{"i", "o"};
  static vector<string> key_iu{"i", "u"};
  static vector<string> key_ix{"i", "x"};
  static vector<string> key_ou{"o", "u"};
  static vector<string> key_ox{"o", "x"};
  static vector<string> key_ux{"u", "x"};

  if (state_key == key_i) {x = 1; th = 0; key = "i";}
  else if (state_key == key_o) {x = 1; th = 1; key = "o";}
  else if (state_key == key_u) {x = 1; th = -1; key = "u";}
  else if (state_key == key_x) {x = 0.8; th = 0; key = "x";}
  else if (state_key == key_io) {x = 1; th = 1; key = "io";}
  else if (state_key == key_iu) {x = 1; th = -1; key = "iu";}
  else if (state_key == key_ix) {x = 0.8; th = 0; key = "ix";}
  else if (state_key == key_ou) {x = 1; th = 0; key = "ou";}
  else if (state_key == key_ox) {x = 1; th = 1; key = "ox";}
  else if (state_key == key_ux) {x = 1; th = -1; key = "ux";}
  else {x = 0; th = 0; key = "k";}

  speed = x * speed;
  steering = th * steering;

  if (abs(speed) > speed_max) speed = speed_max;


  QString txt = "";
  if (!ttcRadar.numObj){
    txt = txt + QString::fromStdString(state_description[0]) + "\n"
        + "speed     m/s = " + QString::number(round(speed)) + "\n"
        + "steering  rad = " + QString::number(nRound(steering,2)) + "\n"
        + "state_key     = " + QString::fromStdString(key) + "\n"
        + "counter       = " + QString::number(cnt) + "\n";
  }
  else {
   txt = txt + "TTC  controller \n"
       + "speed     m/s = " + QString::number(round(speed)) + "\n"
       + "steering  rad = " + QString::number(nRound(steering,2)) + "\n"
       + "state_key     = " + QString::fromStdString(key) + "\n"
       + "counter       = " + QString::number(cnt) + "\n";
  }
  ui->lblVel->setText(txt);


}

void radarScan::chatterCallback(const radarscan_pkg::ttcRadar_msg &msg)
{
  ttcRadar = msg;
  clearVector();
//  ROS_INFO("I heard: %f", ttcRadar.ttc[0]);

  for (int i = 0; i < ttcRadar.numObj; i++) {
    if (!ttcRadar.isApproach[i])
      ttcRadar.safetyZone.push_back("carNormal");
    else if(ttcRadar.ttc[i] < paramTTC.accidence)
      ttcRadar.safetyZone.push_back("carAccidence");
    else if(ttcRadar.ttc[i] < paramTTC.warning)
      ttcRadar.safetyZone.push_back("carWarning");
    else
      ttcRadar.safetyZone.push_back("carSafety");
  }

  plotDetectObj();
  displayParamTTC();

  autoDrive();


}


/*--------- private slots in GUI -------------------*/

void radarScan::on_btnClr_clicked()
{

}

void radarScan::on_btnFindxy_clicked()
{

//    clrCurrent.red();
//    clrCurrent.green();
//    clrCurrent.blue();

//    qInfo() << clrCurrent.red();
//    qInfo() << clrCurrent.green();
//    qInfo() << clrCurrent.blue();

}

void radarScan::on_paramTTC_clicked()
{
  paramTTC.safety = ui->txtTTCSafety->toPlainText().toFloat();
  paramTTC.warning = ui->txtTTCWarning->toPlainText().toFloat();
  paramTTC.accidence = ui->txtTTCAccidence->toPlainText().toFloat();
}

