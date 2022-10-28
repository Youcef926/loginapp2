#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


       w.show();
    //w.showMaximized();
    // w.showFullScreen();


    return a.exec();
}
