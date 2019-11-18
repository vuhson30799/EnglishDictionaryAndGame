#include "TreeMap.h"
#include <QTextStream>
#include <QFile>
class Service
{
public:
	const QString REGEX = "===\r\n";
	TreeMap* treeMap;
	int point;
	int stage;
	void GetDataFromFile()
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
					node->value = line;
					indexLine++;
					break;
				case 2: 
					node->type = line;
					indexLine++;
					break;
				case 3:
					node->pronunciation = line;
					indexLine++;
					break;
				default:
					node->detail.append(line);
					//node->detail.append("\n");
					break;
				}
				delete[] temp;
				temp = new char[255];
				source.readLine(temp, 255);
				line = temp;
				
			} 
			this->treeMap->add(*node);
		}
		DisplayDictionary();
		source.close();
	}

	void SaveDataToFile()
	{
		QFile source("Text.txt");
		if (!source.open(QIODevice::Append))
		{
			throw new exception("Can't open this file!!");
		}
		source.reset();
		source.write(this->treeMap->treeMapInfoFile.toUtf8());
		source.close();
	}

	QString DisplayDictionary()
	{
		return this->treeMap->toString();
	}

	Node CheckWord(QString value)
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

	void AddNewWord(Node& node)
	{
		this->treeMap->add(node);
	}

	void DisplayWordInfo(QString value)
	{	
	}

	void UpdateWordByValue(QString oldVal,QString newVal)
	{
		this->treeMap->editNodeValue(oldVal, newVal);
	}

	void UpdateWordByType(QString value,QString newType)
	{
		this->treeMap->editNodeType(value, newType);
	}

	void UpdateWordByPronunciation(QString value,QString pronounce)
	{
		this->treeMap->editNodePronun(value, pronounce);
	}

	void UpdateWordByDetail(QString value,QString detail)
	{
		this->treeMap->editNodeDetail(value, detail);
	}

	void DeleteWord(QString word)
	{
		Node node = CheckWord(word);
		this->treeMap->deleteNode(node);
	}

	void PointUp()
	{
		this->point += 1000;
	}

	void PointDown()
	{
		if (this->point != 0)
		{
			this->point -= 500;
		}
	}

	void StageUp()
	{
		this->stage++;
	}
};

