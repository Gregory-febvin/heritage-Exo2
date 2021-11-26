#include "QLineEdit_Histo.h"
#include <qDebug>

QLineEdit_Histo::QLineEdit_Histo(int TailleMax, QWidget *parent) : QLineEdit(parent)
{

	this->tailleTabbleau = TailleMax;

	//QObject::connect(this, SIGNAL(returnPressed()), SLOT(insertHisto()));


}

void QLineEdit_Histo::insertHisto()
{
	qDebug() << "App";
	
}


