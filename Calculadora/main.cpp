#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("focus");
    Widget w;
    w.show();
    return a.exec();
}
