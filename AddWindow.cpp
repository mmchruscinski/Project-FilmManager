#include "AddWindow.h"
#include <QCompleter>

AddWindow::AddWindow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	setWin();
}

AddWindow::~AddWindow()
{}

void AddWindow::acceptAddition()
{
	QString title			= ui.text_title->text();
	QString director_str	= ui.text_director->text();
	QString date			= ui.text_dates->text();
	int cat					= FilmOperations::findItem(ui.comboBox->currentText(), "Cathegories");
	int year				= ui.spinBox->value();
	int rate				= ui.comboBox_2->currentText().toInt();
	int saga = 0;
	int count = 0;

	int director_int = FilmOperations::findAuthor(director_str);
	if (director_int == 0) {
		QMessageBox dialog;
		dialog.setText("Nie znaleziono wpisanego re¿ysera w bazie. Dodaæ nowego re¿ysera?");
		dialog.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
		dialog.setDefaultButton(QMessageBox::Yes);
		int res = dialog.exec();

		if (res == QMessageBox::Yes) {
			FilmOperations::addItem(director_str, FilmOperations::Database::DIRECTOR);
			director_int = FilmOperations::findAuthor(director_str);
			qDebug() << director_int;
		}
	}
	
	Film currentFilm(title, director_int, date, cat, 0, saga, year, rate);
	FilmOperations::addFilm(currentFilm);
	emit acceptSignal();
}

void AddWindow::setWin()
{
	//kompleter autora
	QSqlQueryModel* authors = new QSqlQueryModel();
	authors->setQuery("SELECT Name FROM Directors");
	QCompleter* completer = new QCompleter(authors, ui.text_director);
	completer->setCaseSensitivity(Qt::CaseInsensitive);
	ui.text_director->setCompleter(completer);
	
	//definicja combo
	QSqlQueryModel* cats = new QSqlQueryModel();
	cats->setQuery("SELECT Cat FROM Cathegories");
	for (int i = 0; i < cats->rowCount(); i++) {
		QString catName = cats->data(cats->index(i, 0)).toString();
		ui.comboBox->addItem(catName);
	}

	//kompleter sago
	QSqlQueryModel* sagas = new QSqlQueryModel();
	sagas->setQuery("SELECT SagaName FROM Sagas");
	QCompleter* sagaComp = new QCompleter(sagas, ui.text_series);
	sagaComp->setCaseSensitivity(Qt::CaseInsensitive);
	ui.text_series->setCompleter(sagaComp);

	//definicja combo oceny
	for (int i = 1; i < 11; i++) {
		ui.comboBox_2->addItem(QString::number(i));
	}

	//definicja spinboxa
	ui.spinBox->setMaximum(2100);
	ui.spinBox->setValue(2025);
}
