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


private:
    Ui::MainWindow *ui;
    float preset1front,preset1back,preset2front,preset2back,preset3front,preset3back;
    QTimer *timer;
};

#endif // MAINWINDOW_H
