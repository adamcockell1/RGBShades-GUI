#include "rgbshadesgui.h"
#include "ui_rgbshadesgui.h"

RGBShadesGUI::RGBShadesGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RGBShadesGUI)
{
    ui->setupUi(this);
}

RGBShadesGUI::~RGBShadesGUI()
{
    delete ui;
}

