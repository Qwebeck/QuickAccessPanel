#include "submit_removal.h"
#include "ui_submit_removal.h"

submit_removal::submit_removal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::submit_removal)
{
    ui->setupUi(this);
}

submit_removal::~submit_removal()
{
    delete ui;
}
