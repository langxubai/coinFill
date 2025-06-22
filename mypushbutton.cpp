#include "mypushbutton.h"
#include<QDebug>

//myPushBUtton::myPushBUtton(QWidget *parent)
//    : QWidget{parent}
//{

//}

myPushBUtton::myPushBUtton(QString nomalImg,QString pressImg)
{
    this->nomalImgPath=nomalImg;
    this->pressImgPath=pressImg;

    QPixmap pix;
    bool ret = pix.load(nomalImg);
    if(!ret)
    {
        qDebug()<<"false";
        return;
    }

    this->setFixedSize(pix.width(),pix.height());
    //设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px;}");

    this->setIcon(pix);

    this->setIconSize(QSize(pix.width(),pix.height()));


}
