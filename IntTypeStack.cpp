#include "IntTypeStack.h"
#include "ui_IntTypeStack.h"

IntTypeStack::IntTypeStack(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::IntTypeStackClass)
{
    ui->setupUi(this);

	connect(ui->pushButton_addData, SIGNAL(clicked()), this, SLOT(onAddData()));

	connect(ui->pushButton_deleteData, SIGNAL(clicked()), this, SLOT(onDeleteData()));

	connect(ui->pushButton_exit, SIGNAL(clicked()), qApp, SLOT(quit()));

}

IntTypeStack::~IntTypeStack()
{
	delete ui;
}

void IntTypeStack::onAddData()
{
	m_addData = new addData();
	m_addData->show();
}

 void IntTypeStack::onDeleteData()
 {
	 m_deleteData = new deleteData();
	 m_deleteData->show();
 }
