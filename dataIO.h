#pragma once
#include <QDialog>
#include <stdio.h>
#include <Qstring>
#include <QListWidgetItem>

namespace Ui
{
	class DataIO;
}

class DataIO : public QDialog
{
	Q_OBJECT

public:
	explicit DataIO(QWidget* parent = Q_NULLPTR);
	~DataIO();

public slots:
	void addDataClicked();
	void deleteDataClicked();
	void sortDataClicked();

signals:
	void sigHideEvent(QList<int> curData, QList<int> createData, QList<int> deleteData);

private:
	int cnt = 0;
	Ui::DataIO* ui;
	QList<int> currentDataList;
	QList<int> createDataList;
	QList<int> deleteDataList;

protected:
	void hideEvent(QHideEvent* evt) override;
	void showEvent(QShowEvent* event) override;
};