#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->back_left->setText("3");
    ui->front_left->setText("1");
    ui->back_right->setText("4");
    ui->front_right->setText("2");
    ui->tank->setText("shits hp");

    QObject::connect(ui->Preset1Mod,SIGNAL(valueChanged(int)),this,SLOT(updatePreset1(int)));
    QObject::connect(ui->Preset2Mod,SIGNAL(valueChanged(int)),this,SLOT(updatePreset2(int)));
    QObject::connect(ui->PresetMod3,SIGNAL(valueChanged(int)),this,SLOT(updatePreset3(int)));
    QObject::connect(ui->Preset1Mod_2,SIGNAL(valueChanged(int)),this,SLOT(updatePreset1b(int)));
    QObject::connect(ui->Preset2Mod_2,SIGNAL(valueChanged(int)),this,SLOT(updatePreset2b(int)));
    QObject::connect(ui->PresetMod3_2,SIGNAL(valueChanged(int)),this,SLOT(updatePreset3b(int)));
    timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(100);

    connect(ui->preset1,SIGNAL(released()),this,SLOT(button1()));
    connect(ui->preset2,SIGNAL(released()),this,SLOT(button2()));
    connect(ui->preset3,SIGNAL(released()),this,SLOT(button3()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updatePreset1(int newValue){
    preset1front=newValue;
}

void MainWindow::updatePreset2(int newValue){
    preset2front=newValue;
}

void MainWindow::updatePreset3(int newValue){
    preset3front=newValue;
}

void MainWindow::updatePreset1b(int newValue){
    preset1back=newValue;
}

void MainWindow::updatePreset2b(int newValue){
    preset2back=newValue;
}

void MainWindow::updatePreset3b(int newValue){
    preset3back=newValue;
}

void MainWindow::button1(){         //send commands to arduino for preset 1

}

void MainWindow::button2(){         //send commands to arduino for preset 2

}

void MainWindow::button3(){         //send commands to arduino for preset 3

}

void MainWindow::timerUpdate(){                 //this needs to update all pressure values
    QString todisplay= QString::number(preset1front);
    ui->front_left->setText(todisplay);
}
