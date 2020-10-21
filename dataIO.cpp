#include "DataIO.h"
#include "ui_DataIO.h"

DataIO::DataIO(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::DataIO)
{
	ui->setupUi(this);
	
	connect(ui->pushButton_createData, &QPushButton::clicked, this, &DataIO::addDataClicked);
	//connect(ui->pushButton_createData, SIGNAL(clicked()), this, SLOT(addDataClicked()));

	connect(ui->pushButton_deleteData, &QPushButton::clicked, this, &DataIO::deleteDataClicked);

	for (auto item : currentDataList)
		ui->listWidget_current->addItem(QString::number(item));

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
// 	for (int i = 0; i < ui->listWidget_current->count(); ++i)
// 	{
// 		QListWidgetItem* item = ui->listWidget_current->item(i);
// 		if (int (item) == inputData_int)
// 		{
// 			cnt++;
// 			continue;
// 		}
// 	}
// 	if (cnt < 1)
// 	{
// 		currentDataList.push_back(inputData_int);
// 		createDataList.push_back(inputData_int);
// 	}
	currentDataList.push_back(inputData_int);
	createDataList.push_back(inputData_int);
	ui->listWidget_current->clear(); // listWidget 화면 비워주자
	for (auto item : currentDataList)
		ui->listWidget_current->addItem(QString::number(item));
}

void DataIO::deleteDataClicked()
{
// 	QString inputData_qstring = ui->line_dataIO->text();
// 	int inputData_int = inputData_qstring.toInt();
// 	for (int i = 0; i < ui->listWidget_current->count(); ++i)
// 	{
// 		QListWidgetItem* item = ui->listWidget_current->item(i);
// 		if (int(item) != inputData_int)
// 		{
// 			continue;
// 		}
// 		else
// 		{
// 			currentDataList.removeAt(i);
// 			deleteDataList.push_back(inputData_int);
// 		}
// 	}
// 	ui->listWidget_current->clear(); // listWidget 화면 비워주자
// 	for (auto item : currentDataList)
// 		ui->listWidget_current->addItem(QString::number(item));
}
