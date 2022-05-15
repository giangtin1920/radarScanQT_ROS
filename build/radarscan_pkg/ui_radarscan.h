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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_radarScan
{
public:
    QGraphicsView *graphicsView_radarScan;
    QPushButton *paramTTC;
    QLabel *lblTTC;
    QLabel *lblVel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QTextEdit *txtTTCAccidence;
    QTextEdit *txtTTCWarning;
    QTextEdit *txtTTCSafety;

    void setupUi(QWidget *radarScan)
    {
        if (radarScan->objectName().isEmpty())
            radarScan->setObjectName(QStringLiteral("radarScan"));
        radarScan->resize(929, 628);
        radarScan->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(43, 71, 106, 255), stop:1 rgba(67, 53, 91, 255));"));
        graphicsView_radarScan = new QGraphicsView(radarScan);
        graphicsView_radarScan->setObjectName(QStringLiteral("graphicsView_radarScan"));
        graphicsView_radarScan->setGeometry(QRect(49, 20, 260, 460));
        graphicsView_radarScan->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
""));
        paramTTC = new QPushButton(radarScan);
        paramTTC->setObjectName(QStringLiteral("paramTTC"));
        paramTTC->setGeometry(QRect(620, 450, 152, 25));
        paramTTC->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 100 10pt \"Source Sans Pro SemiBold\";\n"
""));
        lblTTC = new QLabel(radarScan);
        lblTTC->setObjectName(QStringLiteral("lblTTC"));
        lblTTC->setGeometry(QRect(360, 40, 151, 231));
        lblTTC->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 255, 255);\n"
"font: 100 10pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        lblTTC->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblVel = new QLabel(radarScan);
        lblVel->setObjectName(QStringLiteral("lblVel"));
        lblVel->setGeometry(QRect(530, 40, 191, 201));
        lblVel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font:100 10pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
""));
        lblVel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        horizontalLayoutWidget = new QWidget(radarScan);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(360, 360, 251, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 100 10pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 100 10pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 100 10pt \"Source Sans Pro SemiBold\";\n"
"background-color: rgba(255, 255, 255, 0);"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        txtTTCAccidence = new QTextEdit(horizontalLayoutWidget);
        txtTTCAccidence->setObjectName(QStringLiteral("txtTTCAccidence"));
        txtTTCAccidence->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
"color:rgb(255,255,255);\n"
""));

        verticalLayout->addWidget(txtTTCAccidence);

        txtTTCWarning = new QTextEdit(horizontalLayoutWidget);
        txtTTCWarning->setObjectName(QStringLiteral("txtTTCWarning"));
        txtTTCWarning->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
"color:rgb(255,255,255);\n"
""));

        verticalLayout->addWidget(txtTTCWarning);

        txtTTCSafety = new QTextEdit(horizontalLayoutWidget);
        txtTTCSafety->setObjectName(QStringLiteral("txtTTCSafety"));
        txtTTCSafety->setStyleSheet(QLatin1String("border-radius: 5px;\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px;\n"
"border: 5px solid rgb(75, 85, 117);\n"
"color:rgb(255,255,255);\n"
""));

        verticalLayout->addWidget(txtTTCSafety);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(radarScan);

        QMetaObject::connectSlotsByName(radarScan);
    } // setupUi

    void retranslateUi(QWidget *radarScan)
    {
        radarScan->setWindowTitle(QApplication::translate("radarScan", "Form", Q_NULLPTR));
        paramTTC->setText(QApplication::translate("radarScan", "Set paramTTC", Q_NULLPTR));
        lblTTC->setText(QApplication::translate("radarScan", "TTC", Q_NULLPTR));
        lblVel->setText(QApplication::translate("radarScan", "CONTROL", Q_NULLPTR));
        label->setText(QApplication::translate("radarScan", "txtTTCAccidence", Q_NULLPTR));
        label_2->setText(QApplication::translate("radarScan", "txtTTCWarning", Q_NULLPTR));
        label_3->setText(QApplication::translate("radarScan", "txtTTCSafety", Q_NULLPTR));
        txtTTCAccidence->setHtml(QApplication::translate("radarScan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2</p></body></html>", Q_NULLPTR));
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
    } // retranslateUi

};

namespace Ui {
    class radarScan: public Ui_radarScan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RADARSCAN_H
