/********************************************************************************
** Form generated from reading UI file 'dataIO.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAIO_H
#define UI_DATAIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataIO
{
public:
    QPushButton *pushButton_deleteData;
    QLabel *label;
    QPushButton *pushButton_createData;
    QLineEdit *line_dataIO;
    QLabel *label_2;
    QListWidget *listWidget_current;

    void setupUi(QWidget *DataIO)
    {
        if (DataIO->objectName().isEmpty())
            DataIO->setObjectName(QStringLiteral("DataIO"));
        DataIO->resize(300, 268);
        pushButton_deleteData = new QPushButton(DataIO);
        pushButton_deleteData->setObjectName(QStringLiteral("pushButton_deleteData"));
        pushButton_deleteData->setGeometry(QRect(230, 230, 60, 28));
        label = new QLabel(DataIO);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 230, 51, 28));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton_createData = new QPushButton(DataIO);
        pushButton_createData->setObjectName(QStringLiteral("pushButton_createData"));
        pushButton_createData->setGeometry(QRect(160, 230, 60, 28));
        line_dataIO = new QLineEdit(DataIO);
        line_dataIO->setObjectName(QStringLiteral("line_dataIO"));
        line_dataIO->setGeometry(QRect(59, 230, 91, 28));
        line_dataIO->setDragEnabled(false);
        label_2 = new QLabel(DataIO);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 0, 100, 28));
        listWidget_current = new QListWidget(DataIO);
        listWidget_current->setObjectName(QStringLiteral("listWidget_current"));
        listWidget_current->setGeometry(QRect(10, 30, 281, 192));

        retranslateUi(DataIO);

        QMetaObject::connectSlotsByName(DataIO);
    } // setupUi

    void retranslateUi(QWidget *DataIO)
    {
        DataIO->setWindowTitle(QApplication::translate("DataIO", "Form", nullptr));
        pushButton_deleteData->setText(QApplication::translate("DataIO", "DELETE", nullptr));
        label->setText(QApplication::translate("DataIO", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">NUMBER</span></p></body></html>", nullptr));
        pushButton_createData->setText(QApplication::translate("DataIO", "ADD", nullptr));
        label_2->setText(QApplication::translate("DataIO", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Data List</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataIO: public Ui_DataIO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAIO_H
