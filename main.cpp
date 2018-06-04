#include <QApplication>
#include "mainWindow.h"

int main(int argc, char **argv) {
    QApplication a(argc, argv);
    mainWindow mw;
    mw.show();

    return a.exec();
}