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
	connect(m_DataIO, &DataIO::sigHideEvent, this, &IntTypeStack::syncData);	//Data IO 창 닫힐 때 데이터 전달 받음
}

IntTypeStack::~IntTypeStack()
{
	delete ui;
}
//Data IO 창 띄우기
void IntTypeStack::onDataIO()
{
	m_DataIO->show();
}
//All Infoamtion 창 띄우기
void IntTypeStack::onallInfo()
{
	m_allInfo->show();
	//데이터 리스트 전달 및 함수 실행
	m_allInfo->displayData(m_listCurrentDataList, m_listCreateDataList, m_listDeleteDataList);
}
//Total Data Size 창 띄우기
void IntTypeStack::ontotalDataSize()
{
	m_totalDataSize->show();
	//데이터 리스트 전달 및 함수 실행
	m_totalDataSize->syncSize(m_listCurrentDataList, m_listCreateDataList, m_listDeleteDataList);
}
//멤버변수에 Data IO에서 전달 받은 리스트 삽입
void IntTypeStack::syncData(QList<int> curData, QList<int> createData, QList<int> deleteData)
{
	m_listCurrentDataList = curData;
	m_listCreateDataList = createData;
	m_listDeleteDataList = deleteData;
}