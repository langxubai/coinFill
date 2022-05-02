#include "mainscene.h"
#include "ui_mainscene.h"
#include<QPainter>

MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);

    this->setFixedSize(300,300);
    this->setWindowTitle("hhhhhhh");
    this->setWindowIcon(QIcon("://foorQt/2021.jpg"));

    connect(ui->actiontuichu,&QAction::triggered,[=](){
        this->close();
    });

}



void MainScene::paintEvent(QPaintEvent*){
    QPainter painter(this);
    //设置背景
    QPixmap pix;
    pix.load("://foorQt/2021.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //设置标题符号
    pix.load("://foorQt/2021.jpg");
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.1);
    painter.drawPixmap(30,30,pix);
}

MainScene::~MainScene()
{
    delete ui;
}

