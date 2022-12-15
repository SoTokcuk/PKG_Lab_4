/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *a_StepByStep;
    QAction *a_Bresenham;
    QAction *a_DDA;
    QAction *a_circle;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_4;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(822, 622);
        a_StepByStep = new QAction(MainWindow);
        a_StepByStep->setObjectName(QString::fromUtf8("a_StepByStep"));
        a_Bresenham = new QAction(MainWindow);
        a_Bresenham->setObjectName(QString::fromUtf8("a_Bresenham"));
        a_DDA = new QAction(MainWindow);
        a_DDA->setObjectName(QString::fromUtf8("a_DDA"));
        a_circle = new QAction(MainWindow);
        a_circle->setObjectName(QString::fromUtf8("a_circle"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 500, 780, 67));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setMinimum(-100.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(6, 0));
        label_3->setMaximumSize(QSize(15, 16777215));
        label_3->setSizeIncrement(QSize(1, 0));
        label_3->setBaseSize(QSize(6, 0));

        horizontalLayout_3->addWidget(label_3);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setMinimum(-100.000000000000000);

        horizontalLayout_3->addWidget(doubleSpinBox_3);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_4->addWidget(label_4);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setMinimum(-100.000000000000000);

        horizontalLayout_4->addWidget(doubleSpinBox_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMaximumSize(QSize(15, 16777215));

        horizontalLayout_5->addWidget(label_5);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setMinimum(-100.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBox_4);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(11, 40, 778, 453));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 776, 451));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(10, 10, 170, 24));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(250, 10, 170, 24));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(430, 10, 200, 24));
        radioButton_4 = new QRadioButton(centralwidget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(670, 10, 120, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 822, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        a_StepByStep->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\321\210\320\260\320\263\320\276\320\262\321\213\320\271", nullptr));
        a_Bresenham->setText(QCoreApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\321\215\320\274\320\260", nullptr));
        a_DDA->setText(QCoreApplication::translate("MainWindow", "\320\246\320\224\320\220", nullptr));
        a_circle->setText(QCoreApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\321\215\320\274\320\260(\320\276\320\272\321\200\320\266\320\275\321\201\321\202\321\214)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "y1", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "y2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\321\210\320\260\320\263\320\276\320\262\321\213\320\271", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\321\215\320\274", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\320\221\321\200\320\265\320\267\320\265\320\275\321\205\321\215\320\274(\320\276\320\272\321\203\321\200\320\276\320\266\320\275\320\276\321\201\321\202\321\214)", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\320\246\320\224\320\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
