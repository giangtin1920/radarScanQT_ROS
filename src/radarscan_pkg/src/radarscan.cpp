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

