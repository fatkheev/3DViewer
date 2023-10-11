/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QWidget>
#include "modelviewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    ModelViewer *openGLWidget;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_6;
    QPushButton *green_background;
    QPushButton *red_background;
    QPushButton *black_background;
    QPushButton *blue_background;
    QPushButton *yellow_background;
    QPushButton *white_background;
    QPushButton *purply_background;
    QPushButton *orange_background;
    QPushButton *pink_background;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_2;
    QScrollBar *horizontalScrollBar;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QLabel *label_19;
    QScrollBar *horizontalScrollBar_2;
    QPushButton *green_vertex;
    QPushButton *green_edge;
    QPushButton *blue_vertex;
    QPushButton *black_vertex;
    QPushButton *red_vertex;
    QPushButton *orange_edge;
    QPushButton *yellow_edge;
    QPushButton *white_edge;
    QGroupBox *groupBox_6;
    QScrollBar *horizontalScrollBar_x;
    QScrollBar *horizontalScrollBar_y;
    QScrollBar *horizontalScrollBar_z;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QGroupBox *groupBox_7;
    QScrollBar *moveScrollBar_x;
    QScrollBar *moveScrollBar_y;
    QScrollBar *moveScrollBar_z;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_12;
    QGroupBox *groupBox_8;
    QScrollBar *ScrollBar_scale;
    QLabel *label_20;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_27;
    QGroupBox *groupBox_5;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_name;
    QLabel *label_V;
    QLabel *label_F;
    QPushButton *pushButton_22;
    QPushButton *GIF;
    QPushButton *pushButton_26;
    QPushButton *pushButton_15;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1060, 661);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openGLWidget = new ModelViewer(centralwidget);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(10, 10, 640, 640));
        openGLWidget->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(660, 10, 391, 80));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(200, 10, 171, 25));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 111, 20));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid silver; \n"
"border-radius: 5px;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 45, 81, 16));
        green_background = new QPushButton(groupBox);
        green_background->setObjectName("green_background");
        green_background->setGeometry(QRect(110, 45, 20, 20));
        green_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: green;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        red_background = new QPushButton(groupBox);
        red_background->setObjectName("red_background");
        red_background->setGeometry(QRect(140, 45, 20, 20));
        red_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: red;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        black_background = new QPushButton(groupBox);
        black_background->setObjectName("black_background");
        black_background->setGeometry(QRect(170, 45, 20, 20));
        black_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: black;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        blue_background = new QPushButton(groupBox);
        blue_background->setObjectName("blue_background");
        blue_background->setGeometry(QRect(200, 45, 20, 20));
        blue_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: blue;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        yellow_background = new QPushButton(groupBox);
        yellow_background->setObjectName("yellow_background");
        yellow_background->setGeometry(QRect(230, 45, 20, 20));
        yellow_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Yellow;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        white_background = new QPushButton(groupBox);
        white_background->setObjectName("white_background");
        white_background->setGeometry(QRect(290, 45, 20, 20));
        white_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: White;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        purply_background = new QPushButton(groupBox);
        purply_background->setObjectName("purply_background");
        purply_background->setGeometry(QRect(320, 45, 20, 20));
        purply_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Purple;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        orange_background = new QPushButton(groupBox);
        orange_background->setObjectName("orange_background");
        orange_background->setGeometry(QRect(260, 45, 20, 20));
        orange_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Orange;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        pink_background = new QPushButton(groupBox);
        pink_background->setObjectName("pink_background");
        pink_background->setGeometry(QRect(350, 45, 20, 20));
        pink_background->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: pink;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(660, 350, 391, 161));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(220, 40, 171, 20));
        horizontalScrollBar = new QScrollBar(groupBox_2);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setGeometry(QRect(220, 100, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 10, 51, 16));
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid silver; \n"
"border-radius: 5px;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 70, 111, 16));
        label_3->setStyleSheet(QString::fromUtf8("border: 2px solid silver; \n"
"border-radius: 5px;"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 130, 41, 20));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(60, 10, 71, 16));
        label_4->setStyleSheet(QString::fromUtf8("border: 2px solid silver; \n"
"border-radius: 5px;"));
        comboBox_4 = new QComboBox(groupBox_2);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(11, 40, 171, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 70, 111, 16));
        label_5->setStyleSheet(QString::fromUtf8("border: 2px solid silver; \n"
"border-radius: 5px;"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 130, 41, 20));
        horizontalScrollBar_2 = new QScrollBar(groupBox_2);
        horizontalScrollBar_2->setObjectName("horizontalScrollBar_2");
        horizontalScrollBar_2->setGeometry(QRect(20, 100, 160, 16));
        horizontalScrollBar_2->setOrientation(Qt::Horizontal);
        green_vertex = new QPushButton(groupBox_2);
        green_vertex->setObjectName("green_vertex");
        green_vertex->setGeometry(QRect(70, 130, 20, 20));
        green_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: green;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        green_edge = new QPushButton(groupBox_2);
        green_edge->setObjectName("green_edge");
        green_edge->setGeometry(QRect(270, 130, 20, 20));
        green_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: green;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        blue_vertex = new QPushButton(groupBox_2);
        blue_vertex->setObjectName("blue_vertex");
        blue_vertex->setGeometry(QRect(160, 130, 20, 20));
        blue_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: blue;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        black_vertex = new QPushButton(groupBox_2);
        black_vertex->setObjectName("black_vertex");
        black_vertex->setGeometry(QRect(130, 130, 20, 20));
        black_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: black;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        red_vertex = new QPushButton(groupBox_2);
        red_vertex->setObjectName("red_vertex");
        red_vertex->setGeometry(QRect(100, 130, 20, 20));
        red_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: red;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        orange_edge = new QPushButton(groupBox_2);
        orange_edge->setObjectName("orange_edge");
        orange_edge->setGeometry(QRect(330, 130, 20, 20));
        orange_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Orange;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        yellow_edge = new QPushButton(groupBox_2);
        yellow_edge->setObjectName("yellow_edge");
        yellow_edge->setGeometry(QRect(300, 130, 20, 20));
        yellow_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Yellow;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        white_edge = new QPushButton(groupBox_2);
        white_edge->setObjectName("white_edge");
        white_edge->setGeometry(QRect(360, 130, 20, 20));
        white_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: White;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(660, 100, 391, 91));
        horizontalScrollBar_x = new QScrollBar(groupBox_6);
        horizontalScrollBar_x->setObjectName("horizontalScrollBar_x");
        horizontalScrollBar_x->setGeometry(QRect(60, 5, 311, 20));
        horizontalScrollBar_x->setMinimum(-180);
        horizontalScrollBar_x->setMaximum(180);
        horizontalScrollBar_x->setOrientation(Qt::Horizontal);
        horizontalScrollBar_y = new QScrollBar(groupBox_6);
        horizontalScrollBar_y->setObjectName("horizontalScrollBar_y");
        horizontalScrollBar_y->setGeometry(QRect(60, 34, 311, 20));
        horizontalScrollBar_y->setMinimum(-180);
        horizontalScrollBar_y->setMaximum(180);
        horizontalScrollBar_y->setOrientation(Qt::Horizontal);
        horizontalScrollBar_z = new QScrollBar(groupBox_6);
        horizontalScrollBar_z->setObjectName("horizontalScrollBar_z");
        horizontalScrollBar_z->setGeometry(QRect(60, 60, 311, 20));
        horizontalScrollBar_z->setMinimum(-180);
        horizontalScrollBar_z->setMaximum(180);
        horizontalScrollBar_z->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 10, 21, 20));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 60, 21, 20));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 34, 21, 20));
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(660, 250, 391, 91));
        moveScrollBar_x = new QScrollBar(groupBox_7);
        moveScrollBar_x->setObjectName("moveScrollBar_x");
        moveScrollBar_x->setGeometry(QRect(60, 5, 311, 20));
        moveScrollBar_x->setMinimum(-100);
        moveScrollBar_x->setMaximum(100);
        moveScrollBar_x->setValue(0);
        moveScrollBar_x->setOrientation(Qt::Horizontal);
        moveScrollBar_y = new QScrollBar(groupBox_7);
        moveScrollBar_y->setObjectName("moveScrollBar_y");
        moveScrollBar_y->setGeometry(QRect(60, 34, 311, 20));
        moveScrollBar_y->setMinimum(-100);
        moveScrollBar_y->setMaximum(100);
        moveScrollBar_y->setValue(0);
        moveScrollBar_y->setOrientation(Qt::Horizontal);
        moveScrollBar_z = new QScrollBar(groupBox_7);
        moveScrollBar_z->setObjectName("moveScrollBar_z");
        moveScrollBar_z->setGeometry(QRect(60, 60, 311, 20));
        moveScrollBar_z->setMinimum(-100);
        moveScrollBar_z->setMaximum(100);
        moveScrollBar_z->setValue(0);
        moveScrollBar_z->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 8, 21, 20));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(20, 60, 21, 20));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 34, 21, 20));
        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setGeometry(QRect(660, 200, 391, 41));
        ScrollBar_scale = new QScrollBar(groupBox_8);
        ScrollBar_scale->setObjectName("ScrollBar_scale");
        ScrollBar_scale->setGeometry(QRect(60, 8, 311, 20));
        ScrollBar_scale->setStyleSheet(QString::fromUtf8(""));
        ScrollBar_scale->setMinimum(0);
        ScrollBar_scale->setMaximum(180);
        ScrollBar_scale->setSingleStep(1);
        ScrollBar_scale->setValue(90);
        ScrollBar_scale->setOrientation(Qt::Horizontal);
        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(20, 12, 41, 16));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(660, 520, 391, 131));
        pushButton_27 = new QPushButton(groupBox_3);
        pushButton_27->setObjectName("pushButton_27");
        pushButton_27->setGeometry(QRect(220, 90, 151, 21));
        pushButton_27->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid silver; \n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 40, 191, 80));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(10, 10, 58, 16));
        QFont font;
        font.setPointSize(11);
        label_16->setFont(font);
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(10, 30, 131, 15));
        label_18->setFont(font);
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 50, 131, 16));
        label_17->setFont(font);
        label_name = new QLabel(groupBox_5);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(100, 10, 81, 16));
        label_V = new QLabel(groupBox_5);
        label_V->setObjectName("label_V");
        label_V->setGeometry(QRect(100, 30, 81, 16));
        label_F = new QLabel(groupBox_5);
        label_F->setObjectName("label_F");
        label_F->setGeometry(QRect(100, 50, 81, 16));
        pushButton_22 = new QPushButton(groupBox_3);
        pushButton_22->setObjectName("pushButton_22");
        pushButton_22->setGeometry(QRect(280, 10, 100, 21));
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid silver; \n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        GIF = new QPushButton(groupBox_3);
        GIF->setObjectName("GIF");
        GIF->setGeometry(QRect(10, 10, 100, 21));
        GIF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid silver; \n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        pushButton_26 = new QPushButton(groupBox_3);
        pushButton_26->setObjectName("pushButton_26");
        pushButton_26->setGeometry(QRect(220, 50, 151, 21));
        pushButton_26->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid silver; \n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        pushButton_15 = new QPushButton(groupBox_3);
        pushButton_15->setObjectName("pushButton_15");
        pushButton_15->setGeometry(QRect(150, 10, 100, 21));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 2px solid silver; \n"
"border-radius: 5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "\321\206\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_6->setStyleSheet(QCoreApplication::translate("MainWindow", "border: 2px solid silver; \n"
"border-radius: 5px;", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \321\204\320\276\320\275\320\260 ", nullptr));
        green_background->setText(QString());
        red_background->setText(QString());
        black_background->setText(QString());
        blue_background->setText(QString());
        yellow_background->setText(QString());
        white_background->setText(QString());
        purply_background->setText(QString());
        orange_background->setText(QString());
        pink_background->setText(QString());
        groupBox_2->setTitle(QString());
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "\321\201\320\277\320\273\320\276\321\210\320\275\320\276\320\271", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("MainWindow", "\320\277\321\203\320\275\320\272\321\202\320\270\321\200\320\275\321\213\320\271", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\261\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \321\200\320\265\320\261\320\265\321\200", nullptr));
        label_7->setStyleSheet(QCoreApplication::translate("MainWindow", "border: 2px solid silver; \n"
"border-radius: 5px;", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "\320\272\321\200\321\203\320\263", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "\320\276\321\202\320\272\320\273.", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        label_19->setStyleSheet(QCoreApplication::translate("MainWindow", "border: 2px solid silver; \n"
"border-radius: 5px;", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 ", nullptr));
        green_vertex->setText(QString());
        green_edge->setText(QString());
        blue_vertex->setText(QString());
        black_vertex->setText(QString());
        red_vertex->setText(QString());
        orange_edge->setText(QString());
        yellow_edge->setText(QString());
        white_edge->setText(QString());
        groupBox_6->setTitle(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        groupBox_7->setTitle(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        groupBox_8->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        groupBox_3->setTitle(QString());
        pushButton_27->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        groupBox_5->setTitle(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\320\273-\320\262\320\276 \320\262\320\265\321\200\321\210\320\270\320\275:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\272\320\276\320\273-\320\262\320\276 \321\200\320\265\320\261\320\265\321\200:", nullptr));
        label_name->setText(QString());
        label_V->setText(QString());
        label_F->setText(QString());
        pushButton_22->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\320\270\320\275\321\210\320\276\321\202", nullptr));
        GIF->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
        pushButton_26->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\321\201\320\277\321\200\320\276\320\270\320\267\320\262\320\265\321\201\321\202\320\270", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
