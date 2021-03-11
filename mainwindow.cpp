#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer_1 = new QTimer(this);
    timer_1->setInterval(1000);
    old_color = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_card1_clicked()
{
    old_color = current_color;
    current_color = LIME;
    ui->card1->setStyleSheet("background: lime");

    if(old_color == current_color){
        qDebug() << "aha tuttu";
        ui->card1->setStyleSheet("background: lime");
        ui->card2->setStyleSheet("background: lime");
    }
    else{
        QTimer::singleShot(1000,this,SLOT(card1_renk_eski_haline()));
    }
}
void MainWindow::on_card2_clicked()
{
    old_color = current_color;
    current_color = LIME;
    ui->card2->setStyleSheet("background: lime");
    if(old_color == current_color){
        qDebug() << "aha tuttu";
        ui->card1->setStyleSheet("background: lime");
        ui->card2->setStyleSheet("background: lime");
    }
    else{
        QTimer::singleShot(1000,this,SLOT(card2_renk_eski_haline()));
    }
}
void MainWindow::on_card3_clicked()
{
    old_color = current_color;
    current_color = RED;
    ui->card3->setStyleSheet("background: red");
    if(old_color == current_color){
        qDebug() << "aha tuttu";
        ui->card3->setStyleSheet("background: red");
        ui->card4->setStyleSheet("background: red");
    }
    else{
        QTimer::singleShot(1000,this,SLOT(card3_renk_eski_haline()));
    }
}
void MainWindow::on_card4_clicked()
{
    old_color = current_color;
    current_color = RED;
    ui->card4->setStyleSheet("background: red");
    if(old_color == current_color){
        qDebug() << "aha tuttu";
        ui->card3->setStyleSheet("background: red");
        ui->card4->setStyleSheet("background: red");
    }
    else{
        QTimer::singleShot(1000,this,SLOT(card4_renk_eski_haline()));
    }
}

void MainWindow::card1_renk_eski_haline(void){
    ui->card1->setStyleSheet("background: none");
}
void MainWindow::card2_renk_eski_haline(void){
    ui->card2->setStyleSheet("background: none");
}
void MainWindow::card3_renk_eski_haline(void){
    ui->card3->setStyleSheet("background: none");
}
void MainWindow::card4_renk_eski_haline(void){
    ui->card4->setStyleSheet("background: none");
}
