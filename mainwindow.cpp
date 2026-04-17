#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_add,SIGNAL(released()),this,SLOT(on_pushButton_binaryOperation()));
    connect(ui->pushButton_sub,SIGNAL(released()),this,SLOT(on_pushButton_binaryOperation()));
    connect(ui->pushButton_mul,SIGNAL(released()),this,SLOT(on_pushButton_binaryOperation()));
    connect(ui->pushButton_division,SIGNAL(released()),this,SLOT(on_pushButton_binaryOperation()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed(){
    qDebug() <<"Test";

    QPushButton *button=(QPushButton *)sender();

    double loadNumber;
    QString newString;

    loadNumber=(ui->label->text() + button->text()).toDouble();

    newString=QString::number(loadNumber,'g',15);

    ui->label->setText(newString);
}
void MainWindow::on_pushButton_decimal_released()
{
    QPushButton *button=(QPushButton *)sender();

    QString value=button->text();
    QString current=ui->label->text();

    if(value=="."){
        if(current.contains(".")){
            return;
        }
    }
    ui->label->setText(current+value);

}


void MainWindow::on_pushButton_plus_minus_released()
{
    QPushButton *button=(QPushButton *)sender();
    QString value=button->text();
    if(value=="+/-"){
        double loadNumber;
        QString newString;

        loadNumber=ui->label->text().toDouble();

        loadNumber=loadNumber * -1;

        newString=QString::number(loadNumber,'g',15);

        ui->label->setText(newString);
    }
}


void MainWindow::on_pushButton_percent_released()
{
    QPushButton *button=(QPushButton *)sender();
    QString value=button->text();
    if(value=="%"){
        double loadNumber;
        QString newString;

        loadNumber=ui->label->text().toDouble();

        loadNumber=loadNumber * 0.01;

        newString=QString::number(loadNumber,'g',15);

        ui->label->setText(newString);
    }
}
void MainWindow::on_pushButton_binaryOperation(){
    QPushButton *button=(QPushButton *)sender();

    if(button->text()=="+"){

    }


}

