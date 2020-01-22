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
    RenderArea *renderingArea;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonBackground;
    QPushButton *buttonLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonLine;
    QPushButton *buttonAstroid;
    QPushButton *buttonCycloid;
    QPushButton *buttonHypo;
    QPushButton *buttonHuygens;
    QPushButton *buttonCircle;
    QPushButton *buttonEllipse;
    QPushButton *buttonFancy;
    QPushButton *buttonCloud;
    QPushButton *buttonCloud2;
    QPushButton *buttonStarfish;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinboxScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinboxInterval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinboxCount;
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
        renderingArea = new RenderArea(centralWidget);
        renderingArea->setObjectName(QStringLiteral("renderingArea"));

        verticalLayout_2->addWidget(renderingArea);

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
        buttonLine = new QPushButton(centralWidget);
        buttonLine->setObjectName(QStringLiteral("buttonLine"));

        verticalLayout->addWidget(buttonLine);

        buttonAstroid = new QPushButton(centralWidget);
        buttonAstroid->setObjectName(QStringLiteral("buttonAstroid"));

        verticalLayout->addWidget(buttonAstroid);

        buttonCycloid = new QPushButton(centralWidget);
        buttonCycloid->setObjectName(QStringLiteral("buttonCycloid"));

        verticalLayout->addWidget(buttonCycloid);

        buttonHypo = new QPushButton(centralWidget);
        buttonHypo->setObjectName(QStringLiteral("buttonHypo"));

        verticalLayout->addWidget(buttonHypo);

        buttonHuygens = new QPushButton(centralWidget);
        buttonHuygens->setObjectName(QStringLiteral("buttonHuygens"));

        verticalLayout->addWidget(buttonHuygens);

        buttonCircle = new QPushButton(centralWidget);
        buttonCircle->setObjectName(QStringLiteral("buttonCircle"));

        verticalLayout->addWidget(buttonCircle);

        buttonEllipse = new QPushButton(centralWidget);
        buttonEllipse->setObjectName(QStringLiteral("buttonEllipse"));

        verticalLayout->addWidget(buttonEllipse);

        buttonFancy = new QPushButton(centralWidget);
        buttonFancy->setObjectName(QStringLiteral("buttonFancy"));

        verticalLayout->addWidget(buttonFancy);

        buttonCloud = new QPushButton(centralWidget);
        buttonCloud->setObjectName(QStringLiteral("buttonCloud"));

        verticalLayout->addWidget(buttonCloud);

        buttonCloud2 = new QPushButton(centralWidget);
        buttonCloud2->setObjectName(QStringLiteral("buttonCloud2"));

        verticalLayout->addWidget(buttonCloud2);

        buttonStarfish = new QPushButton(centralWidget);
        buttonStarfish->setObjectName(QStringLiteral("buttonStarfish"));

        verticalLayout->addWidget(buttonStarfish);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        spinboxScale = new QDoubleSpinBox(centralWidget);
        spinboxScale->setObjectName(QStringLiteral("spinScale"));
        spinboxScale->setMaximumSize(QSize(76, 16777215));
        spinboxScale->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinboxScale->setDecimals(1);
        spinboxScale->setMaximum(200);
        spinboxScale->setSingleStep(0.1);

        horizontalLayout->addWidget(spinboxScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinboxInterval = new QDoubleSpinBox(centralWidget);
        spinboxInterval->setObjectName(QStringLiteral("spinInterval"));
        spinboxInterval->setMaximumSize(QSize(76, 16777215));
        spinboxInterval->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinboxInterval->setMaximum(100);
        spinboxInterval->setSingleStep(0.1);

        horizontalLayout_2->addWidget(spinboxInterval);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        spinboxCount = new QSpinBox(centralWidget);
        spinboxCount->setObjectName(QStringLiteral("spinCount"));
        spinboxCount->setMaximumSize(QSize(76, 16777215));
        spinboxCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinboxCount->setMaximum(512);
        spinboxCount->setSingleStep(1);

        horizontalLayout_3->addWidget(spinboxCount);


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
        buttonLine->setText(QApplication::translate("MainWindow", "Line Shape", Q_NULLPTR));
        buttonAstroid->setText(QApplication::translate("MainWindow", "Astroid Shape", Q_NULLPTR));
        buttonCycloid->setText(QApplication::translate("MainWindow", "Cycloid Shape", Q_NULLPTR));
        buttonHypo->setText(QApplication::translate("MainWindow", "Hypo Cycloid Shape", Q_NULLPTR));
        buttonHuygens->setText(QApplication::translate("MainWindow", "Huygens Shape", Q_NULLPTR));
        buttonCircle->setText(QApplication::translate("MainWindow", "Circle Shape", Q_NULLPTR));
        buttonEllipse->setText(QApplication::translate("MainWindow", "Ellipse Shape", Q_NULLPTR));
        buttonFancy->setText(QApplication::translate("MainWindow", "Random Shape", Q_NULLPTR));
        buttonCloud->setText(QApplication::translate("MainWindow", "Cloud A Shape", Q_NULLPTR));
        buttonCloud2->setText(QApplication::translate("MainWindow", "Cloud B Shape", Q_NULLPTR));
        buttonStarfish->setText(QApplication::translate("MainWindow", "Starfish Shape", Q_NULLPTR));
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
