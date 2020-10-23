/********************************************************************************
** Form generated from reading UI file 'totalDataSize.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOTALDATASIZE_H
#define UI_TOTALDATASIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TotalDataSize
{
public:
    QLabel *label;
    QLabel *curSize;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *createSize;
    QLabel *delSize;
    QLabel *totalSize;

    void setupUi(QWidget *TotalDataSize)
    {
        if (TotalDataSize->objectName().isEmpty())
            TotalDataSize->setObjectName(QStringLiteral("TotalDataSize"));
        TotalDataSize->resize(400, 300);
        label = new QLabel(TotalDataSize);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 80, 28));
        curSize = new QLabel(TotalDataSize);
        curSize->setObjectName(QStringLiteral("curSize"));
        curSize->setGeometry(QRect(100, 10, 64, 28));
        label_2 = new QLabel(TotalDataSize);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 80, 28));
        label_3 = new QLabel(TotalDataSize);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 80, 28));
        label_4 = new QLabel(TotalDataSize);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 80, 28));
        createSize = new QLabel(TotalDataSize);
        createSize->setObjectName(QStringLiteral("createSize"));
        createSize->setGeometry(QRect(100, 40, 64, 28));
        delSize = new QLabel(TotalDataSize);
        delSize->setObjectName(QStringLiteral("delSize"));
        delSize->setGeometry(QRect(100, 70, 64, 28));
        totalSize = new QLabel(TotalDataSize);
        totalSize->setObjectName(QStringLiteral("totalSize"));
        totalSize->setGeometry(QRect(100, 100, 64, 28));

        retranslateUi(TotalDataSize);

        QMetaObject::connectSlotsByName(TotalDataSize);
    } // setupUi

    void retranslateUi(QWidget *TotalDataSize)
    {
        TotalDataSize->setWindowTitle(QApplication::translate("TotalDataSize", "Form", nullptr));
        label->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p align=\"right\">\355\230\204\354\236\254 \353\215\260\354\235\264\355\204\260 :</p></body></html>", nullptr));
        curSize->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p>\355\230\204\354\236\254</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p align=\"right\">\354\203\235\354\204\261 \353\215\260\354\235\264\355\204\260 :</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p align=\"right\">\354\202\255\354\240\234 \353\215\260\354\235\264\355\204\260 :</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p align=\"right\">\354\240\204\354\262\264 \353\215\260\354\235\264\355\204\260 :</p></body></html>", nullptr));
        createSize->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p>\354\203\235\354\204\261</p></body></html>", nullptr));
        delSize->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p>\354\202\255\354\240\234</p></body></html>", nullptr));
        totalSize->setText(QApplication::translate("TotalDataSize", "<html><head/><body><p>\354\240\204\354\262\264</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TotalDataSize: public Ui_TotalDataSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOTALDATASIZE_H
