#pragma once

#include <QWidget>
#include "ui_Form2.h"

class Form2 : public QWidget
{
	Q_OBJECT

public:
	Form2(QWidget *parent = Q_NULLPTR);
	~Form2();

private:
	Ui::Form2 ui;
};
