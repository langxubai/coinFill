#include "mainscene.h"
#include "chooselevelpage.h"

#include <QApplication>
#include <QObject>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainScene w;
    w.show();
    //QObject::connect(w.beginBtn,&QPushButton::clicked,clp,&QWidget::show);不能在main中使用connect
    return a.exec();
}
