/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_3;
    QLabel *label;
    QFrame *frame_5;
    QFrame *frame_6;
    QLabel *label_2;
    QFrame *frame_8;
    QFrame *frame_7;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_8;
    QDoubleSpinBox *Ymin;
    QDoubleSpinBox *Ymax;
    QLabel *label_5;
    QLabel *label_6;
    QDoubleSpinBox *Xmin;
    QDoubleSpinBox *Xmax;
    QFrame *frame_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QFrame *frame_11;
    QFrame *frame_2;
    QLabel *label_3;
    QLabel *label_9;
    QDoubleSpinBox *Xunit;
    QDoubleSpinBox *Yunit;
    QFrame *frame_9;
    QLabel *label_4;
    QPushButton *importTxt;
    QPushButton *eksportTxt;
    QPushButton *eksportPng;
    QFrame *frame_10;
    QLabel *myLabel;
    QFrame *frame_12;
    QCustomPlot *customPlot;
    QFrame *frame_13;
    QLabel *pierwszaWartLabel;
    QDoubleSpinBox *pierwszaWartosc;
    QLabel *drugaWartLabel;
    QDoubleSpinBox *drugaWartosc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1304, 630);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setGeometry(QRect(40, 20, 1131, 541));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(20);
        frame->setMidLineWidth(20);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 1131, 80));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_3->setFrameShape(QFrame::WinPanel);
        frame_3->setFrameShadow(QFrame::Plain);
        label = new QLabel(frame_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1131, 81));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("font: 40pt \"Harvest\";\n"
""));
        label->setFrameShape(QFrame::WinPanel);
        label->setAlignment(Qt::AlignCenter);
        label->setMargin(0);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 80, 291, 461));
        frame_5->setFrameShape(QFrame::WinPanel);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(0, 0, 291, 61));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        frame_6->setFrameShape(QFrame::WinPanel);
        frame_6->setFrameShadow(QFrame::Plain);
        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 0, 291, 61));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);\n"
"font: 15pt \"Times New Roman\";"));
        label_2->setFrameShape(QFrame::WinPanel);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setMargin(0);
        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(0, 240, 291, 141));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        frame_8->setFrameShape(QFrame::WinPanel);
        frame_8->setFrameShadow(QFrame::Plain);
        frame_7 = new QFrame(frame_8);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(0, 70, 291, 71));
        frame_7->setFrameShape(QFrame::WinPanel);
        frame_7->setFrameShadow(QFrame::Plain);
        label_11 = new QLabel(frame_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 0, 91, 71));
        label_11->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_11->setFrameShape(QFrame::WinPanel);
        label_7 = new QLabel(frame_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 10, 181, 21));
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(frame_7);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 80, 181, 21));
        label_8->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        Ymin = new QDoubleSpinBox(frame_7);
        Ymin->setObjectName(QString::fromUtf8("Ymin"));
        Ymin->setGeometry(QRect(120, 40, 62, 22));
        Ymin->setMinimum(-99.000000000000000);
        Ymax = new QDoubleSpinBox(frame_7);
        Ymax->setObjectName(QString::fromUtf8("Ymax"));
        Ymax->setGeometry(QRect(200, 40, 62, 22));
        Ymax->setMinimum(-99.000000000000000);
        label_5 = new QLabel(frame_8);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(0, 0, 91, 71));
        label_5->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_5->setFrameShape(QFrame::WinPanel);
        label_6 = new QLabel(frame_8);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 10, 181, 21));
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Times New Roman\";"));
        label_6->setAlignment(Qt::AlignCenter);
        Xmin = new QDoubleSpinBox(frame_8);
        Xmin->setObjectName(QString::fromUtf8("Xmin"));
        Xmin->setGeometry(QRect(120, 40, 62, 22));
        Xmin->setMinimum(-99.000000000000000);
        Xmax = new QDoubleSpinBox(frame_8);
        Xmax->setObjectName(QString::fromUtf8("Xmax"));
        Xmax->setGeometry(QRect(200, 40, 62, 22));
        Xmax->setMinimum(-99.000000000000000);
        frame_4 = new QFrame(frame_5);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 60, 291, 181));
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        frame_4->setFrameShape(QFrame::WinPanel);
        frame_4->setFrameShadow(QFrame::Plain);
        radioButton = new QRadioButton(frame_4);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(20, 20, 261, 26));
        radioButton->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("accessories-dictionary")));
        radioButton->setIcon(icon);
        radioButton->setIconSize(QSize(50, 50));
        radioButton_2 = new QRadioButton(frame_4);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(20, 60, 261, 26));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        radioButton_2->setIcon(icon);
        radioButton_2->setIconSize(QSize(50, 50));
        radioButton_3 = new QRadioButton(frame_4);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(20, 100, 261, 26));
        radioButton_3->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        radioButton_3->setIcon(icon);
        radioButton_3->setIconSize(QSize(50, 50));
        radioButton_4 = new QRadioButton(frame_4);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(20, 140, 261, 26));
        radioButton_4->setStyleSheet(QString::fromUtf8("font: 15pt \"Times New Roman\";"));
        radioButton_4->setIcon(icon);
        radioButton_4->setIconSize(QSize(50, 50));
        frame_11 = new QFrame(frame_5);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(0, 380, 291, 81));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_11->setFrameShape(QFrame::WinPanel);
        frame_11->setFrameShadow(QFrame::Plain);
        frame_2 = new QFrame(frame_11);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(0, 0, 111, 81));
        frame_2->setFrameShape(QFrame::WinPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 91, 61));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";"));
        label_9 = new QLabel(frame_11);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 10, 161, 21));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 12pt \"Times New Roman\";\n"
""));
        label_9->setAlignment(Qt::AlignCenter);
        Xunit = new QDoubleSpinBox(frame_11);
        Xunit->setObjectName(QString::fromUtf8("Xunit"));
        Xunit->setGeometry(QRect(120, 30, 62, 22));
        Xunit->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        Yunit = new QDoubleSpinBox(frame_11);
        Yunit->setObjectName(QString::fromUtf8("Yunit"));
        Yunit->setGeometry(QRect(210, 30, 62, 22));
        Yunit->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        frame_9 = new QFrame(frame);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(290, 480, 841, 61));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);"));
        frame_9->setFrameShape(QFrame::WinPanel);
        frame_9->setFrameShadow(QFrame::Plain);
        label_4 = new QLabel(frame_9);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 451, 61));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(192, 192, 192);\n"
"font: 14pt \"Harvest\";"));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setMargin(0);
        importTxt = new QPushButton(frame_9);
        importTxt->setObjectName(QString::fromUtf8("importTxt"));
        importTxt->setGeometry(QRect(710, 10, 121, 41));
        importTxt->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        importTxt->setFlat(false);
        eksportTxt = new QPushButton(frame_9);
        eksportTxt->setObjectName(QString::fromUtf8("eksportTxt"));
        eksportTxt->setGeometry(QRect(460, 10, 121, 41));
        eksportTxt->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        eksportTxt->setFlat(false);
        eksportPng = new QPushButton(frame_9);
        eksportPng->setObjectName(QString::fromUtf8("eksportPng"));
        eksportPng->setGeometry(QRect(590, 10, 111, 41));
        eksportPng->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        eksportPng->setAutoDefault(true);
        frame_10 = new QFrame(frame);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(290, 80, 841, 61));
        frame_10->setStyleSheet(QString::fromUtf8(""));
        frame_10->setFrameShape(QFrame::WinPanel);
        frame_10->setFrameShadow(QFrame::Plain);
        myLabel = new QLabel(frame_10);
        myLabel->setObjectName(QString::fromUtf8("myLabel"));
        myLabel->setGeometry(QRect(0, 0, 841, 61));
        myLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);\n"
"font: 16pt \"Times New Roman\";"));
        myLabel->setFrameShape(QFrame::WinPanel);
        myLabel->setAlignment(Qt::AlignCenter);
        myLabel->setMargin(0);
        frame_12 = new QFrame(frame);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(290, 140, 841, 341));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(236, 240, 241);"));
        frame_12->setFrameShape(QFrame::WinPanel);
        frame_12->setFrameShadow(QFrame::Plain);
        customPlot = new QCustomPlot(frame_12);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(20, 20, 801, 301));
        frame_13 = new QFrame(centralwidget);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(1180, 90, 120, 161));
        frame_13->setStyleSheet(QString::fromUtf8("background-color: rgb(156, 156, 156);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        frame_13->setLineWidth(3);
        pierwszaWartLabel = new QLabel(frame_13);
        pierwszaWartLabel->setObjectName(QString::fromUtf8("pierwszaWartLabel"));
        pierwszaWartLabel->setGeometry(QRect(0, 20, 111, 20));
        pierwszaWartLabel->setAlignment(Qt::AlignCenter);
        pierwszaWartosc = new QDoubleSpinBox(frame_13);
        pierwszaWartosc->setObjectName(QString::fromUtf8("pierwszaWartosc"));
        pierwszaWartosc->setGeometry(QRect(30, 50, 62, 25));
        pierwszaWartosc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        drugaWartLabel = new QLabel(frame_13);
        drugaWartLabel->setObjectName(QString::fromUtf8("drugaWartLabel"));
        drugaWartLabel->setGeometry(QRect(0, 80, 111, 20));
        drugaWartLabel->setAlignment(Qt::AlignCenter);
        drugaWartosc = new QDoubleSpinBox(frame_13);
        drugaWartosc->setObjectName(QString::fromUtf8("drugaWartosc"));
        drugaWartosc->setGeometry(QRect(30, 110, 62, 25));
        drugaWartosc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1304, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PREZENTER WYKRES\303\223W FUNKCJI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "RODZAJ FUNKCJI", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "SKALA Y", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "  Y (min):      Y (max):  ", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "  Y (min):      Y (max):  ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "SKALA X", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "  X (min):      X (max):  ", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Liniowa", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Sinusoidalna", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Logarytmiczna", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Pierwiastkowa", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Rozdzielczo\305\233\304\207", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "O\305\232  X               O\305\232  Y ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "AUTORZY PROJEKTU: Wojciech Kin i Jakub Majer", nullptr));
        importTxt->setText(QCoreApplication::translate("MainWindow", "IMPORT.TXT", nullptr));
        eksportTxt->setText(QCoreApplication::translate("MainWindow", "EKSPORT.TXT", nullptr));
        eksportPng->setText(QCoreApplication::translate("MainWindow", "EKSPORT.PNG", nullptr));
        myLabel->setText(QCoreApplication::translate("MainWindow", "TYTU\305\201 WY\305\232WIETLANEGO WYKRESU FUNKCJI", nullptr));
        pierwszaWartLabel->setText(QCoreApplication::translate("MainWindow", "Dane ", nullptr));
        drugaWartLabel->setText(QCoreApplication::translate("MainWindow", "Dane", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
