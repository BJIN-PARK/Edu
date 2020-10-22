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

class Ui_IntTypeStack
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_allInfo;
    QPushButton *pushButton_dataIO;
    QLabel *label;
    QPushButton *pushButton_totalDataSize;
    QPushButton *pushButton_exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IntTypeStack)
    {
        if (IntTypeStack->objectName().isEmpty())
            IntTypeStack->setObjectName(QStringLiteral("IntTypeStack"));
        IntTypeStack->resize(600, 400);
        centralWidget = new QWidget(IntTypeStack);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_allInfo = new QPushButton(centralWidget);
        pushButton_allInfo->setObjectName(QStringLiteral("pushButton_allInfo"));
        pushButton_allInfo->setGeometry(QRect(10, 70, 100, 28));
        pushButton_dataIO = new QPushButton(centralWidget);
        pushButton_dataIO->setObjectName(QStringLiteral("pushButton_dataIO"));
        pushButton_dataIO->setGeometry(QRect(10, 40, 100, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 100, 28));
        pushButton_totalDataSize = new QPushButton(centralWidget);
        pushButton_totalDataSize->setObjectName(QStringLiteral("pushButton_totalDataSize"));
        pushButton_totalDataSize->setGeometry(QRect(10, 100, 100, 28));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(10, 130, 100, 28));
        IntTypeStack->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(IntTypeStack);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        IntTypeStack->setMenuBar(menuBar);
        mainToolBar = new QToolBar(IntTypeStack);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        IntTypeStack->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(IntTypeStack);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        IntTypeStack->setStatusBar(statusBar);

        retranslateUi(IntTypeStack);

        QMetaObject::connectSlotsByName(IntTypeStack);
    } // setupUi

    void retranslateUi(QMainWindow *IntTypeStack)
    {
        IntTypeStack->setWindowTitle(QApplication::translate("IntTypeStack", "IntTypeStack", nullptr));
        pushButton_allInfo->setText(QApplication::translate("IntTypeStack", "All Information", nullptr));
        pushButton_dataIO->setText(QApplication::translate("IntTypeStack", "Data IO", nullptr));
        label->setText(QApplication::translate("IntTypeStack", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Menu</span></p></body></html>", nullptr));
        pushButton_totalDataSize->setText(QApplication::translate("IntTypeStack", "Total Data Size", nullptr));
        pushButton_exit->setText(QApplication::translate("IntTypeStack", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntTypeStack: public Ui_IntTypeStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTTYPESTACK_H