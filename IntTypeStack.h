#pragma once
#include <QtWidgets/QMainWindow>
#include <QDebug>
#include <QLineEdit>
#include <QPushButton>
#include "DataIO.h"
// #include "sortData.h"
// #include "allInformation.h"
// #include "totalDataSize.h"

namespace Ui
{
    class IntTypeStackClass;
}

class IntTypeStack : public QMainWindow
{
    Q_OBJECT

public:
    IntTypeStack(QWidget *parent = Q_NULLPTR);
    ~IntTypeStack();
public slots:
    void onDataIO();
private:
    DataIO* m_DataIO{ nullptr };
    Ui::IntTypeStackClass *ui;
};
