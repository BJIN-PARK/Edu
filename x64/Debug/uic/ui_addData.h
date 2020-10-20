/********************************************************************************
** Form generated from reading UI file 'addData.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDATA_H
#define UI_ADDDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addData
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_createData;
    QLineEdit *line_createData;

    void setupUi(QWidget *addData)
    {
        if (addData->objectName().isEmpty())
            addData->setObjectName(QStringLiteral("addData"));
        addData->resize(205, 135);
        label_2 = new QLabel(addData);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 10, 100, 28));
        label = new QLabel(addData);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 35, 28));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton_createData = new QPushButton(addData);
        pushButton_createData->setObjectName(QStringLiteral("pushButton_createData"));
        pushButton_createData->setGeometry(QRect(65, 80, 60, 28));
        line_createData = new QLineEdit(addData);
        line_createData->setObjectName(QStringLiteral("line_createData"));
        line_createData->setGeometry(QRect(60, 40, 100, 28));
        line_createData->setDragEnabled(false);

        retranslateUi(addData);

        QMetaObject::connectSlotsByName(addData);
    } // setupUi

    void retranslateUi(QWidget *addData)
    {
        addData->setWindowTitle(QApplication::translate("addData", "Form", nullptr));
        label_2->setText(QApplication::translate("addData", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\353\215\260\354\235\264\355\204\260 \354\203\235\354\204\261</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("addData", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\354\236\205\353\240\245</span></p></body></html>", nullptr));
        pushButton_createData->setText(QApplication::translate("addData", "\355\231\225\354\235\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addDataClass: public Ui_addDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDATA_H
