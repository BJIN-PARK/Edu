#include "allInfo.h"
#include "ui_allInfo.h"
#include "dataIO.h"

AllInfo::AllInfo(QWidget* parent)
	//: QMainWindow(parent),
	: QDialog(parent),
	ui(new Ui::AllInfo)
{
	ui->setupUi(this);
}

AllInfo::~AllInfo()
{
	delete ui;
}

void AllInfo::displayData(QList<int> curDataList, QList<int> createDataList, QList<int> deleteDataList)
{
	ui->listWidget_currentData->clear();
	for (auto curData : curDataList)
		ui->listWidget_currentData->addItem(QString::number(curData));
	ui->listWidget_createData->clear();
	for (auto createData : createDataList)
		ui->listWidget_createData->addItem(QString::number(createData));
	ui->listWidget_deleteData->clear();
	for (auto delData : deleteDataList)
		ui->listWidget_deleteData->addItem(QString::number(delData));
}

void AllInfo::showEvent(QShowEvent* event)
{
	QDialog::showEvent(event);
	this->setModal(true);
}