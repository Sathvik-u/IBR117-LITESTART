#include "visortech.h"
#include "ui_visortech.h"

VisorTech::VisorTech(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VisorTech)
{
    ui->setupUi(this);
}

VisorTech::~VisorTech()
{
    delete ui;
}
