#include "deleteData.h"
#include "ui_deleteData.h"

deleteData::deleteData(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::deleteData)
{
	ui->setupUi(this);
}
deleteData::~deleteData()
{
	delete ui;
}
