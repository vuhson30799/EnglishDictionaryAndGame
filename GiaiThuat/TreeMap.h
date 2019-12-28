#include "Node.h"
class TreeMap
{
public:	Node root;
		int size = 0;
		QString treeMapInfo;
		QString valueNodes;
		QString treeMapInfoFile;

		QString toString();

		TreeMap();
		void display(Node&);

		void add(Node&);

		Node search(Node);

		void deleteNode(Node&);

		int getSize();

		Node& searchEditNode(QString);

		void editNodeValue(QString, QString);
		void editNodeType(QString, QString);
		void editNodePronun(QString, QString);
		void editNodeDetail(QString, QString);
		void editNode(Node&, Node&);
};

