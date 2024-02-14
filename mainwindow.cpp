#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::makePlot();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_widget_customContextMenuRequested(const QPoint &pos)
{

}

void MainWindow::makePlot()
{
    // create graph and assign data to it:
    ui->customPlot->addGraph();
    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(-1, 1);
    ui->customPlot->yAxis->setRange(0, 1);
    ui->customPlot->replot();
}

void MainWindow::on_frame_3_windowIconTextChanged(const QString &iconText)
{

}

void MainWindow::on_eksportTxt_clicked()
{

    // Sprawdź, czy wykres ma jakiekolwiek dane
    if (ui->customPlot->graph(0)->data()->isEmpty())
    {
        qDebug() << "Brak danych do zapisania. Wybierz wykres do eksportu.";
        ui->statusbar->showMessage("Brak danych do zapisania. Wybierz wykres do eksportu.");
        return;
    }


 QString fileName = QFileDialog::getSaveFileName(this, "Eksportuj dane wykresu", "", "Plik tekstowy (*.txt);;Wszystkie pliki (*)");
    if (!fileName.isEmpty())
    {
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream outStream(&file);
            // Zapisz typ wykresu jako pierwszą linię
            outStream << ui->myLabel->text() << "\n";
            for (int i=0; i<101; ++i)
            {
                outStream << ui->customPlot->graph(0)->data()->at(i)->key << " " << ui->customPlot->graph(0)->data()->at(i)->value << "\n";
            }
            ui->statusbar->showMessage("Zapisano dane do pliku");
            qDebug() << "Dane zostały zapisane do pliku: " << fileName;
            file.close();
        }
        else
        {
            ui->statusbar->showMessage("Błąd otwarcia pliku!");
            qDebug() << "Błąd otwarcia pliku: " << fileName;
        }
    }
}


void MainWindow::on_eksportPng_clicked()
{

    // Sprawdź, czy wykres ma jakiekolwiek dane
    if (ui->customPlot->graph(0)->data()->isEmpty())
    {
        qDebug() << "Brak wykresu do zapisania. Wybierz wykres do eksportu.";
        ui->statusbar->showMessage("Brak wykresu do zapisania. Wybierz wykres do eksportu.");
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Eksportuj wykres", "", "Obraz PNG (*.png);;Wszystkie pliki (*)");
    if (!fileName.isEmpty())
    {
        if(ui->customPlot->savePng(fileName))
        {
            qDebug() << "Wykres został zapisany jako PNG: " << fileName;
        }
        else
        {
            qDebug() << "Błąd zapisu wykresu jako PNG: " << fileName;
        }
    }
}


void MainWindow::on_importTxt_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Importuj dane wykresu", "", "Plik tekstowy (*.txt);;Wszystkie pliki (*)");
    if (!fileName.isEmpty())
    {
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream inStream(&file);
            // Wczytaj typ wykresu z pierwszej linii
            QString plotType = inStream.readLine();
            ui->myLabel->setText(plotType);
            QVector<double> x, y;
            while (!inStream.atEnd())
            {
                double xi, yi;
                inStream >> xi >> yi;
                if (inStream.atEnd()) break;
                qDebug() << "Wczytano x: " << xi << ", y: " << yi;
                x.push_back(xi);
                y.push_back(yi);
            }
            ui->customPlot->graph(0)->setData(x, y);
            ui->customPlot->replot();
            ui->statusbar->showMessage("Wczytano dane z pliku");
            qDebug() << "Dane zostały wczytane z pliku: " << fileName;
            file.close();

            // Ustaw odpowiedni przycisk radiowy na podstawie typu wykresu
            if (plotType == "WYKRES FUNKCJI LINIOWEJ")
                ui->radioButton->setChecked(true);
            else if (plotType == "WYKRES FUNKCJI SINUSOIDALNEJ")
                ui->radioButton_2->setChecked(true);
            else if (plotType == "WYKRES FUNKCJI LOGARYTMICZNEJ")
                ui->radioButton_3->setChecked(true);
            else if (plotType == "WYKRES FUNKCJI PIERWIASTKOWEJ")
                ui->radioButton_4->setChecked(true);
        }
        else
        {
            ui->statusbar->showMessage("Błąd otwarcia pliku!");
            qDebug() << "Błąd otwarcia pliku: " << fileName;
        }
    }
}

void MainWindow::zrobRozdzielczosc(){

    QSharedPointer<QCPAxisTickerFixed> fixedTicker(new QCPAxisTickerFixed);
    fixedTicker->setTickStep(ui->Xunit->value());
    ui->customPlot->xAxis->setTicker(fixedTicker);

    QSharedPointer<QCPAxisTickerFixed> fixedTickerY(new QCPAxisTickerFixed);
    fixedTickerY->setTickStep(ui->Yunit->value());
    ui->customPlot->yAxis->setTicker(fixedTickerY);
}


void MainWindow::on_radioButton_clicked()
{
    ui->myLabel->setText("WYKRES FUNKCJI LINIOWEJ");
    ui->pierwszaWartLabel->setText("podaj a");
    ui->drugaWartLabel->setText("podaj b");

    double a = ui->pierwszaWartosc->value();
    double b = ui->drugaWartosc->value();

    double Xmin = ui->Xmin->value();
    double Xmax = ui->Xmax->value();
    double Ymin = ui->Ymin->value();
    double Ymax = ui->Ymax->value();

    double dx = (Xmax - Xmin) / 100.0; // obliczanie kroku

    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = Xmin + i * dx; // x goes from Xmin to Xmax
        y[i] = a*x[i] + b; // let's plot a linear function with slope=a and intercept=b
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(Xmin, Xmax);
    ui->customPlot->yAxis->setRange(Ymin, Ymax); // adjust y-axis range to fit the linear function

    zrobRozdzielczosc();

    ui->customPlot->replot();
}

void MainWindow::on_radioButton_2_clicked()
{  
    ui->myLabel->setText("WYKRES FUNKCJI SINUSOIDALNEJ");

    ui->pierwszaWartLabel->setText("podaj omege");
    ui->drugaWartLabel->setText("podaj phi");

    double omega = ui->pierwszaWartosc->value();
    double phi = ui->drugaWartosc->value();

    double Xmin = ui->Xmin->value();
    double Xmax = ui->Xmax->value();
    double Ymin = ui->Ymin->value();
    double Ymax = ui->Ymax->value();

    double dx = (Xmax - Xmin) / 100.0; // obliczanie kroku

    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = Xmin + i * dx; // x goes from Xmin to Xmax
        y[i] = qSin(omega * x[i] + phi); // let's plot a sinusoidal function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(Xmin, Xmax);
    ui->customPlot->yAxis->setRange(Ymin, Ymax);

    zrobRozdzielczosc();

    ui->customPlot->replot();
}

void MainWindow::on_radioButton_3_clicked()
{
    ui->myLabel->setText("WYKRES FUNKCJI LOGARYTMICZNEJ");
    ui->pierwszaWartLabel->setText("podaj podstawe");
    ui->drugaWartLabel->setText("nieaktywny");

     double base = ui->pierwszaWartosc->value();

    double Xmin = ui->Xmin->value();
    double Xmax = ui->Xmax->value();
    double Ymin = ui->Ymin->value();
    double Ymax = ui->Ymax->value();

    if (base <= 1)
    {
        QMessageBox::warning(this, "Błąd", "Podstawa logarytmu musi być większa od 1.");
        return;
    }

    double dx = (Xmax - Xmin) / 100.0; // obliczanie kroku

    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = Xmin + i * dx; // x goes from Xmin to Xmax
        y[i] = log(x[i]) / log(base); // let's plot a logarithmic function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(Xmin, Xmax);
    ui->customPlot->yAxis->setRange(Ymin, Ymax);


    zrobRozdzielczosc();

    ui->customPlot->replot();
}

void MainWindow::on_radioButton_4_clicked()
{


    ui->myLabel->setText("WYKRES FUNKCJI PIERWIASTKOWEJ");
    ui->pierwszaWartLabel->setText("podaj n");
    ui->drugaWartLabel->setText("niekatywny");

    double n = ui->pierwszaWartosc->value();

    double Xmin = ui->Xmin->value();
    double Xmax = ui->Xmax->value();
    double Ymin = ui->Ymin->value();
    double Ymax = ui->Ymax->value();

    // Sprawdzanie, czy n jest większe od 0
    if (n <= 0)
    {
        QMessageBox::warning(this, "Blad", "Stopien pierwiastka musi byc wiekszy od 0");
        return;
    }

    double dx = (Xmax - Xmin) / 100.0; // obliczanie kroku

    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
        x[i] = Xmin + i * dx; // x goes from Xmin to Xmax
        y[i] = pow(x[i] + 1, 1/n); // let's plot a n-th root function
    }

    // create graph and assign data to it:
    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setData(x, y);

    // give the axes some labels:
    ui->customPlot->xAxis->setLabel("x");
    ui->customPlot->yAxis->setLabel("y");

    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(Xmin, Xmax);
    ui->customPlot->yAxis->setRange(Ymin, Ymax);

    zrobRozdzielczosc();

    ui->customPlot->replot();
}




