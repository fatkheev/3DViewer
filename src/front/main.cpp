#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[]){
    setenv("LC_NUMERIC", "C", 1);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
