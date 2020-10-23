#include "totalDataSize.h"
#include "ui_totalDataSize.h"

TotalDataSize::TotalDataSize(QWidget* parent)
	: QDialog(parent),
	ui(new Ui::TotalDataSize)
{
	ui->setupUi(this);

	displayData();
}

TotalDataSize::~TotalDataSize()
{
	delete ui;
}
//전달 받은 데이터 리스트의 크기 계산
void TotalDataSize::syncSize(QList<int> curList, QList<int> createList, QList<int> delList)
{
	m_currentSize = curList.size();
	m_createSize = createList.size();
	m_deleteSize = delList.size();
	m_totalSize = m_currentSize + m_createSize + m_deleteSize;

	displayData();
}
//각 라벨의 변수에 각 리스트의 크기 표시
void TotalDataSize::displayData()
{
	ui->curSize->setText(QString("%1").arg(m_currentSize));
	ui->createSize->setText(QString("%1").arg(m_createSize));
	ui->delSize->setText(QString("%1").arg(m_deleteSize));
	ui->totalSize->setText(QString("%1").arg(m_totalSize));
}
//현재 창 이외의 창 무시
void TotalDataSize::showEvent(QShowEvent* event)
{
	QDialog::showEvent(event);
	this->setModal(true);
}