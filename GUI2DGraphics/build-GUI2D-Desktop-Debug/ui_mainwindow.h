/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    RenderArea *renderArea;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAst;
    QPushButton *buttonHyCyc;
    QPushButton *buttonCyc;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(554, 396);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        sizePolicy.setHeightForWidth(renderArea->sizePolicy().hasHeightForWidth());
        renderArea->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(renderArea);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonAst = new QPushButton(centralWidget);
        buttonAst->setObjectName(QStringLiteral("buttonAst"));
        sizePolicy.setHeightForWidth(buttonAst->sizePolicy().hasHeightForWidth());
        buttonAst->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonAst);

        buttonHyCyc = new QPushButton(centralWidget);
        buttonHyCyc->setObjectName(QStringLiteral("buttonHyCyc"));
        sizePolicy.setHeightForWidth(buttonHyCyc->sizePolicy().hasHeightForWidth());
        buttonHyCyc->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonHyCyc);

        buttonCyc = new QPushButton(centralWidget);
        buttonCyc->setObjectName(QStringLiteral("buttonCyc"));
        sizePolicy.setHeightForWidth(buttonCyc->sizePolicy().hasHeightForWidth());
        buttonCyc->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(buttonCyc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        buttonAst->setText(QApplication::translate("MainWindow", "Astroid", Q_NULLPTR));
        buttonHyCyc->setText(QApplication::translate("MainWindow", "Cycloid", Q_NULLPTR));
        buttonCyc->setText(QApplication::translate("MainWindow", "Hypo Cycloid", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
