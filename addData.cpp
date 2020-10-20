#include "addData.h"
#include "ui_addData.h"

addData::addData(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::addDataClass)
{
	ui->setupUi(this);
}
addData::~addData()
{
	delete ui;
}
