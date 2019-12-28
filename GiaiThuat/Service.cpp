#include "Service.h"

void Service::GetDataFromFile()
{
	QFile source("WordSource.txt");

	if (!source.open(QIODevice::ReadOnly))
	{
		throw new exception("Can't open this file!!");
	}
	char* temp = new char[255];
	this->treeMap = new TreeMap();
	QString line;
	Node* node;
	int indexLine = 1;

	while (source.isReadable())
	{
		indexLine = 1;
		node = new Node();
		source.readLine(temp, 255);
		line = temp;
		if (line.isEmpty())
		{
			break;
		}
		while (!(REGEX.compare(line) == 0))
		{
			switch (indexLine)
			{
			case 1:
				line.remove(REMOVE_REGEX);
				node->value = line;
				indexLine++;
				break;
			case 2:
				line.remove(REMOVE_REGEX);
				node->type = line;
				indexLine++;
				break;
			case 3:
				line.remove(REMOVE_REGEX);
				node->pronunciation = line;
				indexLine++;
				break;
			default:
				node->detail.append(line);
				break;
			}
			delete[] temp;
			temp = new char[255];
			source.readLine(temp, 255);
			line = temp;

		}
		node->detail.remove(node->detail.length() - 2, 2);
		this->treeMap->add(*node);
	}
	QString dictionary = DisplayDictionary();
	source.close();
}

void Service::SaveDataToFile()
{
	QString dictionary = DisplayDictionary();
	QFile source("WordSource.txt");
	source.remove();
	if (!source.open(QIODevice::NewOnly))
	{
		throw new exception("Can't open this file!!");
	}
	source.write(this->treeMap->treeMapInfoFile.toUtf8());
	source.close();
}

QString Service::DisplayDictionary()
{
	return this->treeMap->toString();
}

Node Service::CheckWord(QString value)
{
	try
	{
		Node searchNode(value);
		Node node = this->treeMap->search(searchNode);
		return node;
	}
	catch (exception e)
	{
		throw e;
	}
}

void Service::AddNewWord(Node& node)
{
	this->treeMap->add(node);
}

void Service::UpdateWordByValue(QString oldVal, QString newVal)
{
	this->treeMap->editNodeValue(oldVal, newVal);
}

void Service::UpdateWordByType(QString value, QString newType)
{
	this->treeMap->editNodeType(value, newType);
}

void Service::UpdateWordByPronunciation(QString value, QString pronounce)
{
	this->treeMap->editNodePronun(value, pronounce);
}

void Service::UpdateWordByDetail(QString value, QString detail)
{
	this->treeMap->editNodeDetail(value, detail);
}

void Service::DeleteWord(QString word)
{
	Node node = CheckWord(word);
	this->treeMap->deleteNode(node);
}

void Service::PointUp()
{
	this->point += 1000;
}

void Service::PointDown()
{
	if (this->point != 0)
	{
		this->point -= 500;
	}
}

void Service::StageUp()
{
	this->stage++;
}