#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class myPushBUtton : public QPushButton
{
    Q_OBJECT
public:
    //explicit myPushBUtton(QWidget *parent = nullptr);

    myPushBUtton(QString nomalImg,QString pressImg = "");


    QString nomalImgPath;
    QString pressImgPath;
signals:

};

#endif // MYPUSHBUTTON_H
