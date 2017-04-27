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
    ui->tank->setText("tank");
    ui->Preset1Mod->setRange(40,100);
    ui->Preset1Mod_2->setRange(40,100);
    ui->Preset2Mod->setRange(40,100);
    ui->Preset2Mod_2->setRange(40,100);
    ui->PresetMod3->setRange(40,100);
    ui->PresetMod3_2->setRange(40,100);
    ui->Preset1Mod->setValue(40);
    ui->Preset1Mod_2->setValue(40);
    ui->Preset2Mod->setValue(40);
    ui->Preset2Mod_2->setValue(40);
    ui->PresetMod3->setValue(40);
    ui->PresetMod3_2->setValue(40);
    ui->FL_MAN->setText("40");
    ui->FR_MAN->setText("40");
    ui->RL_MAN->setText("40");
    ui->RR_MAN->setText("40");

    QObject::connect(ui->Preset1Mod,SIGNAL(valueChanged(int)),this,SLOT(updatePreset1(int)));
    QObject::connect(ui->Preset2Mod,SIGNAL(valueChanged(int)),this,SLOT(updatePreset2(int)));
    QObject::connect(ui->PresetMod3,SIGNAL(valueChanged(int)),this,SLOT(updatePreset3(int)));
    QObject::connect(ui->Preset1Mod_2,SIGNAL(valueChanged(int)),this,SLOT(updatePreset1b(int)));
    QObject::connect(ui->Preset2Mod_2,SIGNAL(valueChanged(int)),this,SLOT(updatePreset2b(int)));
    QObject::connect(ui->PresetMod3_2,SIGNAL(valueChanged(int)),this,SLOT(updatePreset3b(int)));
    timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpdate()));
    timer->start(100);

    connect(ui->FL_UP,SIGNAL(released()),this,SLOT(FLUP()));
    connect(ui->FL_DOWN,SIGNAL(released()),this,SLOT(FLDOWN()));
    connect(ui->FR_UP,SIGNAL(released()),this,SLOT(FRUP()));
    connect(ui->FR_DOWN,SIGNAL(released()),this,SLOT(FRDOWN()));
    connect(ui->RL_UP,SIGNAL(released()),this,SLOT(RLUP()));
    connect(ui->RL_DOWN,SIGNAL(released()),this,SLOT(RLDOWN()));
    connect(ui->RR_UP,SIGNAL(released()),this,SLOT(RRUP()));
    connect(ui->RR_DOWN,SIGNAL(released()),this,SLOT(RRDOWN()));
    connect(ui->ON,SIGNAL(released()),this,SLOT(manualOn()));

    connect(ui->preset1,SIGNAL(released()),this,SLOT(button1()));
    connect(ui->preset2,SIGNAL(released()),this,SLOT(button2()));
    connect(ui->preset3,SIGNAL(released()),this,SLOT(button3()));
    button1();
    manOn=false;
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

void MainWindow::FLUP(){
    FL++;
    ui->FL_MAN->setText(QString::number(FL));
}

void MainWindow::FLDOWN(){
    FL--;
    ui->FL_MAN->setText(QString::number(FL));
}

void MainWindow::FRUP(){
    FR++;
    ui->FR_MAN->setText(QString::number(FR));
}

void MainWindow::FRDOWN(){
    FR--;
    ui->FR_MAN->setText(QString::number(FR));
}

void MainWindow::RLUP(){
    RL++;
    ui->RL_MAN->setText(QString::number(RL));
}

void MainWindow::RLDOWN(){
    RL--;
    ui->RL_MAN->setText(QString::number(RL));
}

void MainWindow::RRUP(){
    RR++;
    ui->RR_MAN->setText(QString::number(RR));
}

void MainWindow::RRDOWN(){
    RR--;
    ui->RR_MAN->setText(QString::number(RR));
}

void MainWindow::manualOn(){
    if(manOn){
        manOn=false;
        ui->ON->setStyleSheet(normalBut);
    }
    else{
        manOn=true;
        ui->ON->setStyleSheet(SelectedBut);
    }
}

void MainWindow::button1(){         //send commands to arduino for preset 1
    ui->preset1->setStyleSheet(SelectedBut);
    ui->preset2->setStyleSheet(normalBut);
    ui->preset3->setStyleSheet(normalBut);
}

void MainWindow::button2(){         //send commands to arduino for preset 2
    ui->preset1->setStyleSheet(normalBut);
    ui->preset2->setStyleSheet(SelectedBut);
    ui->preset3->setStyleSheet(normalBut);
}

void MainWindow::button3(){         //send commands to arduino for preset 3
    ui->preset1->setStyleSheet(normalBut);
    ui->preset2->setStyleSheet(normalBut);
    ui->preset3->setStyleSheet(SelectedBut);
}

void MainWindow::timerUpdate(){                 //this needs to update all pressure values
    QString todisplay= QString::number(preset1front);
    ui->front_left->setText(todisplay);
}
