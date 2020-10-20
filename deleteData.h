#pragma once
#include <QMainWindow>

namespace Ui
{
	class deleteData;
}

class deleteData : public QMainWindow
{
	Q_OBJECT

public:
	explicit deleteData(QWidget* parent = Q_NULLPTR);
	~deleteData();

private:
	Ui::deleteDataClass* ui;
};
