#include "deleteData.h"
#include "ui_deleteData.h"

deleteData::deleteData(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::deleteDataClass)
{
	ui->setupUi(this);
}
deleteData::~deleteData()
{
	delete ui;
}
