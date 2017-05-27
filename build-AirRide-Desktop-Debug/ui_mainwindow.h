/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *front_left;
    QLabel *back_left;
    QLabel *front_right;
    QLabel *back_right;
    QLabel *tank;
    QPushButton *preset1;
    QPushButton *preset2;
    QPushButton *preset3;
    QPushButton *AirOut;
    QWidget *tab_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *Preset1Mod;
    QSlider *Preset2Mod;
    QSlider *PresetMod3;
    QSlider *Preset1Mod_2;
    QSlider *Preset2Mod_2;
    QSlider *PresetMod3_2;
    QLabel *P1Flabel;
    QLabel *P1Blabel;
    QLabel *P2Flabel;
    QLabel *P2Blabel;
    QLabel *P3Flabel;
    QLabel *P3Blabel;
    QWidget *tab_3;
    QPushButton *FL_UP;
    QPushButton *FL_DOWN;
    QPushButton *FR_UP;
    QPushButton *FR_DOWN;
    QPushButton *RL_UP;
    QPushButton *RL_DOWN;
    QPushButton *RR_UP;
    QPushButton *RR_DOWN;
    QLabel *FL_MAN;
    QLabel *FR_MAN;
    QLabel *RR_MAN;
    QLabel *RL_MAN;
    QPushButton *ON;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(480, 320);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"background-color:black;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 480, 320));
        tabWidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:black;\n"
"border-color:black;\n"
"}\n"
"QTabWidget{\n"
"background-color:black;\n"
"}\n"
"QTabBar::tab{\n"
"color:white;\n"
"background-color:black;\n"
"height: 105px;\n"
"}\n"
"QTabBar{\n"
"background-color:black;\n"
"color:black;\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 131, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        front_left = new QLabel(tab);
        front_left->setObjectName(QString::fromUtf8("front_left"));
        front_left->setGeometry(QRect(40, 40, 68, 21));
        front_left->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        front_left->setAlignment(Qt::AlignCenter);
        back_left = new QLabel(tab);
        back_left->setObjectName(QString::fromUtf8("back_left"));
        back_left->setGeometry(QRect(40, 170, 68, 21));
        back_left->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        back_left->setAlignment(Qt::AlignCenter);
        front_right = new QLabel(tab);
        front_right->setObjectName(QString::fromUtf8("front_right"));
        front_right->setGeometry(QRect(170, 40, 68, 21));
        front_right->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        front_right->setAlignment(Qt::AlignCenter);
        back_right = new QLabel(tab);
        back_right->setObjectName(QString::fromUtf8("back_right"));
        back_right->setGeometry(QRect(170, 170, 68, 21));
        back_right->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        back_right->setAlignment(Qt::AlignCenter);
        tank = new QLabel(tab);
        tank->setObjectName(QString::fromUtf8("tank"));
        tank->setGeometry(QRect(100, 130, 68, 21));
        tank->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        tank->setAlignment(Qt::AlignCenter);
        preset1 = new QPushButton(tab);
        preset1->setObjectName(QString::fromUtf8("preset1"));
        preset1->setGeometry(QRect(290, 30, 131, 61));
        preset1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: grey;\n"
"color:white;\n"
"}\n"
""));
        preset2 = new QPushButton(tab);
        preset2->setObjectName(QString::fromUtf8("preset2"));
        preset2->setGeometry(QRect(290, 120, 131, 61));
        preset2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: grey;\n"
"color:white;\n"
"}\n"
"\n"
""));
        preset3 = new QPushButton(tab);
        preset3->setObjectName(QString::fromUtf8("preset3"));
        preset3->setGeometry(QRect(290, 210, 131, 61));
        preset3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: grey;\n"
"color:white;\n"
"}\n"
"\n"
""));
        AirOut = new QPushButton(tab);
        AirOut->setObjectName(QString::fromUtf8("AirOut"));
        AirOut->setGeometry(QRect(20, 210, 241, 71));
        AirOut->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-radius: 10px;\n"
"    border-color: beige;\n"
"    font: bold 14px;\n"
"    min-width: 10em;\n"
"    padding: 6px;\n"
"color:white;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(224, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 200, 131, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        Preset1Mod = new QSlider(tab_2);
        Preset1Mod->setObjectName(QString::fromUtf8("Preset1Mod"));
        Preset1Mod->setGeometry(QRect(40, 30, 371, 26));
        Preset1Mod->setOrientation(Qt::Horizontal);
        Preset2Mod = new QSlider(tab_2);
        Preset2Mod->setObjectName(QString::fromUtf8("Preset2Mod"));
        Preset2Mod->setGeometry(QRect(40, 120, 371, 26));
        Preset2Mod->setOrientation(Qt::Horizontal);
        PresetMod3 = new QSlider(tab_2);
        PresetMod3->setObjectName(QString::fromUtf8("PresetMod3"));
        PresetMod3->setGeometry(QRect(40, 220, 371, 26));
        PresetMod3->setOrientation(Qt::Horizontal);
        Preset1Mod_2 = new QSlider(tab_2);
        Preset1Mod_2->setObjectName(QString::fromUtf8("Preset1Mod_2"));
        Preset1Mod_2->setGeometry(QRect(40, 70, 371, 26));
        Preset1Mod_2->setOrientation(Qt::Horizontal);
        Preset2Mod_2 = new QSlider(tab_2);
        Preset2Mod_2->setObjectName(QString::fromUtf8("Preset2Mod_2"));
        Preset2Mod_2->setGeometry(QRect(40, 160, 371, 26));
        Preset2Mod_2->setOrientation(Qt::Horizontal);
        PresetMod3_2 = new QSlider(tab_2);
        PresetMod3_2->setObjectName(QString::fromUtf8("PresetMod3_2"));
        PresetMod3_2->setGeometry(QRect(40, 260, 371, 26));
        PresetMod3_2->setOrientation(Qt::Horizontal);
        P1Flabel = new QLabel(tab_2);
        P1Flabel->setObjectName(QString::fromUtf8("P1Flabel"));
        P1Flabel->setGeometry(QRect(10, 30, 21, 21));
        P1Flabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        P1Blabel = new QLabel(tab_2);
        P1Blabel->setObjectName(QString::fromUtf8("P1Blabel"));
        P1Blabel->setGeometry(QRect(10, 70, 21, 21));
        P1Blabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        P2Flabel = new QLabel(tab_2);
        P2Flabel->setObjectName(QString::fromUtf8("P2Flabel"));
        P2Flabel->setGeometry(QRect(10, 120, 21, 21));
        P2Flabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        P2Blabel = new QLabel(tab_2);
        P2Blabel->setObjectName(QString::fromUtf8("P2Blabel"));
        P2Blabel->setGeometry(QRect(10, 160, 21, 21));
        P2Blabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        P3Flabel = new QLabel(tab_2);
        P3Flabel->setObjectName(QString::fromUtf8("P3Flabel"));
        P3Flabel->setGeometry(QRect(10, 220, 21, 21));
        P3Flabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        P3Blabel = new QLabel(tab_2);
        P3Blabel->setObjectName(QString::fromUtf8("P3Blabel"));
        P3Blabel->setGeometry(QRect(10, 260, 21, 21));
        P3Blabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        FL_UP = new QPushButton(tab_3);
        FL_UP->setObjectName(QString::fromUtf8("FL_UP"));
        FL_UP->setGeometry(QRect(30, 20, 101, 31));
        FL_UP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        FL_DOWN = new QPushButton(tab_3);
        FL_DOWN->setObjectName(QString::fromUtf8("FL_DOWN"));
        FL_DOWN->setGeometry(QRect(30, 50, 101, 31));
        FL_DOWN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        FR_UP = new QPushButton(tab_3);
        FR_UP->setObjectName(QString::fromUtf8("FR_UP"));
        FR_UP->setGeometry(QRect(240, 20, 101, 31));
        FR_UP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        FR_DOWN = new QPushButton(tab_3);
        FR_DOWN->setObjectName(QString::fromUtf8("FR_DOWN"));
        FR_DOWN->setGeometry(QRect(240, 50, 101, 31));
        FR_DOWN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        RL_UP = new QPushButton(tab_3);
        RL_UP->setObjectName(QString::fromUtf8("RL_UP"));
        RL_UP->setGeometry(QRect(30, 130, 101, 31));
        RL_UP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
"\n"
""));
        RL_DOWN = new QPushButton(tab_3);
        RL_DOWN->setObjectName(QString::fromUtf8("RL_DOWN"));
        RL_DOWN->setGeometry(QRect(30, 160, 101, 31));
        RL_DOWN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        RR_UP = new QPushButton(tab_3);
        RR_UP->setObjectName(QString::fromUtf8("RR_UP"));
        RR_UP->setGeometry(QRect(240, 130, 101, 31));
        RR_UP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        RR_DOWN = new QPushButton(tab_3);
        RR_DOWN->setObjectName(QString::fromUtf8("RR_DOWN"));
        RR_DOWN->setGeometry(QRect(240, 160, 101, 31));
        RR_DOWN->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"}\n"
""));
        FL_MAN = new QLabel(tab_3);
        FL_MAN->setObjectName(QString::fromUtf8("FL_MAN"));
        FL_MAN->setGeometry(QRect(140, 20, 68, 61));
        FL_MAN->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        FR_MAN = new QLabel(tab_3);
        FR_MAN->setObjectName(QString::fromUtf8("FR_MAN"));
        FR_MAN->setGeometry(QRect(350, 20, 68, 61));
        FR_MAN->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}\n"
""));
        RR_MAN = new QLabel(tab_3);
        RR_MAN->setObjectName(QString::fromUtf8("RR_MAN"));
        RR_MAN->setGeometry(QRect(350, 130, 68, 61));
        RR_MAN->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}\n"
""));
        RL_MAN = new QLabel(tab_3);
        RL_MAN->setObjectName(QString::fromUtf8("RL_MAN"));
        RL_MAN->setGeometry(QRect(140, 130, 68, 61));
        RL_MAN->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        ON = new QPushButton(tab_3);
        ON->setObjectName(QString::fromUtf8("ON"));
        ON->setGeometry(QRect(60, 220, 301, 51));
        ON->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: white;\n"
"color:black;\n"
"    \n"
"}\n"
""));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Corner Pressures", 0, QApplication::UnicodeUTF8));
        front_left->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        back_left->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        front_right->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        back_right->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        tank->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        preset1->setText(QApplication::translate("MainWindow", "Preset 1", 0, QApplication::UnicodeUTF8));
        preset2->setText(QApplication::translate("MainWindow", "Preset 2", 0, QApplication::UnicodeUTF8));
        preset3->setText(QApplication::translate("MainWindow", "Preset 3", 0, QApplication::UnicodeUTF8));
        AirOut->setText(QApplication::translate("MainWindow", "AIR OUT BOIIIII", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "General", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Preset 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Preset 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Preset 3", 0, QApplication::UnicodeUTF8));
        P1Flabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        P1Blabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        P2Flabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        P2Blabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        P3Flabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        P3Blabel->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Preset Adjust", 0, QApplication::UnicodeUTF8));
        FL_UP->setText(QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8));
        FL_DOWN->setText(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        FR_UP->setText(QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8));
        FR_DOWN->setText(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        RL_UP->setText(QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8));
        RL_DOWN->setText(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        RR_UP->setText(QApplication::translate("MainWindow", "Up", 0, QApplication::UnicodeUTF8));
        RR_DOWN->setText(QApplication::translate("MainWindow", "Down", 0, QApplication::UnicodeUTF8));
        FL_MAN->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        FR_MAN->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        RR_MAN->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        RL_MAN->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        ON->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
