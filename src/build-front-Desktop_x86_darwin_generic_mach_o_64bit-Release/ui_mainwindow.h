/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "modelviewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    ModelViewer *openGLWidget;
    QGroupBox *groupBox;
    QComboBox *ProjectionBox;
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
    QComboBox *type_edge;
    QScrollBar *horizontal_scroll_edge;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *type_V;
    QLabel *label_5;
    QScrollBar *horizontal_sccrol_vertice;
    QPushButton *green_vertex;
    QPushButton *blue_vertex;
    QPushButton *black_vertex;
    QPushButton *red_vertex;
    QPushButton *orange_edge;
    QPushButton *yellow_edge;
    QPushButton *white_edge;
    QPushButton *purply_edge;
    QGroupBox *groupBox_6;
    QScrollBar *horizontalScrollBar_x;
    QScrollBar *horizontalScrollBar_y;
    QScrollBar *horizontalScrollBar_z;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_3;
    QGroupBox *groupBox_7;
    QScrollBar *moveScrollBar_x;
    QScrollBar *moveScrollBar_y;
    QScrollBar *moveScrollBar_z;
    QLabel *label_13;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *spinBox_7;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QLabel *label_7;
    QGroupBox *groupBox_8;
    QScrollBar *ScrollBar_scale;
    QLabel *label_20;
    QSpinBox *spinBox_4;
    QGroupBox *groupBox_3;
    QPushButton *clean;
    QGroupBox *groupBox_5;
    QLabel *label_16;
    QLabel *label_18;
    QLabel *label_17;
    QLabel *label_name;
    QLabel *label_V;
    QLabel *label_F;
    QPushButton *screenshot;
    QPushButton *GIF;
    QPushButton *open_file;
    QLabel *label_14;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1060, 697);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        openGLWidget = new ModelViewer(centralwidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
        openGLWidget->setGeometry(QRect(10, 10, 640, 671));
        openGLWidget->setStyleSheet(QString::fromUtf8("\n"
"border-radius: 10px;"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(660, 200, 391, 80));
        ProjectionBox = new QComboBox(groupBox);
        ProjectionBox->addItem(QString());
        ProjectionBox->addItem(QString());
        ProjectionBox->setObjectName(QString::fromUtf8("ProjectionBox"));
        ProjectionBox->setGeometry(QRect(130, 10, 171, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 97, 20));
        label->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 45, 76, 20));
        green_background = new QPushButton(groupBox);
        green_background->setObjectName(QString::fromUtf8("green_background"));
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
        red_background->setObjectName(QString::fromUtf8("red_background"));
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
        black_background->setObjectName(QString::fromUtf8("black_background"));
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
        blue_background->setObjectName(QString::fromUtf8("blue_background"));
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
        yellow_background->setObjectName(QString::fromUtf8("yellow_background"));
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
        white_background->setObjectName(QString::fromUtf8("white_background"));
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
        purply_background->setObjectName(QString::fromUtf8("purply_background"));
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
        orange_background->setObjectName(QString::fromUtf8("orange_background"));
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
        pink_background->setObjectName(QString::fromUtf8("pink_background"));
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
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(660, 430, 391, 161));
        type_edge = new QComboBox(groupBox_2);
        type_edge->addItem(QString());
        type_edge->addItem(QString());
        type_edge->setObjectName(QString::fromUtf8("type_edge"));
        type_edge->setGeometry(QRect(220, 40, 171, 20));
        horizontal_scroll_edge = new QScrollBar(groupBox_2);
        horizontal_scroll_edge->setObjectName(QString::fromUtf8("horizontal_scroll_edge"));
        horizontal_scroll_edge->setGeometry(QRect(220, 100, 160, 16));
        horizontal_scroll_edge->setMinimum(1);
        horizontal_scroll_edge->setMaximum(20);
        horizontal_scroll_edge->setPageStep(1);
        horizontal_scroll_edge->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 10, 51, 20));
        label_2->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 70, 111, 20));
        label_3->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 10, 71, 20));
        label_4->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        type_V = new QComboBox(groupBox_2);
        type_V->addItem(QString());
        type_V->addItem(QString());
        type_V->addItem(QString());
        type_V->setObjectName(QString::fromUtf8("type_V"));
        type_V->setGeometry(QRect(11, 40, 171, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 70, 111, 20));
        label_5->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        horizontal_sccrol_vertice = new QScrollBar(groupBox_2);
        horizontal_sccrol_vertice->setObjectName(QString::fromUtf8("horizontal_sccrol_vertice"));
        horizontal_sccrol_vertice->setGeometry(QRect(20, 100, 160, 16));
        horizontal_sccrol_vertice->setMinimum(2);
        horizontal_sccrol_vertice->setMaximum(15);
        horizontal_sccrol_vertice->setPageStep(1);
        horizontal_sccrol_vertice->setValue(2);
        horizontal_sccrol_vertice->setOrientation(Qt::Horizontal);
        green_vertex = new QPushButton(groupBox_2);
        green_vertex->setObjectName(QString::fromUtf8("green_vertex"));
        green_vertex->setGeometry(QRect(40, 130, 20, 20));
        green_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: green;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        blue_vertex = new QPushButton(groupBox_2);
        blue_vertex->setObjectName(QString::fromUtf8("blue_vertex"));
        blue_vertex->setGeometry(QRect(130, 130, 20, 20));
        blue_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: blue;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        black_vertex = new QPushButton(groupBox_2);
        black_vertex->setObjectName(QString::fromUtf8("black_vertex"));
        black_vertex->setGeometry(QRect(100, 130, 20, 20));
        black_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: black;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        red_vertex = new QPushButton(groupBox_2);
        red_vertex->setObjectName(QString::fromUtf8("red_vertex"));
        red_vertex->setGeometry(QRect(70, 130, 20, 20));
        red_vertex->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: red;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        orange_edge = new QPushButton(groupBox_2);
        orange_edge->setObjectName(QString::fromUtf8("orange_edge"));
        orange_edge->setGeometry(QRect(310, 130, 20, 20));
        orange_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Orange;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        yellow_edge = new QPushButton(groupBox_2);
        yellow_edge->setObjectName(QString::fromUtf8("yellow_edge"));
        yellow_edge->setGeometry(QRect(280, 130, 20, 20));
        yellow_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Yellow;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        white_edge = new QPushButton(groupBox_2);
        white_edge->setObjectName(QString::fromUtf8("white_edge"));
        white_edge->setGeometry(QRect(340, 130, 20, 20));
        white_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: White;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        purply_edge = new QPushButton(groupBox_2);
        purply_edge->setObjectName(QString::fromUtf8("purply_edge"));
        purply_edge->setGeometry(QRect(250, 130, 20, 20));
        purply_edge->setStyleSheet(QString::fromUtf8(" QPushButton {background-color: Purple;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 white, stop: 1 gray);\n"
"}"));
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(660, 10, 391, 131));
        horizontalScrollBar_x = new QScrollBar(groupBox_6);
        horizontalScrollBar_x->setObjectName(QString::fromUtf8("horizontalScrollBar_x"));
        horizontalScrollBar_x->setGeometry(QRect(119, 40, 250, 20));
        horizontalScrollBar_x->setMinimum(-180);
        horizontalScrollBar_x->setMaximum(180);
        horizontalScrollBar_x->setOrientation(Qt::Horizontal);
        horizontalScrollBar_y = new QScrollBar(groupBox_6);
        horizontalScrollBar_y->setObjectName(QString::fromUtf8("horizontalScrollBar_y"));
        horizontalScrollBar_y->setGeometry(QRect(120, 70, 250, 20));
        horizontalScrollBar_y->setMinimum(-180);
        horizontalScrollBar_y->setMaximum(180);
        horizontalScrollBar_y->setOrientation(Qt::Horizontal);
        horizontalScrollBar_z = new QScrollBar(groupBox_6);
        horizontalScrollBar_z->setObjectName(QString::fromUtf8("horizontalScrollBar_z"));
        horizontalScrollBar_z->setGeometry(QRect(120, 100, 250, 20));
        horizontalScrollBar_z->setMinimum(-180);
        horizontalScrollBar_z->setMaximum(180);
        horizontalScrollBar_z->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(groupBox_6);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 21, 20));
        label_9 = new QLabel(groupBox_6);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 100, 21, 20));
        label_10 = new QLabel(groupBox_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 70, 21, 20));
        spinBox = new QSpinBox(groupBox_6);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(45, 40, 61, 20));
        spinBox->setMinimum(-180);
        spinBox->setMaximum(180);
        spinBox_2 = new QSpinBox(groupBox_6);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(45, 70, 61, 20));
        spinBox_2->setMinimum(-180);
        spinBox_2->setMaximum(180);
        spinBox_3 = new QSpinBox(groupBox_6);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(45, 100, 61, 20));
        spinBox_3->setMinimum(-180);
        spinBox_3->setMaximum(180);
        groupBox_7 = new QGroupBox(centralwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(660, 290, 391, 131));
        moveScrollBar_x = new QScrollBar(groupBox_7);
        moveScrollBar_x->setObjectName(QString::fromUtf8("moveScrollBar_x"));
        moveScrollBar_x->setGeometry(QRect(120, 40, 250, 20));
        moveScrollBar_x->setMinimum(-100);
        moveScrollBar_x->setMaximum(100);
        moveScrollBar_x->setValue(0);
        moveScrollBar_x->setOrientation(Qt::Horizontal);
        moveScrollBar_y = new QScrollBar(groupBox_7);
        moveScrollBar_y->setObjectName(QString::fromUtf8("moveScrollBar_y"));
        moveScrollBar_y->setGeometry(QRect(120, 70, 250, 20));
        moveScrollBar_y->setMinimum(-100);
        moveScrollBar_y->setMaximum(100);
        moveScrollBar_y->setValue(0);
        moveScrollBar_y->setOrientation(Qt::Horizontal);
        moveScrollBar_z = new QScrollBar(groupBox_7);
        moveScrollBar_z->setObjectName(QString::fromUtf8("moveScrollBar_z"));
        moveScrollBar_z->setGeometry(QRect(120, 100, 250, 20));
        moveScrollBar_z->setMinimum(-100);
        moveScrollBar_z->setMaximum(100);
        moveScrollBar_z->setValue(0);
        moveScrollBar_z->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 40, 21, 20));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 100, 21, 20));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 70, 21, 20));
        spinBox_7 = new QSpinBox(groupBox_7);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));
        spinBox_7->setGeometry(QRect(45, 70, 61, 20));
        spinBox_7->setMinimum(-180);
        spinBox_7->setMaximum(180);
        spinBox_5 = new QSpinBox(groupBox_7);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setGeometry(QRect(45, 100, 61, 20));
        spinBox_5->setMinimum(-180);
        spinBox_5->setMaximum(180);
        spinBox_6 = new QSpinBox(groupBox_7);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));
        spinBox_6->setGeometry(QRect(45, 40, 61, 20));
        spinBox_6->setMinimum(-180);
        spinBox_6->setMaximum(180);
        label_7 = new QLabel(groupBox_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(120, 10, 151, 20));
        label_7->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        groupBox_8 = new QGroupBox(centralwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(660, 150, 391, 41));
        ScrollBar_scale = new QScrollBar(groupBox_8);
        ScrollBar_scale->setObjectName(QString::fromUtf8("ScrollBar_scale"));
        ScrollBar_scale->setGeometry(QRect(170, 8, 201, 20));
        ScrollBar_scale->setStyleSheet(QString::fromUtf8(""));
        ScrollBar_scale->setMinimum(0);
        ScrollBar_scale->setMaximum(200);
        ScrollBar_scale->setSingleStep(1);
        ScrollBar_scale->setValue(100);
        ScrollBar_scale->setOrientation(Qt::Horizontal);
        label_20 = new QLabel(groupBox_8);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 12, 67, 20));
        label_20->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        spinBox_4 = new QSpinBox(groupBox_8);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setGeometry(QRect(100, 10, 61, 20));
        spinBox_4->setMinimum(0);
        spinBox_4->setMaximum(200);
        spinBox_4->setValue(100);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(660, 600, 391, 81));
        clean = new QPushButton(groupBox_3);
        clean->setObjectName(QString::fromUtf8("clean"));
        clean->setGeometry(QRect(300, 10, 80, 20));
        clean->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #CD5C5C;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1E90FF;\n"
"\n"
"}\n"
""));
        groupBox_5 = new QGroupBox(groupBox_3);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 40, 371, 31));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 10, 61, 16));
        QFont font;
        font.setPointSize(11);
        label_16->setFont(font);
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(170, 10, 61, 16));
        label_18->setFont(font);
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(270, 10, 41, 16));
        label_17->setFont(font);
        label_name = new QLabel(groupBox_5);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setGeometry(QRect(70, 10, 91, 16));
        QFont font1;
        font1.setPointSize(10);
        label_name->setFont(font1);
        label_name->setStyleSheet(QString::fromUtf8(""));
        label_V = new QLabel(groupBox_5);
        label_V->setObjectName(QString::fromUtf8("label_V"));
        label_V->setGeometry(QRect(230, 10, 40, 16));
        label_V->setFont(font1);
        label_V->setStyleSheet(QString::fromUtf8(""));
        label_F = new QLabel(groupBox_5);
        label_F->setObjectName(QString::fromUtf8("label_F"));
        label_F->setGeometry(QRect(320, 10, 40, 16));
        label_F->setFont(font1);
        label_F->setStyleSheet(QString::fromUtf8(""));
        screenshot = new QPushButton(groupBox_3);
        screenshot->setObjectName(QString::fromUtf8("screenshot"));
        screenshot->setGeometry(QRect(100, 10, 81, 20));
        screenshot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #808080;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1E90FF;\n"
"\n"
"}\n"
""));
        GIF = new QPushButton(groupBox_3);
        GIF->setObjectName(QString::fromUtf8("GIF"));
        GIF->setGeometry(QRect(10, 10, 80, 20));
        GIF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #808080;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1E90FF;\n"
"\n"
"}\n"
""));
        open_file = new QPushButton(groupBox_3);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        open_file->setGeometry(QRect(200, 10, 80, 20));
        open_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #808080;\n"
"border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1E90FF;\n"
"\n"
"}\n"
""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(800, 20, 113, 20));
        label_14->setStyleSheet(QString::fromUtf8("border: 2px solid grey; \n"
"border-radius: 5px;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        ProjectionBox->setItemText(0, QCoreApplication::translate("MainWindow", "\320\246\320\265\320\275\321\202\321\200\320\260\320\273\321\214\320\275\320\260\321\217", nullptr));
        ProjectionBox->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\321\214\320\275\320\260\321\217", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\277\321\200\320\276\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_6->setStyleSheet(QCoreApplication::translate("MainWindow", "border: 2px solid grey; \n"
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
        type_edge->setItemText(0, QCoreApplication::translate("MainWindow", "\320\241\320\277\320\273\320\276\321\210\320\275\320\276\320\271", nullptr));
        type_edge->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\321\203\320\275\320\272\321\202\320\270\321\200\320\275\321\213\320\271", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\261\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \321\200\320\265\320\261\320\265\321\200", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        type_V->setItemText(0, QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273.", nullptr));
        type_V->setItemText(1, QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        type_V->setItemText(2, QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        green_vertex->setText(QString());
        blue_vertex->setText(QString());
        black_vertex->setText(QString());
        red_vertex->setText(QString());
        orange_edge->setText(QString());
        yellow_edge->setText(QString());
        white_edge->setText(QString());
        purply_edge->setText(QString());
        groupBox_6->setTitle(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        groupBox_7->setTitle(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        groupBox_8->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        groupBox_3->setTitle(QString());
        clean->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        groupBox_5->setTitle(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\210\320\270\320\275\321\213:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\261\321\200\320\260:", nullptr));
        label_name->setText(QString());
        label_V->setText(QString());
        label_F->setText(QString());
        screenshot->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\320\270\320\275\321\210\320\276\321\202", nullptr));
        GIF->setText(QCoreApplication::translate("MainWindow", "GIF", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
