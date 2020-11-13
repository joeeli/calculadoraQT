#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("Calculator");
    ui->show->setText("0.00");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_add_clicked()
{
    ui->show->setText(QString::number(ui->number1->value() + ui->number2->value()));
}

void Widget::on_substract_clicked()
{
    ui->show->setText(QString::number(ui->number1->value() - ui->number2->value()));
}

void Widget::on_multiply_clicked()
{
    ui->show->setText(QString::number(ui->number1->value() * ui->number2->value()));
}

void Widget::on_divide_clicked()
{
    ui->show->setText(QString::number(ui->number1->value() / ui->number2->value()));
}
