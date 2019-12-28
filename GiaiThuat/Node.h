#include<QTextStream>
#include <iostream>
using namespace std;
class Node
{
public:	Node* left;
		Node* right;
		QString value;
		QString detail;
		QString pronunciation;
		QString type;
		
		Node();
		
		Node(QString);

		Node(QString , QString, QString, QString);

		QString toString();

		QString toStringSaveFile();

		bool operator==(Node);

		bool operator<(Node);

		bool operator>(Node);
};

