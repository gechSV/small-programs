/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_num_6;
    QLabel *result_label;
    QPushButton *pushButton_num_5;
    QPushButton *pushButton_num_4;
    QPushButton *pushButton_num_9;
    QPushButton *pushButton_num_7;
    QPushButton *pushButton_num_8;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_neg;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_calculate;
    QPushButton *pushButton_num_3;
    QPushButton *pushButton_num_1;
    QPushButton *pushButton_num_2;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_null;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_exp;
    QPushButton *pushButton_pow;
    QPlainTextEdit *plainTextEdit_history;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(698, 420);
        MainWindow->setMinimumSize(QSize(350, 420));
        MainWindow->setMaximumSize(QSize(700, 420));
        MainWindow->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/design/icon_logo_30x30 v2.0.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(20, 20, 20);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_num_6 = new QPushButton(centralwidget);
        pushButton_num_6->setObjectName(QString::fromUtf8("pushButton_num_6"));
        pushButton_num_6->setGeometry(QRect(560, 210, 66, 66));
        pushButton_num_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        result_label = new QLabel(centralwidget);
        result_label->setObjectName(QString::fromUtf8("result_label"));
        result_label->setGeometry(QRect(348, -2, 271, 70));
        result_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    font: 63 20pt \"Bahnschrift SemiBold\";\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(20, 20, 20);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_num_5 = new QPushButton(centralwidget);
        pushButton_num_5->setObjectName(QString::fromUtf8("pushButton_num_5"));
        pushButton_num_5->setGeometry(QRect(490, 210, 66, 66));
        pushButton_num_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_num_4 = new QPushButton(centralwidget);
        pushButton_num_4->setObjectName(QString::fromUtf8("pushButton_num_4"));
        pushButton_num_4->setGeometry(QRect(420, 210, 66, 66));
        pushButton_num_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius:10px;\n"
"}\n"
"\n"
""));
        pushButton_num_9 = new QPushButton(centralwidget);
        pushButton_num_9->setObjectName(QString::fromUtf8("pushButton_num_9"));
        pushButton_num_9->setGeometry(QRect(560, 140, 66, 66));
        pushButton_num_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_num_7 = new QPushButton(centralwidget);
        pushButton_num_7->setObjectName(QString::fromUtf8("pushButton_num_7"));
        pushButton_num_7->setGeometry(QRect(420, 140, 66, 66));
        pushButton_num_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_num_8 = new QPushButton(centralwidget);
        pushButton_num_8->setObjectName(QString::fromUtf8("pushButton_num_8"));
        pushButton_num_8->setGeometry(QRect(490, 140, 66, 66));
        pushButton_num_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName(QString::fromUtf8("pushButton_percent"));
        pushButton_percent->setGeometry(QRect(560, 70, 66, 66));
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #8C8C8C;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(140, 140, 140, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #646464;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName(QString::fromUtf8("pushButton_AC"));
        pushButton_AC->setGeometry(QRect(420, 70, 66, 66));
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #8C8C8C;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(140, 140, 140, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #646464;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_neg = new QPushButton(centralwidget);
        pushButton_neg->setObjectName(QString::fromUtf8("pushButton_neg"));
        pushButton_neg->setGeometry(QRect(490, 70, 66, 66));
        pushButton_neg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #8C8C8C;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(140, 140, 140, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"\n"
"QPushButton:pressed {\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #646464;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"\n"
"}\n"
"\n"
""));
        pushButton_div = new QPushButton(centralwidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(630, 70, 66, 66));
        pushButton_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 21px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"\n"
"font: 75 20pt \"Roboto\";\n"
"color:(255,255,255);\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #4E95F2;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(78, 149, 242, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"font: 75 20pt \"Roboto\";\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #386CB0;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
"\n"
""));
        pushButton_mul = new QPushButton(centralwidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(630, 140, 66, 66));
        pushButton_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 21px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"\n"
"font: 75 20pt \"Roboto\";\n"
"color:(255,255,255);\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #4E95F2;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(78, 149, 242, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"font: 75 20pt \"Roboto\";\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #386CB0;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
"\n"
""));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(630, 210, 66, 66));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 21px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"\n"
"font: 75 20pt \"Roboto\";\n"
"color:(255,255,255);\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #4E95F2;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(78, 149, 242, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"font: 75 20pt \"Roboto\";\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #386CB0;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
"\n"
""));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(630, 280, 66, 66));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 21px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"\n"
"font: 75 20pt \"Roboto\";\n"
"color:(255,255,255);\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #4E95F2;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(78, 149, 242, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"font: 75 20pt \"Roboto\";\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #386CB0;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
""));
        pushButton_calculate = new QPushButton(centralwidget);
        pushButton_calculate->setObjectName(QString::fromUtf8("pushButton_calculate"));
        pushButton_calculate->setGeometry(QRect(630, 350, 66, 66));
        pushButton_calculate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 21px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"\n"
"font: 75 20pt \"Roboto\";\n"
"color:(255,255,255);\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #4E95F2;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(78, 149, 242, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"font: 75 20pt \"Roboto\";\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #386CB0;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
""));
        pushButton_num_3 = new QPushButton(centralwidget);
        pushButton_num_3->setObjectName(QString::fromUtf8("pushButton_num_3"));
        pushButton_num_3->setGeometry(QRect(560, 280, 66, 66));
        pushButton_num_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_num_1 = new QPushButton(centralwidget);
        pushButton_num_1->setObjectName(QString::fromUtf8("pushButton_num_1"));
        pushButton_num_1->setGeometry(QRect(420, 280, 66, 66));
        pushButton_num_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_num_2 = new QPushButton(centralwidget);
        pushButton_num_2->setObjectName(QString::fromUtf8("pushButton_num_2"));
        pushButton_num_2->setGeometry(QRect(490, 280, 66, 66));
        pushButton_num_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(560, 350, 66, 66));
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
""));
        pushButton_null = new QPushButton(centralwidget);
        pushButton_null->setObjectName(QString::fromUtf8("pushButton_null"));
        pushButton_null->setGeometry(QRect(490, 350, 66, 66));
        pushButton_null->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(350, 70, 66, 66));
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 14px;\n"
"line-height: 25px;\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"width: 70px;\n"
"height: 70px;\n"
"background: #363636;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(54, 54, 54, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #777777;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(350, 140, 66, 66));
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 14px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"width: 70px;\n"
"height: 70px;\n"
"background: #363636;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(54, 54, 54, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"QPushButton:pressed{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #777777;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
""));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(350, 210, 66, 66));
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 14px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"width: 70px;\n"
"height: 70px;\n"
"background: #363636;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(54, 54, 54, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #777777;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
""));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName(QString::fromUtf8("pushButton_ln"));
        pushButton_ln->setGeometry(QRect(350, 280, 66, 66));
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 14px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"width: 70px;\n"
"height: 70px;\n"
"background: #363636;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(54, 54, 54, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #777777;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}"));
        pushButton_exp = new QPushButton(centralwidget);
        pushButton_exp->setObjectName(QString::fromUtf8("pushButton_exp"));
        pushButton_exp->setGeometry(QRect(350, 350, 66, 66));
        pushButton_exp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 300;\n"
"font-size: 14px;\n"
"line-height: 25px;\n"
"\n"
"/* identical to box height */\n"
"text-align: center;\n"
"\n"
"color: #F2F2F2;\n"
"width: 70px;\n"
"height: 70px;\n"
"background: #363636;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(54, 54, 54, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"width: 70px;\n"
"height: 70px;\n"
"\n"
"background: #777777;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 20px;\n"
"}\n"
""));
        pushButton_pow = new QPushButton(centralwidget);
        pushButton_pow->setObjectName(QString::fromUtf8("pushButton_pow"));
        pushButton_pow->setGeometry(QRect(420, 350, 66, 66));
        pushButton_pow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"color: #333333; \n"
"font: 75 20pt \"Roboto\";\n"
"width: 65px;\n"
"height: 65px;\n"
"\n"
"background: #C4C4C4;\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;}\n"
"\n"
"QPushButton:hover{\n"
"	background-color: qconicalgradient(cx:0, cy:1, angle:354.7, stop:0 rgba(196, 196, 196, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"width: 67px;\n"
"height: 67px;\n"
"\n"
"background: rgba(196, 196, 196, 0.64);\n"
"box-shadow: 0px 4px 4px rgba(0, 0, 0, 0.25);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
""));
        plainTextEdit_history = new QPlainTextEdit(centralwidget);
        plainTextEdit_history->setObjectName(QString::fromUtf8("plainTextEdit_history"));
        plainTextEdit_history->setGeometry(QRect(-5, 0, 351, 431));
        plainTextEdit_history->setStyleSheet(QString::fromUtf8("font-family: Roboto;\n"
"font-style: normal;\n"
"font-weight: 500;\n"
"font-size: 24px;\n"
"line-height: 117.4%;\n"
"\n"
"/* or 28px */\n"
"text-align: right;\n"
"\n"
"color: #D8D8D8;\n"
"background-image: url(:/new/prefix1/Back_Plain_textEdit.png);"));
        plainTextEdit_history->setFrameShape(QFrame::NoFrame);
        plainTextEdit_history->setReadOnly(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(642, 11, 41, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image: url(:/new/prefix1/design/Unionback_space2.png);\n"
"width: 66px;\n"
"height: 66px;\n"
"\n"
"opacity: 0.1;\n"
"filter: drop-shadow(0px 4px 4px rgba(0, 0, 0, 0.25));\n"
"border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	image: url(:/new/prefix1/design/Unionback_space_gray.png);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Calculator", nullptr));
        pushButton_num_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        result_label->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_num_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_num_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_num_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_num_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_num_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_percent->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_AC->setText(QApplication::translate("MainWindow", "AC", nullptr));
        pushButton_neg->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_div->setText(QApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_mul->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_calculate->setText(QApplication::translate("MainWindow", "=", nullptr));
        pushButton_num_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_num_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_num_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_dot->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_null->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        pushButton_ln->setText(QApplication::translate("MainWindow", "ln", nullptr));
        pushButton_exp->setText(QApplication::translate("MainWindow", "exp", nullptr));
        pushButton_pow->setText(QApplication::translate("MainWindow", "x\342\201\277", nullptr));
        plainTextEdit_history->setPlainText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
