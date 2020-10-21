#include "mainmenu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainMenu w;
    w.setGeometry( 500, 300, 400, 275 );
    w.show();
    return a.exec();
}
