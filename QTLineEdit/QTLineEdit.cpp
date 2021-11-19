#include "QTLineEdit.h"
#include <qDebug>

QTLineEdit::QTLineEdit(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	QLineEdit *button = new QLineEdit;
	button->resize(100, 20);
	button->move(15, 50);
	button->show();
	button->setParent(this);
	
}

void QTLineEdit::ajoute()
{
	
}

void QTLineEdit::historique()
{
}

void QTLineEdit::efface()
{
}
