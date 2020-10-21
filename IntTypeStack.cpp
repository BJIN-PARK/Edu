#include "IntTypeStack.h"
#include "ui_IntTypeStack.h"

IntTypeStack::IntTypeStack(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::IntTypeStackClass)
{
    ui->setupUi(this);

	connect(ui->pushButton_dataIO, SIGNAL(clicked()), this, SLOT(onDataIO()));

	connect(ui->pushButton_exit, SIGNAL(clicked()), qApp, SLOT(quit()));

}

IntTypeStack::~IntTypeStack()
{
	delete ui;
}

void IntTypeStack::onDataIO()
{
	m_DataIO = new DataIO(this);
	m_DataIO->show();
}
