#ifndef RADARSCAN_H
#define RADARSCAN_H

#include <QWidget>
#include <QApplication>
#include <QTimer>

#include <vector>
#include <math.h>
#include <iostream>
#include <ros/ros.h>
#include <std_msgs/String.h>
using namespace std;

#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <radarscan_pkg/ttcRadar_msg.h>


struct cordinate
{
  float x;
  float y;
};

struct structParamGraphic
{
  cordinate sizeInPixel;
  cordinate sizeInMetre;
  cordinate sizeMarker;
  cordinate posRadar;
  float ratioX = 1;
  float ratioY = 1;
  float offset = 0;
};

struct structParamTTC
{
  float accidence;
  float warning;
  float safety;
  QString carNormal;
  QString carSafety;
  QString carWarning;
  QString carAccidence;
  vector<string> safetyZone;
};

namespace Ui {
class radarScan;
}

class radarScan : public QWidget
{
  Q_OBJECT


public:
  explicit radarScan(QWidget *parent = nullptr);
  ~radarScan();
  void chatterCallback(const radarscan_pkg::ttcRadar_msg &msg);
  radarscan_pkg::ttcRadar_msg ttcRadar;


private slots:

  void initParamTTC();

  void spinOnce();
  void initTimer();

  float nRound(float num, int n);
  void initGraphicRadar();

  void clearVector();
  float x2p(float x);
  float y2p(float y);
  QString carColor(string name);
  void plotDetectObj();
  void displayParamTTC();

  void on_btnClr_clicked();
  void on_btnFindxy_clicked();
  void on_paramTTC_clicked();


private:
  Ui::radarScan *ui;
  QImage imageRaw; // not using

  QTimer *timerRadar;
  structParamTTC paramTTC;

  // graphic
  structParamGraphic paramGraphicRadar;
  QGraphicsScene *graphicRadar;
  QGraphicsPixmapItem *radarScanBG, *markerObj;
  vector<QGraphicsPixmapItem*> vMarkerObj;
  QGraphicsTextItem *ttcObj;
  vector<QGraphicsTextItem*> vttcObj;

  // ROS
  ros::NodeHandle n;
  ros::Subscriber sub;
};

#endif // RADARSCAN_H
