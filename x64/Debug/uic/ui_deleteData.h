/********************************************************************************
** Form generated from reading UI file 'deleteData.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEDATA_H
#define UI_DELETEDATA_H

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

class Ui_deleteData
{
public:
    QLineEdit *line_deleteData;
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton_deleteData;

    void setupUi(QWidget *deleteData)
    {
        if (deleteData->objectName().isEmpty())
            deleteData->setObjectName(QStringLiteral("deleteData"));
        deleteData->resize(184, 138);
        line_deleteData = new QLineEdit(deleteData);
        line_deleteData->setObjectName(QStringLiteral("line_deleteData"));
        line_deleteData->setGeometry(QRect(50, 40, 100, 28));
        line_deleteData->setDragEnabled(false);
        label_2 = new QLabel(deleteData);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 10, 100, 28));
        label = new QLabel(deleteData);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 35, 28));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton_deleteData = new QPushButton(deleteData);
        pushButton_deleteData->setObjectName(QStringLiteral("pushButton_deleteData"));
        pushButton_deleteData->setGeometry(QRect(55, 80, 60, 28));

        retranslateUi(deleteData);

        QMetaObject::connectSlotsByName(deleteData);
    } // setupUi

    void retranslateUi(QWidget *deleteData)
    {
        deleteData->setWindowTitle(QApplication::translate("deleteData", "Form", nullptr));
        label_2->setText(QApplication::translate("deleteData", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\353\215\260\354\235\264\355\204\260 \354\202\255\354\240\234</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("deleteData", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">\354\236\205\353\240\245</span></p></body></html>", nullptr));
        pushButton_deleteData->setText(QApplication::translate("deleteData", "\355\231\225\354\235\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteDataClass: public Ui_deleteDataClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEDATA_H
