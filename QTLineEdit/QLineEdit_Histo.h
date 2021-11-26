#pragma once
#include "QTLineEdit.h"
#include <QLineEdit>
#include <QtWidgets/QApplication>
#include <qDebug>
#include <QVector>
#include <QObject>

class QLineEdit_Histo :
	public QLineEdit
{
	Q_OBJECT

		//std::vector< QString > tab;
		int tailleTabbleau;

public:
	QLineEdit_Histo(int TailleMax = 10, QWidget *parent = Q_NULLPTR);

public slots:
	void insertHisto();
};