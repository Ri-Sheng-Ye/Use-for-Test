#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnConnect, &QPushButton::clicked,
            this, &MainWindow::onHandConnectClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "提示", "Hello");
}

void MainWindow::onHandConnectClicked()
{
    QMessageBox::information(this, "提示", "这是手写 connect");
}