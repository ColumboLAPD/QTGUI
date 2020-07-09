#include "mainwindow.h"
#include "cursors.h"
#include "plusminus.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    PlusMinus window;
    PlusMinus window1;
    window1.resize(250, 150);
    window1.setWindowTitle("Simple example");
    window1.setToolTip("QWidget");
    window1.show();

    return a.exec();
}
