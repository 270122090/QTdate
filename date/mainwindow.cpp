#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDate>

//include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QDate date = ui->dateEdit->date(); // this is for date only

    //QString date_text = date.toString("dd:mm:yyy") // using this to convert the date from Qdate into a string if I need to use it as string
    //ui->label->setText(date_text);

    //for time
    // QTime time=Qtime::currentTime() // use currentDate to show today's date
    // QString time_text = time.toString("hh:mm:ss")
    //ui->label2->setDate(time_text)
}

