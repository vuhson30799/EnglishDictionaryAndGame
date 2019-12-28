#include "Node.h"

Node::Node()
{
	this->left = NULL;
	this->right = NULL;
}

Node::Node(QString value)
{
	this->left = NULL;
	this->right = NULL;
	this->value = value;
}

Node::Node(QString value, QString pronunciation, QString type, QString detail)
{
	this->left = NULL;
	this->right = NULL;
	this->value = value;
	this->pronunciation = pronunciation;
	this->type = type;
	this->detail = detail;
}

QString Node::toString()
{
	return this->value + "\n"
		+ this->pronunciation + "\n"
		+ this->type + "\n"
		+ this->detail + "\n";
}

QString Node::toStringSaveFile()
{
	return this->value + "\r\n" + this->pronunciation + "\r\n" + this->type + "\r\n" + this->detail + "\r\n";
}

bool Node::operator==(Node node)
{
	return this->value.compare(node.value) == 0;
}

bool Node::operator<(Node node)
{
	return this->value.compare(node.value) < 0;
}

bool Node::operator>(Node node)
{
	return this->value.compare(node.value) > 0;
}