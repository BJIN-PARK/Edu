#pragma once
#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <QLineEdit>
#include <QPushButton>
#include "dataIO.h"
#include "allInfo.h"
// #include "totalDataSize.h"

namespace Ui
{
    class IntTypeStack;
}

class IntTypeStack : public QMainWindow
{
    Q_OBJECT

public:
    IntTypeStack(QWidget* parent = Q_NULLPTR);
    ~IntTypeStack();
    void onDataIO();
    void onAllInfo();
    void syncData(QList<int> curData, QList<int> createData, QList<int> deleteData);

private:
    DataIO* m_DataIO{ nullptr };
    AllInfo* m_AllInfo{ nullptr };
    Ui::IntTypeStack* ui;

    // Data List
	QList<int> m_listCurrentDataList;
	QList<int> m_listCreateDataList;
	QList<int> m_listDeleteDataList;
};