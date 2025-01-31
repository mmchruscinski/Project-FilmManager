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
	qDebug() << cat;
	int count = 0;

	int director_int = FilmOperations::findAuthor(director_str);
	if (director_int == 0) {
		QMessageBox dialog;
		dialog.setText("Nie znaleziono wpisanego re¿ysera w bazie. Dodaæ nowego re¿ysera?");
		dialog.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
		dialog.setDefaultButton(QMessageBox::Yes);
		int res = dialog.exec();

		if (res == QMessageBox::Yes) {
			FilmOperations::addItem(director_str, "Directors");
			director_int = FilmOperations::findAuthor(director_str);
			qDebug() << director_int;
		}
	}
	
	Film currentFilm(title, director_int, date, cat, 0);
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
}
