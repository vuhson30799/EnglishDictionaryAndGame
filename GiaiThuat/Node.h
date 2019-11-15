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
		
		Node ()
		{
			this->left = NULL;
			this->right = NULL;
		}
		Node(QString value)
		{
			this->left = NULL;
			this->right = NULL;
			this->value = value;
		}
		Node(QString value, QString pronunciation,QString type,QString detail)
		{
			this->left = NULL;
			this->right = NULL;
			this->value = value;
			this->pronunciation = pronunciation;
			this->type = type;
			this->detail = detail;
		}
		QString toString() 
		{
			return this->value + "\n\t"
				+ this->pronunciation + "\n\t"
				+ this->type + "\n\t"
				+ this->detail;
		}
		QString toStringSaveFile()
		{
			return this->value + this->pronunciation + this->type + this->detail;
		}
		bool operator==(Node node)
		{
			return this->value.compare(node.value) == 0;
		}

		bool operator<(Node node)
		{
			return this->value.compare(node.value) < 0;
		}

		bool operator>(Node node)
		{
			return this->value.compare(node.value) > 0;
		}
};

