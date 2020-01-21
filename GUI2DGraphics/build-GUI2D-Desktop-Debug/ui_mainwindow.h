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
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonBackground;
    QPushButton *buttonLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonAstroid;
    QPushButton *buttonCycloid;
    QPushButton *buttonHuygens;
    QPushButton *buttonHypo;
    QPushButton *buttonLine;
    QPushButton *buttonCircle;
    QPushButton *buttonEllipse;
    QPushButton *buttonFancy;
    QPushButton *buttonStarfish;
    QPushButton *buttonCloud;
    QPushButton *buttonCloud2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinInterval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinCount;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(532, 700);
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

        verticalLayout_2->addWidget(renderArea);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        buttonBackground = new QPushButton(centralWidget);
        buttonBackground->setObjectName(QStringLiteral("buttonBackground"));

        horizontalLayout_4->addWidget(buttonBackground);

        buttonLineColor = new QPushButton(centralWidget);
        buttonLineColor->setObjectName(QStringLiteral("buttonLineColor"));

        horizontalLayout_4->addWidget(buttonLineColor);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonAstroid = new QPushButton(centralWidget);
        buttonAstroid->setObjectName(QStringLiteral("buttonAstroid"));

        verticalLayout->addWidget(buttonAstroid);

        buttonCycloid = new QPushButton(centralWidget);
        buttonCycloid->setObjectName(QStringLiteral("buttonCycloid"));

        verticalLayout->addWidget(buttonCycloid);

        buttonHuygens = new QPushButton(centralWidget);
        buttonHuygens->setObjectName(QStringLiteral("buttonHuygens"));

        verticalLayout->addWidget(buttonHuygens);

        buttonHypo = new QPushButton(centralWidget);
        buttonHypo->setObjectName(QStringLiteral("buttonHypo"));

        verticalLayout->addWidget(buttonHypo);

        buttonLine = new QPushButton(centralWidget);
        buttonLine->setObjectName(QStringLiteral("buttonLine"));

        verticalLayout->addWidget(buttonLine);

        buttonCircle = new QPushButton(centralWidget);
        buttonCircle->setObjectName(QStringLiteral("buttonCircle"));

        verticalLayout->addWidget(buttonCircle);

        buttonEllipse = new QPushButton(centralWidget);
        buttonEllipse->setObjectName(QStringLiteral("buttonEllipse"));

        verticalLayout->addWidget(buttonEllipse);

        buttonFancy = new QPushButton(centralWidget);
        buttonFancy->setObjectName(QStringLiteral("buttonFancy"));

        verticalLayout->addWidget(buttonFancy);

        buttonStarfish = new QPushButton(centralWidget);
        buttonStarfish->setObjectName(QStringLiteral("buttonStarfish"));

        verticalLayout->addWidget(buttonStarfish);

        buttonCloud = new QPushButton(centralWidget);
        buttonCloud->setObjectName(QStringLiteral("buttonCloud"));

        verticalLayout->addWidget(buttonCloud);

        buttonCloud2 = new QPushButton(centralWidget);
        buttonCloud2->setObjectName(QStringLiteral("buttonCloud2"));

        verticalLayout->addWidget(buttonCloud2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(centralWidget);
        spinScale->setObjectName(QStringLiteral("spinScale"));
        spinScale->setMaximumSize(QSize(60, 16777215));
        spinScale->setDecimals(1);
        spinScale->setMaximum(200);
        spinScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

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
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        spinCount = new QSpinBox(centralWidget);
        spinCount->setObjectName(QStringLiteral("spinCount"));
        spinCount->setMaximumSize(QSize(60, 16777215));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(1);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

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
        buttonLineColor->setText(QApplication::translate("MainWindow", "Line Color", Q_NULLPTR));
        buttonAstroid->setText(QApplication::translate("MainWindow", "Astroid", Q_NULLPTR));
        buttonCycloid->setText(QApplication::translate("MainWindow", "Cycloid", Q_NULLPTR));
        buttonHuygens->setText(QApplication::translate("MainWindow", "Huygens", Q_NULLPTR));
        buttonHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid", Q_NULLPTR));
        buttonLine->setText(QApplication::translate("MainWindow", "Line", Q_NULLPTR));
        buttonCircle->setText(QApplication::translate("MainWindow", "Circle", Q_NULLPTR));
        buttonEllipse->setText(QApplication::translate("MainWindow", "Ellipse", Q_NULLPTR));
        buttonFancy->setText(QApplication::translate("MainWindow", "Fancy", Q_NULLPTR));
        buttonStarfish->setText(QApplication::translate("MainWindow", "Starfish", Q_NULLPTR));
        buttonCloud->setText(QApplication::translate("MainWindow", "Cloud 1", Q_NULLPTR));
        buttonCloud2->setText(QApplication::translate("MainWindow", "Cloud 2", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Scale:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Interval Length:", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Step Count:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
