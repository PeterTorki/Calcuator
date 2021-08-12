#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QDebug>
#include <bits/stdc++.h>
#define ll qlonglong
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

ll gcd(ll a, ll b)
{
    return (!b ? a : gcd(b, a % b));
    //                  140   120
    //                  120   20
    //                  20    0
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*
    if(ui->textEdit->toPlainText()!=""){
        QString data1 = ui->textEdit->toPlainText();
        QString data2 = ui->textEdit_2->toPlainText();
    int data3=data1.toInt()+data2.toInt();
    QString s = QString::number(data3);
    ui->textEdit_3->setText(s);
 */

QString data1,data2,s;
void MainWindow::on_NUM1_textChanged()
{
     data1 = ui->NUM1->toPlainText();
}

void MainWindow::on_NUM2_textChanged()
{
   data2 = ui->NUM2->toPlainText();
}

void MainWindow::on_pls_button_clicked()
{
    ui->textEdit_3->setText("+");
    int data3=data1.toInt()+data2.toInt();
     s = QString::number(data3);
}

void MainWindow::on_min_button_clicked()
{
    ui->textEdit_3->setText("-");
    int data3=data1.toInt()-data2.toInt();
     s = QString::number(data3);
}

void MainWindow::on_mult_button_clicked()
{
    ui->textEdit_3->setText("*");
   ll data3=data1.toLongLong()*data2.toLongLong();
     s = QString::number(data3);
}


void MainWindow::on_div_button_clicked()
{
    ui->textEdit_3->setText("/");
   float data3=data1.toFloat()/data2.toFloat();
     s = QString::number(data3);
}


void MainWindow::on_Mod_button_clicked()
{
    ui->textEdit_3->setText("%");
    int data3=data1.toInt()%data2.toInt();
     s = QString::number(data3);
}


void MainWindow::on_root_button_clicked()
{
    float rot=(1/data1.toFloat());
    ui->textEdit_3->setText("√");
    float data3=pow(data2.toFloat(),rot);
     s = QString::number(data3);
}


void MainWindow::on_Gcd_button_clicked()
{
    ui->textEdit_3->setText("GCD");
    ll data3=gcd(data1.toLongLong(),data2.toLongLong());
     s = QString::number(data3);
}

void MainWindow::on_Lcm_button_clicked()
{
    ui->textEdit_3->setText("LCM");
    ll data3=(data1.toLongLong()/gcd(data1.toLongLong(),data2.toLongLong()))*data2.toLongLong();;
    s = QString::number(data3);
}


void MainWindow::on_Pow_button_clicked()
{
    ui->textEdit_3->setText("^");
    float data3=pow(data1.toFloat(),data2.toFloat());
     s = QString::number(data3);
}

void MainWindow::on_equal_clicked()
{
    ui->result->setText(s);
}


void MainWindow::on_clear_clicked()
{
    ui->result->clear();
    ui->textEdit_3->clear();
    ui->NUM1->clear();
    ui->NUM2->clear();
}

