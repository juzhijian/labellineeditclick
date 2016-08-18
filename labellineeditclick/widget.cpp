#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->lineEdit, SIGNAL(clicked()), this, SLOT(handlelineeditclicked()));
    connect(ui->label, SIGNAL(clicked()), this, SLOT(handlelabelclicked()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handlelineeditclicked() {
    ui->lineEdit->setText("I was clicked!!");
}

void Widget::handlelabelclicked() {
    ui->label->setText("I was also clicked!!");
}
