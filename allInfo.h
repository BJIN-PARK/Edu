#pragma once
#include <QListWidgetItem>
#include <QDialog>

namespace Ui
{
	class AllInfo;
}

class AllInfo : public QDialog
{
	Q_OBJECT

public:
	explicit AllInfo(QWidget* parent = Q_NULLPTR);
	~AllInfo();

public slots:
	void displayData(QList<int> curDataList, QList<int> createDataList, QList<int> deleteDataList);

private:
	Ui::AllInfo*ui;

protected:
	void showEvent(QShowEvent* event) override;
};