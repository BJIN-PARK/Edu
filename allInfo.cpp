#include "allInfo.h"
#include "ui_allInfo.h"
#include "dataIO.h"

AllInfo::AllInfo(QWidget* parent)
	: QDialog(parent),
	ui(new Ui::AllInfo)
{
	ui->setupUi(this);
}

AllInfo::~AllInfo()
{
	delete ui;
}
//전달 받은 데이터 리스트를 각 리스트위젯에 표시
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
//현재 창 이외의 창 무시
void AllInfo::showEvent(QShowEvent* event)
{
	QDialog::showEvent(event);
	this->setModal(true);
}