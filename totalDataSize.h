#pragma once
#include <QDialog>
#include <QListWidgetItem>

namespace Ui
{
	class TotalDataSize;
}

class TotalDataSize : public QDialog
{
	Q_OBJECT

public:
	explicit TotalDataSize(QWidget* parent = Q_NULLPTR);
	~TotalDataSize();
	void syncSize(QList<int> curList, QList<int> createList, QList<int> delList);
	void displayData();
private:
	Ui::TotalDataSize* ui;

	int m_currentSize = 0;
	int m_createSize = 0;
	int m_deleteSize = 0;
	int m_totalSize = 0;
};