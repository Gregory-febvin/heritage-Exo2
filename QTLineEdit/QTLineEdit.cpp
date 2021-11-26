#include "QTLineEdit.h"
#include "QLineEdit_Histo.h"
#include <qDebug>

QTLineEdit::QTLineEdit(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	//QLineEdit_Histo * lineEditHisto = new QLineEdit_Histo();

	QLineEdit *TableauTaille = new QLineEdit(this);
	TableauTaille->resize(100, 20);
	TableauTaille->move(15, 50);

	//connect(TableauTaille, SIGNAL(returnPressed()), this, SLOT(historique()));
}

void QTLineEdit::historique()
{
	int TailleHisto = this->TableauTaille->text().toInt();

	QLineEdit *Texte = new QLineEdit(this);
	Texte->resize(100, 20);
	Texte->move(25, 50);
	TableauTaille->setVisible(false);

}

void QTLineEdit::efface()
{

}
