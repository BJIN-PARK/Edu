#include "IntTypeStack.h"
#include "ui_IntTypeStack.h"

IntTypeStack::IntTypeStack(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::IntTypeStack)
{
    ui->setupUi(this);
	m_DataIO = new DataIO(this);
	m_DataIO->hide();
	m_allInfo = new AllInfo(this);
	m_allInfo->hide();
	m_totalDataSize = new TotalDataSize(this);
	m_totalDataSize->hide();

	connect(ui->pushButton_dataIO, &QPushButton::clicked, this, &IntTypeStack::onDataIO);
	connect(ui->pushButton_allInfo, &QPushButton::clicked, this, &IntTypeStack::onallInfo);
	connect(ui->pushButton_totalDataSize, &QPushButton::clicked, this, &IntTypeStack::ontotalDataSize);
	connect(ui->pushButton_totalDataSize, &QPushButton::clicked, this, &IntTypeStack::ontotalDataSize);
	connect(m_DataIO, &DataIO::sigHideEvent, this, &IntTypeStack::syncData);
}

IntTypeStack::~IntTypeStack()
{
	delete ui;
}

void IntTypeStack::onDataIO()
{
	m_DataIO->show();
}

void IntTypeStack::onallInfo()
{
	m_allInfo->show();
	m_allInfo->displayData(m_listCurrentDataList, m_listCreateDataList, m_listDeleteDataList);
}

void IntTypeStack::ontotalDataSize()
{
	m_totalDataSize->show();
	m_totalDataSize->syncSize(m_listCurrentDataList, m_listCreateDataList, m_listDeleteDataList);
}

void IntTypeStack::syncData(QList<int> curData, QList<int> createData, QList<int> deleteData)
{
	m_listCurrentDataList = curData;
	m_listCreateDataList = createData;
	m_listDeleteDataList = deleteData;
}