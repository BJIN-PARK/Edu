#pragma once
#include <QMainWindow>

namespace Ui
{
	class addData;
}

class addData : public QMainWindow
{
	Q_OBJECT

public:
	explicit addData(QWidget* parent = Q_NULLPTR);
	~addData();

private:
	Ui::addData *ui;
};
