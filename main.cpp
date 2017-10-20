#include "regresionmultiple.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RegresionMultiple w;
    w.show();

    return a.exec();
}
