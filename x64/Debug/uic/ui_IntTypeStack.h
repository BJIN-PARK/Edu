/********************************************************************************
** Form generated from reading UI file 'IntTypeStack.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTTYPESTACK_H
#define UI_INTTYPESTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IntTypeStackClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_allInformation;
    QPushButton *pushButton_dataIO;
    QPushButton *pushButton_sortData;
    QLabel *label;
    QPushButton *pushButton_totalDataSize;
    QPushButton *pushButton_exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IntTypeStackClass)
    {
        if (IntTypeStackClass->objectName().isEmpty())
            IntTypeStackClass->setObjectName(QStringLiteral("IntTypeStackClass"));
        IntTypeStackClass->resize(600, 400);
        centralWidget = new QWidget(IntTypeStackClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_allInformation = new QPushButton(centralWidget);
        pushButton_allInformation->setObjectName(QStringLiteral("pushButton_allInformation"));
        pushButton_allInformation->setGeometry(QRect(10, 100, 100, 28));
        pushButton_dataIO = new QPushButton(centralWidget);
        pushButton_dataIO->setObjectName(QStringLiteral("pushButton_dataIO"));
        pushButton_dataIO->setGeometry(QRect(10, 40, 100, 28));
        pushButton_sortData = new QPushButton(centralWidget);
        pushButton_sortData->setObjectName(QStringLiteral("pushButton_sortData"));
        pushButton_sortData->setGeometry(QRect(10, 70, 100, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 100, 28));
        pushButton_totalDataSize = new QPushButton(centralWidget);
        pushButton_totalDataSize->setObjectName(QStringLiteral("pushButton_totalDataSize"));
        pushButton_totalDataSize->setGeometry(QRect(10, 130, 100, 28));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(10, 160, 100, 28));
        IntTypeStackClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(IntTypeStackClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        IntTypeStackClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(IntTypeStackClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        IntTypeStackClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(IntTypeStackClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        IntTypeStackClass->setStatusBar(statusBar);

        retranslateUi(IntTypeStackClass);

        QMetaObject::connectSlotsByName(IntTypeStackClass);
    } // setupUi

    void retranslateUi(QMainWindow *IntTypeStackClass)
    {
        IntTypeStackClass->setWindowTitle(QApplication::translate("IntTypeStackClass", "IntTypeStack", nullptr));
        pushButton_allInformation->setText(QApplication::translate("IntTypeStackClass", "All Information", nullptr));
        pushButton_dataIO->setText(QApplication::translate("IntTypeStackClass", "Data IO", nullptr));
        pushButton_sortData->setText(QApplication::translate("IntTypeStackClass", "Sort Data", nullptr));
        label->setText(QApplication::translate("IntTypeStackClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Menu</span></p></body></html>", nullptr));
        pushButton_totalDataSize->setText(QApplication::translate("IntTypeStackClass", "Total Data Size", nullptr));
        pushButton_exit->setText(QApplication::translate("IntTypeStackClass", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntTypeStackClass: public Ui_IntTypeStackClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTTYPESTACK_H
