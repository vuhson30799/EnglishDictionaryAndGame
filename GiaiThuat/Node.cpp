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
	return this->value + "\n\t"
		+ this->pronunciation + "\n\t"
		+ this->type + "\n\t"
		+ this->detail;
}

QString Node::toStringSaveFile()
{
	return this->value + this->pronunciation + this->type + this->detail;
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