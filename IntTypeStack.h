#pragma once
#include <QtWidgets/QMainWindow>
#include "addData.h"
#include "deleteData.h"

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
    void onAddData();
    void onDeleteData();

private:
    addData* m_addData;
    deleteData* m_deleteData;
    Ui::IntTypeStackClass *ui;
};
