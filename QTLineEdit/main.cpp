#include "QTLineEdit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTLineEdit w;
    w.show();
    return a.exec();
}
