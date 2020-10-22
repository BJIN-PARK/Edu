#pragma once
#include <QMainWindow>
#include <stdio.h>
#include <Qstring>
#include <QListWidgetItem>
#include <QPushButton>

namespace Ui
{
	class AllInfo;
}

class AllInfo : public QMainWindow
{
	Q_OBJECT

public:
	explicit AllInfo(QWidget* parent = Q_NULLPTR);
	~AllInfo();

	void displayData(QList<int> curDataList, QList<int> createDataList, QList<int> deleteDataList);

private:
	Ui::AllInfo *ui;
};