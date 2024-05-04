#include "thirddialog.h"
#include "ui_thirddialog.h"

ThirdDialog::ThirdDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ThirdDialog)
{
    ui->setupUi(this);
}

ThirdDialog::~ThirdDialog()
{
    delete ui;
}

void ThirdDialog::on_Next2_clicked()
{
    ThirdDialog thirddialog;
    thirddialog .setModal(true);
    thirddialog .exec();
}
