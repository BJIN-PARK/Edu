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
//���� ���� ������ ����Ʈ�� ũ�� ���
void TotalDataSize::syncSize(QList<int> curList, QList<int> createList, QList<int> delList)
{
	m_currentSize = curList.size();
	m_createSize = createList.size();
	m_deleteSize = delList.size();
	m_totalSize = m_currentSize + m_createSize + m_deleteSize;

	displayData();
}
//�� ���� ������ �� ����Ʈ�� ũ�� ǥ��
void TotalDataSize::displayData()
{
	ui->curSize->setText(QString("%1").arg(m_currentSize));
	ui->createSize->setText(QString("%1").arg(m_createSize));
	ui->delSize->setText(QString("%1").arg(m_deleteSize));
	ui->totalSize->setText(QString("%1").arg(m_totalSize));
}
//���� â �̿��� â ����
void TotalDataSize::showEvent(QShowEvent* event)
{
	QDialog::showEvent(event);
	this->setModal(true);
}