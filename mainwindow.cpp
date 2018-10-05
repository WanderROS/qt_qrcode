#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

     ui->setupUi(this);
     setWindowIcon(QIcon(":/robot.png"));
     QByteArray text("hello, world");

     ui->widget->setText(text);
     ui->widget->setMargin(10);
     ui->widget->setSize(QSize(200,200));
     ui->widget->setIcon(QIcon(":/robot.png"),0.1);

     ui->widget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QByteArray text("https://www.baidu.com");
     ui->widget->setIcon(QIcon(":/logo.png"),0.2);
    ui->widget->setText(text);
}
