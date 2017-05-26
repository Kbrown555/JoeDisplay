#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QTimer>
#include <sstream>
#include "Serial.h"
#include <fstream>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void updatePreset1(int);
    void updatePreset2(int);
    void updatePreset3(int);
    void updatePreset1b(int);
    void updatePreset2b(int);
    void updatePreset3b(int);
    void timerUpdate();
    void button1();
    void button2();
    void button3();

    void FLUP();
    void FLDOWN();
    void FRUP();
    void FRDOWN();
    void RLUP();
    void RLDOWN();
    void RRUP();
    void RRDOWN();
    void manualOn();


private:
    Ui::MainWindow *ui;
    float preset1front,preset1back,preset2front,preset2back,preset3front,preset3back;
    float FL=40,FR=40,RL=40,RR=40;
    QTimer *timer;
    QString normalBut="QPushButton{background-color: white;color:black;border-style: outset;border-width: 2px;border-radius: 10px;border-color: grey;padding: 6px;} QPushButton:pressed {background-color:green;color:white;border-style: inset;}";
    QString SelectedBut="QPushButton{background-color: green;color:white;border-style: outset;border-width: 2px;border-radius: 10px;border-color: grey;padding: 6px;}";
    bool manOn;
    Serial *USB;
    char * inbound;
    int startBuf;


    void writeFile();
};

#endif // MAINWINDOW_H
