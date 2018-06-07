/********************************************************************************
** Form generated from reading UI file 'age.ui'
**
** Created: Tue 30. Jan 08:51:56 2018
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGE_H
#define UI_AGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Age
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Age)
    {
        if (Age->objectName().isEmpty())
            Age->setObjectName(QString::fromUtf8("Age"));
        Age->resize(400, 300);
        menuBar = new QMenuBar(Age);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Age->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Age);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Age->addToolBar(mainToolBar);
        centralWidget = new QWidget(Age);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Age->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Age);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Age->setStatusBar(statusBar);

        retranslateUi(Age);

        QMetaObject::connectSlotsByName(Age);
    } // setupUi

    void retranslateUi(QMainWindow *Age)
    {
        Age->setWindowTitle(QApplication::translate("Age", "Age", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Age: public Ui_Age {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGE_H
