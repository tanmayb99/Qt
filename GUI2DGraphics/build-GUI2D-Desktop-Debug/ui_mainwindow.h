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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    RenderArea *renderArea;
    QPushButton *buttonAst;
    QPushButton *buttonCyc;
    QPushButton *buttonHyCyc;
    QPushButton *buttonLine;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelScale;
    QDoubleSpinBox *spinScale;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelInterval;
    QDoubleSpinBox *spinInterval;
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
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        renderArea->setGeometry(QRect(10, 10, 271, 291));
        sizePolicy.setHeightForWidth(renderArea->sizePolicy().hasHeightForWidth());
        renderArea->setSizePolicy(sizePolicy);
        buttonAst = new QPushButton(centralWidget);
        buttonAst->setObjectName(QStringLiteral("buttonAst"));
        buttonAst->setGeometry(QRect(381, 1, 85, 37));
        sizePolicy.setHeightForWidth(buttonAst->sizePolicy().hasHeightForWidth());
        buttonAst->setSizePolicy(sizePolicy);
        buttonCyc = new QPushButton(centralWidget);
        buttonCyc->setObjectName(QStringLiteral("buttonCyc"));
        buttonCyc->setGeometry(QRect(381, 93, 141, 37));
        sizePolicy.setHeightForWidth(buttonCyc->sizePolicy().hasHeightForWidth());
        buttonCyc->setSizePolicy(sizePolicy);
        buttonHyCyc = new QPushButton(centralWidget);
        buttonHyCyc->setObjectName(QStringLiteral("buttonHyCyc"));
        buttonHyCyc->setGeometry(QRect(381, 47, 83, 37));
        sizePolicy.setHeightForWidth(buttonHyCyc->sizePolicy().hasHeightForWidth());
        buttonHyCyc->setSizePolicy(sizePolicy);
        buttonLine = new QPushButton(centralWidget);
        buttonLine->setObjectName(QStringLiteral("buttonLine"));
        buttonLine->setGeometry(QRect(381, 139, 80, 37));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(340, 250, 159, 39));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelScale = new QLabel(widget);
        labelScale->setObjectName(QStringLiteral("labelScale"));

        horizontalLayout->addWidget(labelScale);

        spinScale = new QDoubleSpinBox(widget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(247, 290, 272, 39));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelInterval = new QLabel(widget1);
        labelInterval->setObjectName(QStringLiteral("labelInterval"));

        horizontalLayout_2->addWidget(labelInterval);

        spinInterval = new QDoubleSpinBox(widget1);
        spinInterval->setObjectName(QStringLiteral("spinInterval"));
        spinInterval->setMaximum(100);
        spinInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinInterval);

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
        buttonCyc->setText(QApplication::translate("MainWindow", "Hypo Cycloid", Q_NULLPTR));
        buttonHyCyc->setText(QApplication::translate("MainWindow", "Cycloid", Q_NULLPTR));
        buttonLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        labelScale->setText(QApplication::translate("MainWindow", "Scale:", Q_NULLPTR));
        labelInterval->setText(QApplication::translate("MainWindow", "Interval Length:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
