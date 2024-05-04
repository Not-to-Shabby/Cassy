#include "secdialog.h"
#include "ui_secdialog.h"
#include "thirddialog.h"

SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_Next_clicked()
{
    SecDialog secdialog;
    secdialog .setModal(true);
    secdialog .exec();
}
