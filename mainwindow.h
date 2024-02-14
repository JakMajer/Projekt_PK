#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qlabel.h"
#include <QMainWindow>
#include <QString>
#include <QObject>
#include <QLineEdit>
#include <QDoubleValidator>
#include <QDoubleSpinBox>
#include <QLabel>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void zrobRozdzielczosc();

private slots:
    void on_widget_customContextMenuRequested(const QPoint &pos);

    void makePlot();
    void on_frame_3_windowIconTextChanged(const QString &iconText);


    void on_radioButton_clicked();
    void on_radioButton_2_clicked();
    void on_radioButton_3_clicked();
    void on_radioButton_4_clicked();

    void on_eksportTxt_clicked();

    void on_eksportPng_clicked();

    void on_importTxt_clicked();

private:
    Ui::MainWindow *ui;
    QFile m_MyFile;


};
#endif // MAINWINDOW_H
