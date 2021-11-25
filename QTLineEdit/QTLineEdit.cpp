#include "QTLineEdit.h"
#include "QLineEdit_Histo.h"
#include <qDebug>

QTLineEdit::QTLineEdit(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	QLineEdit_Histo * lineEditHisto = new QLineEdit_Histo();

	QLineEdit *lineedit = new QLineEdit;
	lineedit->resize(100, 20);
	lineedit->move(15, 50);
	lineedit->show();
	lineedit->setParent(this);

	connect(lineedit, SIGNAL(returnPressed()), this, SLOT(historique()));
}

void QTLineEdit::ajoute()
{
	
}

void QTLineEdit::historique()
{
	qDebug() << "coucou";
}

void QTLineEdit::efface()
{

}
