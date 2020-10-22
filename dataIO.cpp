#include "DataIO.h"
#include "ui_DataIO.h"

DataIO::DataIO(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::DataIO)
{
	ui->setupUi(this);
	
	connect(ui->pushButton_createData, &QPushButton::clicked, this, &DataIO::addDataClicked);

	connect(ui->pushButton_deleteData, &QPushButton::clicked, this, &DataIO::deleteDataClicked);

	connect(ui->pushButton_sortData, &QPushButton::clicked, this, &DataIO::sortDataClicked);
	// LineEdit 자연수만 입력가능하게
	QRegExpValidator* rxv = new QRegExpValidator(QRegExp("\\d*"), this);
	ui->line_dataIO->setValidator(rxv);
}
DataIO::~DataIO()
{
	delete ui;
}

void DataIO::addDataClicked()
{
	QString inputData_qstring = ui->line_dataIO->text();
	int inputData_int = inputData_qstring.toInt();
	if (currentDataList.empty() == false)
	{
		for (auto item : currentDataList)
		{
			if (item == inputData_int)
			{
				cnt++;
			}
		}
		if (cnt < 1)
		{
			currentDataList.push_back(inputData_int);
			createDataList.push_back(inputData_int);
		}
		cnt = 0;
	}
	else
	{
		currentDataList.push_back(inputData_int);
		createDataList.push_back(inputData_int);
	}
	ui->listWidget_current->clear(); // listWidget 화면 비워주자
	for (auto item : currentDataList)
		ui->listWidget_current->addItem(QString::number(item));
}

void DataIO::deleteDataClicked()
{
	QString inputData_qstring = ui->line_dataIO->text();
	int inputData_int = inputData_qstring.toInt();
	if (currentDataList.empty() == false)
	{
		for (auto item : currentDataList)
		{
			if (item == inputData_int)
			{
				currentDataList.removeAt(cnt);
				deleteDataList.push_back(inputData_int);
				break;
			}
			cnt++;
		}
		cnt = 0;
	}
	ui->listWidget_current->clear(); // listWidget 화면 비워주자
	for (auto item : currentDataList)
		ui->listWidget_current->addItem(QString::number(item));
}

void DataIO::sortDataClicked()
{
	if (currentDataList.empty() == false)
	{
		for (int cnt = 0; cnt < currentDataList.size() - 1; cnt++)
		{
			for (int i = 0; i < currentDataList.size() - 1 - cnt; i++)
			{
				if (currentDataList.at(i) > currentDataList.at(i + 1))
				{
					currentDataList.swap(i, i + 1);
				}
			}
		}
	}
	ui->listWidget_current->clear(); // listWidget 화면 비워주자
	for (auto item : currentDataList)
		ui->listWidget_current->addItem(QString::number(item));
}

void DataIO::closeEvent(QCloseEvent* evt)
{
	emit sigCloseEvent(currentDataList, createDataList, deleteDataList);
	QWidget::closeEvent(evt);
}