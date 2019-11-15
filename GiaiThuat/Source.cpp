#include "Source.h"
/*	danh sach bi thua 1 dong
*/

Source::Source(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->service = new Service();
	service->GetDataFromFile();
}

void Source::on_btnHome_1_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.listWidget->setVisible(false);
	ui.lineEdit->setVisible(false);
}

void Source::on_btnHome_2_clicked()
{
	ui.stackedWidget->setCurrentIndex(5);
}

void Source::on_btnHome_3_clicked()
{
	this->service->SaveDataToFile();
	this->close();
}

void Source::on_btnCancelMenuPage_clicked()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void Source::on_btnOkMenuPage_clicked()
{
	if (ui.btnRadio1->isChecked())
	{
		//update page
		if (ui.lineEdit->isVisible())
		{
			ui.stackedWidget->setCurrentIndex(4);
			Node node = this->service->CheckWord(ui.lineEdit->text() + "\r" + "\n");
			ui.editWordUpdatePage->setText(node.value);
			ui.editPronunUpdatePage->setText(node.pronunciation);
			ui.editTypeUpdatePage->setText(node.type);
			ui.editMeanUpdatePage->setText(node.detail);

			ui.lblWordUpdatePage_2->setText(node.value);
			ui.lblPronunUpdatePage_2->setText(node.pronunciation);
			ui.lblTypeUpdatePage_2->setText(node.type);
			ui.lblMeanUpdatePage_2->setText(node.detail);
		}
		else
		{
			ui.lineEdit->setVisible(true);
			ui.listWidget->setVisible(false);		
		}
		
	}
	if (ui.btnRadio2->isChecked() || ui.btnRadio3->isChecked())
	{
		//update page
		if (ui.listWidget->currentItem() != NULL && ui.listWidget->isVisible())
		{
			ui.stackedWidget->setCurrentIndex(4);
			Node node = this->service->CheckWord(ui.listWidget->currentItem()->text());
			ui.editWordUpdatePage->setText(node.value);
			ui.editPronunUpdatePage->setText(node.pronunciation);
			ui.editTypeUpdatePage->setText(node.type);
			ui.editMeanUpdatePage->setText(node.detail);

			ui.lblWordUpdatePage_2->setText(node.value);
			ui.lblPronunUpdatePage_2->setText(node.pronunciation);
			ui.lblTypeUpdatePage_2->setText(node.type);
			ui.lblMeanUpdatePage_2->setText(node.detail);

		}
		else
		{
			ui.listWidget->clear();
			QStringList valueNodes = this->service->treeMap->valueNodes.split(" ");
			ui.listWidget->addItems(valueNodes);
			ui.listWidget->setVisible(true);
			ui.lineEdit->setVisible(false);
		}
		

	}

	if (ui.btnRadio4->isChecked())
	{
		ui.stackedWidget->setCurrentIndex(3);
		
		
		ui.lineEdit->setVisible(false);
		ui.listWidget->setVisible(false);
		ui.lblThongBaoAddPage->setVisible(false);

	}
	if (ui.btnRadio5->isChecked())
	{
		//list page
		ui.stackedWidget->setCurrentIndex(2);

		ui.lblThongBaoListPage->setVisible(false);
		ui.lineEdit->setVisible(false);
		ui.listWidget->setVisible(false);
		ui.textListPage->setPlainText(service->DisplayDictionary());

	}

}

void Source::on_btnBackListPage_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.listWidget->setVisible(false);
	ui.lineEdit->setVisible(false);
}


void Source::on_btnCancelAddPage_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.lblThongBaoAddPage->setVisible(false);
}

//not completed
void Source::on_btnOkAddPage_clicked()
{
	QString value = ui.inputAddPage_1->text();
	QString pronunciation = ui.inputAddPage_3->text();
	QString type = ui.inputAddPage_2->text();
	QString detail = ui.inputAddPage_4->document()->toPlainText();

	if (value.isEmpty() || pronunciation.isEmpty() || type.isEmpty() || detail.isEmpty())
	{
		ui.lblThongBaoAddPage->setText("Please fill in your input completely!!");
		ui.lblThongBaoAddPage->setVisible(true);
		return;
	}
	detail = detail + "\r" + "\n";
	value = value + "\r" + "\n";
	pronunciation = pronunciation + "\r" + "\n";
	type = type + "\r" + "\n";
	Node* node = new Node(value,pronunciation,type,detail);

	this->service->AddNewWord(*node);
	ui.lblThongBaoAddPage->setText("Add new word successfully!!");
	ui.lblThongBaoAddPage->setVisible(true);
}

void Source::on_btnResetAddPage_clicked()
{
	ui.inputAddPage_1->setText("");
	ui.inputAddPage_2->setText("");
	ui.inputAddPage_3->setText("");
	ui.inputAddPage_4->setText("");
	ui.lblThongBaoAddPage->setVisible(false);
}

void Source::on_btnEditUpdatePage_clicked()
{
	if (ui.lblWordUpdatePage_2->text().compare(ui.editWordUpdatePage->text()) != 0)
	{
		this->service->UpdateWordByValue(ui.lblWordUpdatePage_2->text(), ui.editWordUpdatePage->text());
	}

	if (ui.lblTypeUpdatePage_2->text().compare(ui.editTypeUpdatePage->text()) != 0)
	{
		this->service->UpdateWordByType(ui.editWordUpdatePage->text(), ui.editTypeUpdatePage->text());
	}

	if (ui.lblPronunUpdatePage_2->text().compare(ui.editPronunUpdatePage->text()) != 0)
	{
		this->service->UpdateWordByPronunciation(ui.editWordUpdatePage->text(), ui.editPronunUpdatePage->text());
	}
	/*QString x = ui.lblMeanUpdatePage_2->text();
	QString y = ui.editMeanUpdatePage->document()->toPlainText();
	if (ui.lblMeanUpdatePage_2->text().compare(ui.editMeanUpdatePage->document()->toPlainText()) != 0)
	{
		this->service->UpdateWordByDetail(ui.editWordUpdatePage->text(), ui.editMeanUpdatePage->document()->toPlainText());
		
	}*/
	ui.stackedWidget->setCurrentIndex(2);
	ui.lblThongBaoListPage->setVisible(true);
	ui.lblThongBaoListPage->setText("Edit Successfully!!");
	ui.textListPage->setPlainText(service->DisplayDictionary());
}

void Source::on_btnBackUpdatePage_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.listWidget->setVisible(false);
	ui.lineEdit->setVisible(false);
}

void Source::on_btnExitUpdatePage_clicked()
{
	this->close();
}

void Source::on_btnDeletePage_clicked()
{
	this->service->DeleteWord(ui.lblWordUpdatePage_2->text());

	ui.stackedWidget->setCurrentIndex(2);
	ui.lblThongBaoListPage->setVisible(true);
	ui.lblThongBaoListPage->setText("Delete Successfully!!");
	ui.textListPage->setPlainText(service->DisplayDictionary());

}

void Source::on_btnStartLv1Page_clicked()
{
	ui.stackedWidget->setCurrentIndex(6);
	ui.lcdGradeNumber->display(0);
	ui.lcdStageNumber->display(1);
	this->service->stage = 0;
	this->service->point = 0;
	on_btnNextLv1Page_clicked();
}

void Source::on_btnSubmitLv1Page_clicked()
{
}

void Source::on_btnNextLv1Page_clicked()
{
	this->xIndex = 100;
	QStringList words = this->service->treeMap->valueNodes.split(" ");
	std::srand(time(NULL));
	this->wordIndex = rand() % (words.length() - 1);

	Node node = this->service->CheckWord(words.at(wordIndex));
	
	int missWordIndex = rand() % (node.value.length() - 1);
	QChar* wordArray = node.value.begin();
	for (int i = 0; !(*(wordArray + i)).isNull(); i++)
	{
		QLineEdit* btn = new QLineEdit(ui.frGameContent);
		btn->setGeometry(this->xIndex, 130, 20, 20);
		btn->setText(*(wordArray + i));
		btn->setVisible(true);
		btn->setEnabled(false);

		if (i == missWordIndex)
		{
			btn->setText("");
			btn->setEnabled(true);
		}
		this->xIndex += 20;
	}
	this->service->StageUp();
	
}

void Source::on_btnExitLv1Page_clicked()
{
	this->close();
}
