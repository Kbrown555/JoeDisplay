#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inbound= new char[1024];
    std::ifstream infile("/home/pi/Documents/screen/JoeDisplay/preset.txt");
    float a,b,c,d,e,f;
    if(infile.is_open()&& infile>>a>>b>>c>>d>>e>>f){
        preset1front=a;
        preset1back=b;
        preset2front=c;
        preset2back=d;
        preset3front=e;
        preset3back=f;
        ui->Preset1Mod->setValue((int)a);
        ui->Preset1Mod_2->setValue((int)b);
        ui->Preset2Mod->setValue((int)c);
        ui->Preset2Mod_2->setValue((int)d);
        ui->PresetMod3->setValue((int)e);
        ui->PresetMod3_2->setValue((int)f);
        infile.close();
    }
    else{
        ui->Preset1Mod->setValue(40);
        ui->Preset1Mod_2->setValue(40);
        ui->Preset2Mod->setValue(40);
        ui->Preset2Mod_2->setValue(40);
        ui->PresetMod3->setValue(40);
        ui->PresetMod3_2->setValue(40);
    }

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
    ui->P1Flabel->setText(QString::number(preset1front));
    ui->P1Blabel->setText(QString::number(preset1back));
    ui->P2Flabel->setText(QString::number(preset2front));
    ui->P2Blabel->setText(QString::number(preset2back));
    ui->P3Flabel->setText(QString::number(preset3front));
    ui->P3Blabel->setText(QString::number(preset3back));
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
    timer->setInterval(200);
    timer->start();
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
    connect(ui->AirOut, SIGNAL(released()),this,SLOT(airOut()));
    manOn=false;
    USB= new Serial();

    button1();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::airOut(){
    char * toSend= new char[64];
    sprintf(toSend,"AO");
    USB->myWrite(toSend,strlen(toSend));
}

void MainWindow::updatePreset1(int newValue){
    preset1front=newValue;
    ui->P1Flabel->setText(QString::number(newValue));
    writeFile();
}

void MainWindow::updatePreset2(int newValue){
    preset2front=newValue;
    ui->P2Flabel->setText(QString::number(newValue));
    writeFile();
}

void MainWindow::updatePreset3(int newValue){
    preset3front=newValue;
    ui->P3Flabel->setText(QString::number(newValue));
    writeFile();
}

void MainWindow::updatePreset1b(int newValue){
    preset1back=newValue;
    ui->P1Blabel->setText(QString::number(newValue));
    writeFile();
}

void MainWindow::updatePreset2b(int newValue){
    preset2back=newValue;
    ui->P2Blabel->setText(QString::number(newValue));
    writeFile();
}

void MainWindow::updatePreset3b(int newValue){
    preset3back=newValue;
    ui->P3Blabel->setText(QString::number(newValue));
    writeFile();
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
    ui->preset1->setStyleSheet(normalBut);
    ui->preset2->setStyleSheet(normalBut);
    ui->preset3->setStyleSheet(normalBut);

    manOn=true;
    char * toSend= new char[64];
    ui->ON->setStyleSheet(SelectedBut);

    sprintf(toSend,"CMD:{%2.0f,%2.0f,%2.0f,%2.0f}",FL,FR,RL,RR);
    USB->myWrite(toSend,strlen(toSend));






}

void MainWindow::button1(){         //send commands to arduino for preset 1
    ui->preset1->setStyleSheet(SelectedBut);
    ui->preset2->setStyleSheet(normalBut);
    ui->preset3->setStyleSheet(normalBut);
    ui->ON->setStyleSheet(normalBut);
    manOn=false;
    char * toSend= new char[64];
    sprintf(toSend,"CMD:{%2.0f,%2.0f,%2.0f,%2.0f}",preset1front,preset1front,preset1back,preset1back);
    USB->myWrite(toSend,strlen(toSend));
}

void MainWindow::button2(){         //send commands to arduino for preset 2
    ui->preset1->setStyleSheet(normalBut);
    ui->preset2->setStyleSheet(SelectedBut);
    ui->preset3->setStyleSheet(normalBut);
    ui->ON->setStyleSheet(normalBut);
    manOn=false;
    char * toSend= new char[64];
    sprintf(toSend,"CMD:{%2.0f,%2.0f,%2.0f,%2.0f}",preset2front,preset2front,preset2back,preset2back);
    USB->myWrite(toSend,strlen(toSend));
}

void MainWindow::button3(){         //send commands to arduino for preset 3
    ui->preset1->setStyleSheet(normalBut);
    ui->preset2->setStyleSheet(normalBut);
    ui->preset3->setStyleSheet(SelectedBut);
    ui->ON->setStyleSheet(normalBut);
    manOn=false;
    char * toSend= new char[64];
    sprintf(toSend,"CMD:{%2.0f,%2.0f,%2.0f,%2.0f}",preset3front,preset3front,preset3back,preset3back);
    USB->myWrite(toSend,strlen(toSend));
}

void MainWindow::timerUpdate(){                 //this needs to update all pressure values
    timer->stop();
    /*
    char * buf=new char[128];
    int length;
    USB->myRead(buf,length,'}');
    if(length>0){
    QString F1,F2,B1,B2,tank;
    int i=0;
    while(buf[i]!='{')
        i++;
    i++;
    F1=buf[i]+buf[i+1]+buf[i+2];
    F2=buf[i+3]+buf[i+4]+buf[i+5];
    B1=buf[i+6]+buf[i+7]+buf[i+8];
    B2=buf[i+9]+buf[i+10]+buf[i+11];
    tank=buf[i+12]+buf[i+13]+buf[i+14];
    ui->front_left->setText(F1);
    ui->front_right->setText(F2);
    ui->back_left->setText(B1);
    ui->back_right->setText(B2);
    ui->tank->setText(tank);
    }*/


    char *buf = new char[128];
    startBuf=0;
    int length;
    std::string str="test";
    USB->myRead(buf,length,'}');
     if(length>0){
     //   memcpy(&inbound[startBuf],buf,length);
       // startBuf+=length;
         str=buf;
    }



    //str.assign(inbound,inbound+1);
    int start=str.find("{");
    int end=str.find("}");
    if(start>=0 && end>=0){
        str=str.substr(start,end-start+1);
       // ui->label_5->setText(QString::fromStdString(str));
        int temp= str.find("FL");
        std::string frontLeft= str.substr(temp+2,2);
        temp= str.find("FR");
        std::string frontRight= str.substr(temp+2,2);
        temp= str.find("RL");
        std::string rearLeft= str.substr(temp+2,2);
        temp= str.find("RR");
        std::string rearRight= str.substr(temp+2,2);
        temp=str.find("TK");
        std::string tank= str.substr(temp+2,2);
        ui->front_left->setText(QString::fromStdString(frontLeft));
        ui->front_right->setText(QString::fromStdString(frontRight));
        ui->back_left->setText(QString::fromStdString(rearLeft));
        ui->back_right->setText(QString::fromStdString(rearRight));
        ui->tank->setText(QString::fromStdString(tank));
    }
    else{}

    timer->start();
}

void MainWindow::writeFile(){
    std::ofstream outfile;
    outfile.open("/home/pi/Documents/screen/JoeDisplay/preset.txt");
    if(outfile.is_open()){
        outfile<<preset1front<<"\n"<<preset1back<<"\n"<<preset2front<<"\n"<<preset2back<<"\n"<<preset3front<<"\n"<<preset3back<<"\n";

    }
    outfile.close();
}
