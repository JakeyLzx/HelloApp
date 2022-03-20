#include "HelloApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HelloApp w;
    w.show();
    return a.exec();
}
