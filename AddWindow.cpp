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
	QString saga_str		= ui.text_series->text();
	int cat					= FilmOperations::findItem(ui.comboBox->currentText(), FilmOperations::CAT);
	int year				= ui.spinBox->value();
	int rate				= ui.comboBox_2->currentText().toInt();
	int count = 0;

	int director_int = FilmOperations::findItem(director_str, FilmOperations::DIRECTOR);
	if (director_int == 0) {
		QMessageBox dialog;
		dialog.setText("Nie znaleziono wpisanego re¿ysera w bazie. Dodaæ nowego re¿ysera?");
		dialog.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
		dialog.setDefaultButton(QMessageBox::Yes);
		int res = dialog.exec();

		if (res == QMessageBox::Yes) {
			FilmOperations::addItem(director_str, FilmOperations::DIRECTOR);
			director_int = FilmOperations::findItem(director_str, FilmOperations::DIRECTOR);
		}
		else {
			QMessageBox anon;
			anon.setText("Nie dodano pozycji.");
			anon.setStandardButtons(QMessageBox::Ok);
			anon.exec();
			return;
		}
	}

	int saga_int = FilmOperations::findItem(saga_str, FilmOperations::SAGA);
	if (saga_int == 0) {
		QMessageBox dialogSaga;
		dialogSaga.setText("Nie znaleziono serii w bazie. Doda?");
		dialogSaga.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
		dialogSaga.setDefaultButton(QMessageBox::Yes);
		int res2 = dialogSaga.exec();

		if (res2 == QMessageBox::Yes) {
			FilmOperations::addItem(saga_str, FilmOperations::SAGA);
			saga_int = FilmOperations::findItem(saga_str, FilmOperations::SAGA);
		} else {
			QMessageBox anon;
			anon.setText("Nie dodano pozycji.");
			anon.setStandardButtons(QMessageBox::Ok);
			anon.exec();
			return;
		}
	}
	
	Film currentFilm(title, director_int, date, cat, 0, saga_int, year, rate);
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

	//kompleter sagi
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
