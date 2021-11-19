#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTLineEdit.h"
#include <QLineEdit>
#include <QtWidgets/QApplication>
#include <qDebug>
#include <QVector>
#include <QObject>

class QTLineEdit : public QMainWindow
{
    Q_OBJECT

public:
    QTLineEdit(QWidget *parent = Q_NULLPTR);

private:
    Ui::QTLineEditClass ui;

public slots:
	void ajoute();
	void historique();
	void efface();


};
