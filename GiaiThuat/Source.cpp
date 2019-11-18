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
	ui.lblThongBaoMenuPage->setVisible(false);
	ui.listWidget->setVisible(false);
	ui.lineEdit->setVisible(false);
}

void Source::setContentEditPage(Node node)
{
	ui.editWordUpdatePage->setText(node.value);
	ui.editPronunUpdatePage->setText(node.pronunciation);
	ui.editTypeUpdatePage->setText(node.type);
	ui.editMeanUpdatePage->setText(node.detail);

	ui.lblWordUpdatePage_2->setText(node.value);
	ui.lblPronunUpdatePage_2->setText(node.pronunciation);
	ui.lblTypeUpdatePage_2->setText(node.type);
	ui.lblMeanUpdatePage_2->setText(node.detail);
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
			try
			{
				Node node = this->service->CheckWord(ui.lineEdit->text() + "\r" + "\n");
				this->setContentEditPage(node);
				ui.stackedWidget->setCurrentIndex(4);
			}
			catch (exception e)
			{
				ui.lblThongBaoMenuPage->setVisible(true);
			}
			
			
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
			try
			{
				Node node = this->service->CheckWord(ui.listWidget->currentItem()->text());
				this->setContentEditPage(node);
			}
			catch (exception e)
			{
				ui.lblThongBaoMenuPage->setVisible(true);
			}	
		}
		else
		{
			ui.listWidget->clear();
			QStringList valueNodes = this->service->treeMap->valueNodes.split(" ");
			ui.listWidget->addItems(valueNodes);
			ui.listWidget->setVisible(true);
			ui.lineEdit->setVisible(false);
			ui.lblThongBaoMenuPage->setVisible(false);
		}
		

	}

	if (ui.btnRadio4->isChecked())
	{
		ui.stackedWidget->setCurrentIndex(3);
		
		
		ui.lineEdit->setVisible(false);
		ui.listWidget->setVisible(false);
		ui.lblThongBaoAddPage->setVisible(false);
		ui.lblThongBaoMenuPage->setVisible(false);


	}
	if (ui.btnRadio5->isChecked())
	{
		//list page
		ui.stackedWidget->setCurrentIndex(2);

		ui.lblThongBaoListPage->setVisible(false);
		ui.lineEdit->setVisible(false);
		ui.listWidget->setVisible(false);
		ui.lblThongBaoMenuPage->setVisible(false);
		ui.textListPage->setPlainText(service->DisplayDictionary());


	}

}

void Source::on_btnBackListPage_clicked()
{
	ui.stackedWidget->setCurrentIndex(1);
	ui.listWidget->setVisible(false);
	ui.lineEdit->setVisible(false);
	ui.lblThongBaoMenuPage->setVisible(false);
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

	//Loi plain text bo di cac ky tu /r so voi text thong thuong.
	if (ui.lblMeanUpdatePage_2->text().compare(ui.editMeanUpdatePage->document()->toPlainText()) != 0)
	{
		this->service->UpdateWordByDetail(ui.editWordUpdatePage->text(), ui.editMeanUpdatePage->document()->toPlainText());
		
	}
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
	ui.lblThongBaoMenuPage->setVisible(false);
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
	QString word = ui.lblWordLv1Page->text();
	QChar* wordArray = word.begin();

	int missWordIndex = ui.lblMissWordIndexLv1Page->text().toInt();

	*(wordArray + missWordIndex) = ui.lineEditMissWordLv1Page->text().at(0);

	QString inputWord = QString(wordArray);
	ui.btnNextLv1Page->setEnabled(true);

	try
	{
		Node node = this->service->CheckWord(inputWord);
		this->service->PointUp();
		ui.txtMeanLv1Page->setText(node.detail);
		ui.btnSubmitLv1Page->setEnabled(false);
	}
	catch (exception e)
	{
		this->service->PointDown();
		ui.txtMeanLv1Page->setText("");
	}
	ui.lcdGradeNumber->display(this->service->point);
}

void Source::on_btnNextLv1Page_clicked()
{
	ui.btnNextLv1Page->setEnabled(false);
	ui.btnSubmitLv1Page->setEnabled(true);
	if (this->service->stage < 10)
	{
		ui.frContentLv1Page->deleteLater();
		ui.frContentLv1Page = new QFrame(ui.stackedWidget->widget(6));
		ui.frContentLv1Page->setGeometry(110, 90, 261, 101);
		ui.frContentLv1Page->setVisible(true);

		this->xIndex = 30;
		QStringList words = this->service->treeMap->valueNodes.split(" ");
		std::srand(time(NULL));
		this->wordIndex = rand() % (words.length() - 1);

		Node node = this->service->CheckWord(words.at(wordIndex));
		ui.lblWordLv1Page->setText(node.value);
		
		int missWordIndex = rand() % (node.value.length() - 2);
		QChar* wordArray = node.value.begin();
		for (int i = 0; i < node.value.length() - 2; i++)
		{
			QLineEdit* btn = new QLineEdit(ui.frContentLv1Page);
			btn->setGeometry(this->xIndex, 40, 20, 20);
			btn->setText(*(wordArray + i));
			btn->setVisible(true);
			btn->setEnabled(false);

			if (i == missWordIndex)
			{
				ui.lineEditMissWordLv1Page = btn;
				QString num = missWordIndex + 48;
				ui.lblMissWordIndexLv1Page->setText(num);
				btn->setText("");
				btn->setEnabled(true);
			}
			this->xIndex += 20;
		}
		this->service->StageUp();
		ui.lcdStageNumber->display(this->service->stage);
	}
	else
	{
		ui.stackedWidget->setCurrentIndex(7);
	}
	
	
}

void Source::on_btnExitLv1Page_clicked()
{
	this->service->SaveDataToFile();
	this->close();
}

void Source::on_btnStartLv2Page_clicked()
{
	ui.stackedWidget->setCurrentIndex(8);
	ui.lcdGradeNumber->display(0);
	ui.lcdStageNumber->display(1);
	this->service->stage = 0;
	this->service->point = 0;
	on_btnNextLv2Page_clicked();
}

void Source::on_btnSubmitLv2Page_clicked()
{
	QString word = ui.lblWordLv2Page->text();
	QChar* wordArray = word.begin();

	int missWordIndex = ui.lblMissWordIndexLv2Page->text().toInt();

	*(wordArray + missWordIndex) = ui.lineEditMissWordLv2Page->text().at(0);

	QString inputWord = QString(wordArray);
	ui.btnNextLv2Page->setEnabled(true);

	try
	{
		Node node = this->service->CheckWord(inputWord);
		
		if (node.detail.compare(ui.lblMeanWordLv2Page->text()) != 0)
		{
			this->service->PointDown();
			ui.btnSubmitLv2Page->setEnabled(true);
		}
		else
		{
			this->service->PointUp();
			ui.btnSubmitLv2Page->setEnabled(false);
		}
	}
	catch (exception e)
	{
		this->service->PointDown();
		ui.txtMeanLv1Page->setText("");
	}
	ui.lcdGradeNumberLv2Page->display(this->service->point);
}

void Source::on_btnNextLv2Page_clicked()
{
	ui.btnNextLv2Page->setEnabled(false);
	ui.btnSubmitLv2Page->setEnabled(true);
	if (this->service->stage < 10)
	{
		ui.frContentLv2Page->deleteLater();
		ui.frContentLv2Page = new QFrame(ui.stackedWidget->widget(8));
		ui.frContentLv2Page->setGeometry(110, 90, 261, 101);
		ui.frContentLv2Page->setVisible(true);

		this->xIndex = 30;
		QStringList words = this->service->treeMap->valueNodes.split(" ");
		std::srand(time(NULL));
		this->wordIndex = rand() % (words.length() - 1);

		Node node = this->service->CheckWord(words.at(wordIndex));

		ui.lblWordLv2Page->setText(node.value);
		ui.txtMeanLv2Page->setText(node.detail);
		ui.lblMeanWordLv2Page->setText(node.detail);

		int missWordIndex = rand() % (node.value.length() - 2);
		QChar* wordArray = node.value.begin();
		for (int i = 0; i < node.value.length() - 2; i++)
		{
			QLineEdit* btn = new QLineEdit(ui.frContentLv2Page);
			btn->setGeometry(this->xIndex, 40, 20, 20);
			btn->setText(*(wordArray + i));
			btn->setVisible(true);
			btn->setEnabled(false);

			if (i == missWordIndex)
			{
				ui.lineEditMissWordLv2Page = btn;
				QString num = missWordIndex + 48;
				ui.lblMissWordIndexLv2Page->setText(num);
				btn->setText("");
				btn->setEnabled(true);
			}
			this->xIndex += 20;
		}
		this->service->StageUp();
		ui.lcdStageNumberLv2Page->display(this->service->stage);
	}
	else
	{
		ui.stackedWidget->setCurrentIndex(9);
	}
}

void Source::on_btnExitLv2Page_clicked()
{
	this->service->SaveDataToFile();
	this->close();
}
