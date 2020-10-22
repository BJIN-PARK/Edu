#pragma once
#include <QMainWindow>
#include <stdio.h>
#include <Qstring>
#include <QListWidgetItem>

namespace Ui
{
	class DataIO;
}

class DataIO : public QMainWindow
{
	Q_OBJECT

public:
	explicit DataIO(QWidget* parent = Q_NULLPTR);
	~DataIO();
	void addDataClicked();
	void deleteDataClicked();
	void sortDataClicked();

signals:
	void sigCloseEvent(QList<int> curData, QList<int> createData, QList<int> deleteData);

protected:
	void closeEvent(QCloseEvent* evt) override;

private:
	int cnt = 0;
	Ui::DataIO* ui;
	QList<int> currentDataList;
	QList<int> createDataList;
	QList<int> deleteDataList;
};