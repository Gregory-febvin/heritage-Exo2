/********************************************************************************
** Form generated from reading UI file 'QTLineEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLINEEDIT_H
#define UI_QTLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTLineEditClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTLineEditClass)
    {
        if (QTLineEditClass->objectName().isEmpty())
            QTLineEditClass->setObjectName(QString::fromUtf8("QTLineEditClass"));
        QTLineEditClass->resize(634, 400);
        centralWidget = new QWidget(QTLineEditClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QTLineEditClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTLineEditClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 634, 21));
        QTLineEditClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTLineEditClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QTLineEditClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTLineEditClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QTLineEditClass->setStatusBar(statusBar);

        retranslateUi(QTLineEditClass);

        QMetaObject::connectSlotsByName(QTLineEditClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTLineEditClass)
    {
        QTLineEditClass->setWindowTitle(QCoreApplication::translate("QTLineEditClass", "QTLineEdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTLineEditClass: public Ui_QTLineEditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLINEEDIT_H
