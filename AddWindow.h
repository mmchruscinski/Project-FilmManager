#pragma once

#include <QWidget>
#include "ui_AddWindow.h"
#include "FilmOperations.h"
#include "Film.h"
#include <qmessagebox.h>

class AddWindow : public QWidget
{
	Q_OBJECT

public:
	AddWindow(QWidget *parent = nullptr);
	~AddWindow();

private:
	Ui::AddWindowClass ui;
	void setWin();

public slots:
	void acceptAddition();

signals:
	void acceptSignal();
};
