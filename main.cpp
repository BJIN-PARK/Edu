#include "IntTypeStack.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IntTypeStack w;
    w.show();
    return a.exec();
}

