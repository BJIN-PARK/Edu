#include "IntTypeStack.h"
#include "ui_IntTypeStack.h"

IntTypeStack::IntTypeStack(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::IntTypeStack)
{
    ui->setupUi(this);
	m_DataIO = new DataIO(this);
	m_DataIO->hide();
	m_AllInfo = new AllInfo(this);
	m_AllInfo->hide();

	connect(ui->pushButton_dataIO, &QPushButton::clicked, this, &IntTypeStack::onDataIO);
	connect(ui->pushButton_allInfo, &QPushButton::clicked, this, &IntTypeStack::onAllInfo);
	connect(ui->pushButton_exit, &QPushButton::clicked, this, &QApplication::quit);
	connect(m_DataIO, &DataIO::sigCloseEvent, this, &IntTypeStack::syncData);
}

IntTypeStack::~IntTypeStack()
{
	delete ui;
}

void IntTypeStack::onDataIO()
{
	m_DataIO->show();
}

void IntTypeStack::onAllInfo()
{
	m_AllInfo->show();
	m_AllInfo->displayData(m_listCurrentDataList, m_listCreateDataList, m_listDeleteDataList);
}

void IntTypeStack::syncData(QList<int> curData, QList<int> createData, QList<int> deleteData)
{
	m_listCurrentDataList = curData;
	m_listCreateDataList = createData;
	m_listDeleteDataList = deleteData;
}