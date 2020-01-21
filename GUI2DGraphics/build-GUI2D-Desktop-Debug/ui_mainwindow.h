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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
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
    QVBoxLayout *verticalLayout_2;
    RenderArea *renderArea;
    QPushButton *buttonBackground;
    QPushButton *buttonLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAst;
    QPushButton *buttonHyCyc;
    QPushButton *buttonCyc;
    QPushButton *buttonLine;
    QHBoxLayout *horizontalLayout;
    QLabel *labelScale;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelInterval;
    QDoubleSpinBox *spinInterval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinCount;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(554, 441);
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
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QStringLiteral("renderArea"));
        sizePolicy.setHeightForWidth(renderArea->sizePolicy().hasHeightForWidth());
        renderArea->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(renderArea);

        buttonBackground = new QPushButton(centralWidget);
        buttonBackground->setObjectName(QStringLiteral("buttonBackground"));

        verticalLayout_2->addWidget(buttonBackground);

        buttonLineColor = new QPushButton(centralWidget);
        buttonLineColor->setObjectName(QStringLiteral("buttonLineColor"));

        verticalLayout_2->addWidget(buttonLineColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 2, 1);

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

        buttonLine = new QPushButton(centralWidget);
        buttonLine->setObjectName(QStringLiteral("buttonLine"));

        verticalLayout->addWidget(buttonLine);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelScale = new QLabel(centralWidget);
        labelScale->setObjectName(QStringLiteral("labelScale"));
        labelScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(labelScale);

        spinScale = new QDoubleSpinBox(centralWidget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setMaximumSize(QSize(60, 16777215));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelInterval = new QLabel(centralWidget);
        labelInterval->setObjectName(QStringLiteral("labelInterval"));
        labelInterval->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelInterval);

        spinInterval = new QDoubleSpinBox(centralWidget);
        spinInterval->setObjectName(QStringLiteral("spinInterval"));
        spinInterval->setMaximumSize(QSize(60, 16777215));
        spinInterval->setMaximum(100);
        spinInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinInterval);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        spinCount = new QSpinBox(centralWidget);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMaximumSize(QSize(60, 16777215));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(8);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 2);

        verticalSpacer = new QSpacerItem(20, 372, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 2, 1, 1);

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
        buttonBackground->setText(QApplication::translate("MainWindow", "Background", Q_NULLPTR));
        buttonLineColor->setText(QApplication::translate("MainWindow", "Line color", Q_NULLPTR));
        buttonAst->setText(QApplication::translate("MainWindow", "Astroid", Q_NULLPTR));
        buttonHyCyc->setText(QApplication::translate("MainWindow", "Cycloid", Q_NULLPTR));
        buttonCyc->setText(QApplication::translate("MainWindow", "Hypo Cycloid", Q_NULLPTR));
        buttonLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        labelScale->setText(QApplication::translate("MainWindow", "Scale:", Q_NULLPTR));
        labelInterval->setText(QApplication::translate("MainWindow", "Interval Length:", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Step Count:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
