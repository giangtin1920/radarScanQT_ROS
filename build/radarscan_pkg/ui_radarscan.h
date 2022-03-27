/********************************************************************************
** Form generated from reading UI file 'radarscan.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RADARSCAN_H
#define UI_RADARSCAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_radarScan
{
public:
    QGraphicsView *graphicsView_radarScan;
    QPushButton *btnFindxy;
    QPushButton *paramTTC;
    QPushButton *btnClr;
    QTextEdit *txtTTCAccidence;
    QTextEdit *txtTTCWarning;
    QTextEdit *txtTTCSafety;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lblTTC;
    QLabel *lblVel;

    void setupUi(QWidget *radarScan)
    {
        if (radarScan->objectName().isEmpty())
            radarScan->setObjectName(QStringLiteral("radarScan"));
        radarScan->resize(929, 628);
        radarScan->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 106, 255), stop:1 rgba(67, 53, 91, 255));"));
        graphicsView_radarScan = new QGraphicsView(radarScan);
        graphicsView_radarScan->setObjectName(QStringLiteral("graphicsView_radarScan"));
        graphicsView_radarScan->setGeometry(QRect(50, 20, 225, 460));
        graphicsView_radarScan->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
""));
        btnFindxy = new QPushButton(radarScan);
        btnFindxy->setObjectName(QStringLiteral("btnFindxy"));
        btnFindxy->setGeometry(QRect(310, 322, 152, 25));
        paramTTC = new QPushButton(radarScan);
        paramTTC->setObjectName(QStringLiteral("paramTTC"));
        paramTTC->setGeometry(QRect(310, 386, 152, 25));
        btnClr = new QPushButton(radarScan);
        btnClr->setObjectName(QStringLiteral("btnClr"));
        btnClr->setGeometry(QRect(310, 450, 152, 25));
        txtTTCAccidence = new QTextEdit(radarScan);
        txtTTCAccidence->setObjectName(QStringLiteral("txtTTCAccidence"));
        txtTTCAccidence->setGeometry(QRect(490, 320, 104, 41));
        txtTTCAccidence->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
"color:rgb(255,255,255);\n"
""));
        txtTTCWarning = new QTextEdit(radarScan);
        txtTTCWarning->setObjectName(QStringLiteral("txtTTCWarning"));
        txtTTCWarning->setGeometry(QRect(490, 370, 104, 41));
        txtTTCWarning->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
"color:rgb(255,255,255);\n"
""));
        txtTTCSafety = new QTextEdit(radarScan);
        txtTTCSafety->setObjectName(QStringLiteral("txtTTCSafety"));
        txtTTCSafety->setGeometry(QRect(490, 430, 104, 41));
        txtTTCSafety->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
"color:rgb(255,255,255);\n"
""));
        label = new QLabel(radarScan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 340, 121, 17));
        label_2 = new QLabel(radarScan);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(620, 380, 121, 17));
        label_3 = new QLabel(radarScan);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(620, 440, 121, 17));
        lblTTC = new QLabel(radarScan);
        lblTTC->setObjectName(QStringLiteral("lblTTC"));
        lblTTC->setGeometry(QRect(320, 40, 301, 111));
        lblTTC->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);\n"
"font: 100 48pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        lblVel = new QLabel(radarScan);
        lblVel->setObjectName(QStringLiteral("lblVel"));
        lblVel->setGeometry(QRect(320, 160, 281, 81));
        lblVel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font:100 48pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));

        retranslateUi(radarScan);

        QMetaObject::connectSlotsByName(radarScan);
    } // setupUi

    void retranslateUi(QWidget *radarScan)
    {
        radarScan->setWindowTitle(QApplication::translate("radarScan", "Form", Q_NULLPTR));
        btnFindxy->setText(QApplication::translate("radarScan", "find", Q_NULLPTR));
        paramTTC->setText(QApplication::translate("radarScan", "paramTTC", Q_NULLPTR));
        btnClr->setText(QApplication::translate("radarScan", "clear", Q_NULLPTR));
        txtTTCAccidence->setHtml(QApplication::translate("radarScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3</p></body></html>", Q_NULLPTR));
        txtTTCWarning->setHtml(QApplication::translate("radarScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">30</p></body></html>", Q_NULLPTR));
        txtTTCSafety->setHtml(QApplication::translate("radarScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">50</p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("radarScan", "txtTTCAccidence", Q_NULLPTR));
        label_2->setText(QApplication::translate("radarScan", "txtTTCWarning", Q_NULLPTR));
        label_3->setText(QApplication::translate("radarScan", "txtTTCSafety", Q_NULLPTR));
        lblTTC->setText(QApplication::translate("radarScan", "TTC", Q_NULLPTR));
        lblVel->setText(QApplication::translate("radarScan", "TTC", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class radarScan: public Ui_radarScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADARSCAN_H
