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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_dataIO;
    QPushButton *pushButton_allInfo;
    QPushButton *pushButton_totalDataSize;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *IntTypeStack)
    {
        if (IntTypeStack->objectName().isEmpty())
            IntTypeStack->setObjectName(QStringLiteral("IntTypeStack"));
        IntTypeStack->resize(312, 218);
        IntTypeStack->setStyleSheet(QLatin1String("background-color: rgb(0, 170, 255);\n"
"color: rgb(255, 255, 0);"));
        centralWidget = new QWidget(IntTypeStack);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        pushButton_dataIO = new QPushButton(centralWidget);
        pushButton_dataIO->setObjectName(QStringLiteral("pushButton_dataIO"));

        gridLayout->addWidget(pushButton_dataIO, 1, 0, 1, 1);

        pushButton_allInfo = new QPushButton(centralWidget);
        pushButton_allInfo->setObjectName(QStringLiteral("pushButton_allInfo"));

        gridLayout->addWidget(pushButton_allInfo, 2, 0, 1, 1);

        pushButton_totalDataSize = new QPushButton(centralWidget);
        pushButton_totalDataSize->setObjectName(QStringLiteral("pushButton_totalDataSize"));

        gridLayout->addWidget(pushButton_totalDataSize, 3, 0, 1, 1);

        IntTypeStack->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(IntTypeStack);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 312, 26));
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
        label->setText(QApplication::translate("IntTypeStack", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Menu</span></p></body></html>", nullptr));
        pushButton_dataIO->setText(QApplication::translate("IntTypeStack", "Data IO", nullptr));
        pushButton_allInfo->setText(QApplication::translate("IntTypeStack", "All Information", nullptr));
        pushButton_totalDataSize->setText(QApplication::translate("IntTypeStack", "Total Data Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IntTypeStack: public Ui_IntTypeStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTTYPESTACK_H
