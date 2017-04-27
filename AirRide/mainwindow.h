#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <string>
#include <QTimer>
#include <sstream>

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
    float preset1front=40,preset1back=40,preset2front=40,preset2back=40,preset3front=40,preset3back=40;
    float FL=40,FR=40,RL=40,RR=40;
    QTimer *timer;
    const QString normalBut="QPushButton{background-color: white;color:black;}";
    const QString SelectedBut="QPushButton{background-color: green;color:white;}";
    bool manOn;
};

#endif // MAINWINDOW_H
