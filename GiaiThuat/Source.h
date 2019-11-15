#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Source.h"
#include "Service.h"

class Source : public QMainWindow
{
	Q_OBJECT

public:
	Source(QWidget *parent = Q_NULLPTR);
	

private:
	Ui::SourceClass ui;
	Service* service;
	int xIndex;
	int wordIndex;

public slots:
	void on_btnHome_1_clicked();
	void on_btnHome_2_clicked();
	void on_btnHome_3_clicked();

	void on_btnCancelMenuPage_clicked();
	void on_btnOkMenuPage_clicked();

	void on_btnBackListPage_clicked();

	void on_btnCancelAddPage_clicked();
	void on_btnOkAddPage_clicked();
	void on_btnResetAddPage_clicked();

	void on_btnEditUpdatePage_clicked();
	void on_btnBackUpdatePage_clicked();
	void on_btnExitUpdatePage_clicked();
	void on_btnDeletePage_clicked();

	void on_btnStartLv1Page_clicked();
	void on_btnSubmitLv1Page_clicked();
	void on_btnNextLv1Page_clicked();
	void on_btnExitLv1Page_clicked();

};
