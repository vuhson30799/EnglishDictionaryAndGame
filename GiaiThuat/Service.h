#include "TreeMap.h"
#include <QFile>
class Service
{
public:
	const QString REGEX = "===\r\n";
	const QString REMOVE_REGEX = "\r\n";
	TreeMap* treeMap;
	int point;
	int stage;
	void GetDataFromFile();
	void SaveDataToFile();

	QString DisplayDictionary();
	Node CheckWord(QString value);
	void AddNewWord(Node& node);

	void UpdateWordByValue(QString oldVal, QString newVal);
	void UpdateWordByType(QString value, QString newType);
	void UpdateWordByPronunciation(QString value, QString pronounce);
	void UpdateWordByDetail(QString value, QString detail);

	void DeleteWord(QString word);

	void PointUp();
	void PointDown();

	void StageUp();
};

