#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDialog1_triggered()
{
    dlg = new Dialog(this);

    dlg->setWindowTitle("New Dialog");

    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");


    QHBoxLayout *hlayout = new QHBoxLayout;

    hlayout->addWidget(button1);
    hlayout->addWidget(button2);
    hlayout->addWidget(button3);

    dlg->setLayout(hlayout);


    dlg->show();

}
