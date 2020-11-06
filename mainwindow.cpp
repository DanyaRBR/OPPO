#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCharFormat>
#include <auth.h>
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


void MainWindow::on_action_2_triggered()
{

}

void MainWindow::on_action_triggered()
{
    connect(ui->action,SIGNAL(triggered()),this,SLOT(About_Lab1()));

}

void MainWindow::About_Lab1()
{
    auth *dg = new auth();
    dg->show();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->calendarWidget->setFirstDayOfWeek(Qt::DayOfWeek(index+1));
    QTextCharFormat format;
    format.setForeground(qvariant_cast<QColor>("green"));
    ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(index+1), format);
}

