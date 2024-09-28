#include "visortech.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VisorTech w;
    w.show();
    return a.exec();
}
