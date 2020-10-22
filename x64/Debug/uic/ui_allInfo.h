/********************************************************************************
** Form generated from reading UI file 'allInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLINFO_H
#define UI_ALLINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllInfo
{
public:
    QLabel *label;
    QListWidget *listWidget_currentData;
    QListWidget *listWidget_createData;
    QLabel *label_2;
    QListWidget *listWidget_deleteData;
    QLabel *label_3;

    void setupUi(QWidget *AllInfo)
    {
        if (AllInfo->objectName().isEmpty())
            AllInfo->setObjectName(QStringLiteral("AllInfo"));
        AllInfo->resize(342, 230);
        label = new QLabel(AllInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 100, 15));
        listWidget_currentData = new QListWidget(AllInfo);
        listWidget_currentData->setObjectName(QStringLiteral("listWidget_currentData"));
        listWidget_currentData->setGeometry(QRect(10, 30, 100, 192));
        listWidget_createData = new QListWidget(AllInfo);
        listWidget_createData->setObjectName(QStringLiteral("listWidget_createData"));
        listWidget_createData->setGeometry(QRect(120, 30, 100, 192));
        label_2 = new QLabel(AllInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 10, 100, 15));
        listWidget_deleteData = new QListWidget(AllInfo);
        listWidget_deleteData->setObjectName(QStringLiteral("listWidget_deleteData"));
        listWidget_deleteData->setGeometry(QRect(230, 30, 100, 192));
        label_3 = new QLabel(AllInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 10, 100, 15));

        retranslateUi(AllInfo);

        QMetaObject::connectSlotsByName(AllInfo);
    } // setupUi

    void retranslateUi(QWidget *AllInfo)
    {
        AllInfo->setWindowTitle(QApplication::translate("AllInfo", "Form", nullptr));
        label->setText(QApplication::translate("AllInfo", "<html><head/><body><p align=\"center\">\355\230\204\354\236\254 \353\215\260\354\235\264\355\204\260</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("AllInfo", "<html><head/><body><p align=\"center\">\354\203\235\354\204\261 \353\215\260\354\235\264\355\204\260</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("AllInfo", "<html><head/><body><p align=\"center\">\354\202\255\354\240\234 \353\215\260\354\235\264\355\204\260</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllInfo: public Ui_AllInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLINFO_H