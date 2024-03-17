#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //view
    ui->Slider1->setMinimum(8);
    ui->Slider1->setMaximum(90);
    ui->Slider1->setSingleStep(1);
    ui->Slider1->setValue(10);
    connect(ui->Slider1,&QAbstractSlider::valueChanged,this,[=](){
        ui->m_qglwidget->eye=(float)ui->Slider1->value()/20;
    });
    ui->Slider2->setMinimum(-180);
        ui->Slider2->setMaximum(180);
        ui->Slider2->setSingleStep(1);
        ui->Slider2->setValue(0);
    connect(ui->Slider2,&QAbstractSlider::valueChanged,this,[=](){
        ui->m_qglwidget->eyer=ui->Slider2->value();
    });
    ui->Slider3->setMinimum(-180);
        ui->Slider3->setMaximum(35);
        ui->Slider3->setSingleStep(5);
        ui->Slider3->setValue(0);
    connect(ui->Slider3,&QAbstractSlider::valueChanged,this,[=](){
        ui->m_qglwidget->eyey=ui->Slider3->value();
    });
    //door
    ui->radioButton1->setChecked(true);
    connect(ui->radioButton1,&QRadioButton::clicked,this,[=](){
        ui->m_qglwidget->door_flag=1;
    });
    connect(ui->radioButton2,&QRadioButton::clicked,this,[=](){
        ui->m_qglwidget->door_flag=0;
    });
        ui->Slider4->setMinimum(0);
        ui->Slider4->setMaximum(10);
        ui->Slider4->setSingleStep(1);
        ui->Slider4->setValue(3);
    connect(ui->Slider4,&QAbstractSlider::valueChanged,this,[=](){
        ui->m_qglwidget->m_speed=ui->Slider4->value();
    });
    ui->Slider5->setMinimum(170);
    ui->Slider5->setMaximum(300);
    ui->Slider5->setSingleStep(1);
    ui->Slider5->setValue(300);
connect(ui->Slider5,&QAbstractSlider::valueChanged,this,[=](){
    ui->m_qglwidget->m_radius=ui->Slider5->value();
});
ui->Slider6->setMinimum(0);
ui->Slider6->setMaximum(255);
ui->Slider6->setSingleStep(1);
ui->Slider6->setValue(200);
connect(ui->Slider6,&QAbstractSlider::valueChanged,this,[=](){
ui->m_qglwidget->m_color=(float)(ui->Slider6->value()/255);
});


}

MainWindow::~MainWindow()
{
    delete ui;
}

