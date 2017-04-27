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
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
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
"}"));
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 131, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        front_left = new QLabel(tab);
        front_left->setObjectName(QString::fromUtf8("front_left"));
        front_left->setGeometry(QRect(10, 40, 68, 21));
        front_left->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        front_left->setAlignment(Qt::AlignCenter);
        back_left = new QLabel(tab);
        back_left->setObjectName(QString::fromUtf8("back_left"));
        back_left->setGeometry(QRect(10, 150, 68, 21));
        back_left->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        back_left->setAlignment(Qt::AlignCenter);
        front_right = new QLabel(tab);
        front_right->setObjectName(QString::fromUtf8("front_right"));
        front_right->setGeometry(QRect(140, 40, 68, 21));
        front_right->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        front_right->setAlignment(Qt::AlignCenter);
        back_right = new QLabel(tab);
        back_right->setObjectName(QString::fromUtf8("back_right"));
        back_right->setGeometry(QRect(140, 150, 68, 21));
        back_right->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        back_right->setAlignment(Qt::AlignCenter);
        tank = new QLabel(tab);
        tank->setObjectName(QString::fromUtf8("tank"));
        tank->setGeometry(QRect(70, 100, 68, 21));
        tank->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        tank->setAlignment(Qt::AlignCenter);
        preset1 = new QPushButton(tab);
        preset1->setObjectName(QString::fromUtf8("preset1"));
        preset1->setGeometry(QRect(270, 10, 131, 61));
        preset1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: grey;\n"
"}\n"
""));
        preset2 = new QPushButton(tab);
        preset2->setObjectName(QString::fromUtf8("preset2"));
        preset2->setGeometry(QRect(270, 80, 131, 61));
        preset2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: grey;\n"
"}\n"
""));
        preset3 = new QPushButton(tab);
        preset3->setObjectName(QString::fromUtf8("preset3"));
        preset3->setGeometry(QRect(270, 160, 131, 61));
        preset3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: grey;\n"
"}"));
        AirOut = new QPushButton(tab);
        AirOut->setObjectName(QString::fromUtf8("AirOut"));
        AirOut->setGeometry(QRect(10, 170, 241, 71));
        AirOut->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: red;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 0, 131, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 170, 131, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"}"));
        Preset1Mod = new QSlider(tab_2);
        Preset1Mod->setObjectName(QString::fromUtf8("Preset1Mod"));
        Preset1Mod->setGeometry(QRect(40, 30, 371, 26));
        Preset1Mod->setOrientation(Qt::Horizontal);
        Preset2Mod = new QSlider(tab_2);
        Preset2Mod->setObjectName(QString::fromUtf8("Preset2Mod"));
        Preset2Mod->setGeometry(QRect(40, 110, 371, 26));
        Preset2Mod->setOrientation(Qt::Horizontal);
        PresetMod3 = new QSlider(tab_2);
        PresetMod3->setObjectName(QString::fromUtf8("PresetMod3"));
        PresetMod3->setGeometry(QRect(40, 200, 371, 26));
        PresetMod3->setOrientation(Qt::Horizontal);
        Preset1Mod_2 = new QSlider(tab_2);
        Preset1Mod_2->setObjectName(QString::fromUtf8("Preset1Mod_2"));
        Preset1Mod_2->setGeometry(QRect(40, 60, 371, 26));
        Preset1Mod_2->setOrientation(Qt::Horizontal);
        Preset2Mod_2 = new QSlider(tab_2);
        Preset2Mod_2->setObjectName(QString::fromUtf8("Preset2Mod_2"));
        Preset2Mod_2->setGeometry(QRect(40, 140, 371, 26));
        Preset2Mod_2->setOrientation(Qt::Horizontal);
        PresetMod3_2 = new QSlider(tab_2);
        PresetMod3_2->setObjectName(QString::fromUtf8("PresetMod3_2"));
        PresetMod3_2->setGeometry(QRect(40, 230, 371, 26));
        PresetMod3_2->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 480, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Preset 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Preset 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Preset 3", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
