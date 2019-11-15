#include "Node.h"
class TreeMap
{
public:	Node root;
		int size = 0;
		QString treeMapInfo;
		QString valueNodes;
		QString treeMapInfoFile;
		QString toString()
		{
			this->treeMapInfo = "";
			this->valueNodes = "";
			this->treeMapInfoFile = "";
			display(root);
			return this->treeMapInfo;
		}

		TreeMap(){}
		void display(Node& node)
	{

		if (node.left != NULL)
		{
			display(*node.left);
		}
		
		this->treeMapInfoFile += node.toStringSaveFile();
		this->treeMapInfo += node.toString();
		this->valueNodes += node.value + " ";

		if (node.right != NULL)
		{
			display(*node.right);
		}
	}

		void add(Node& node)
	{
		if (this->size == 0)
		{
			this->root = node;
			this->size++;
			return;
		}

		Node* current = &this->root;
		Node* parent = &this->root;
		
		while (current != NULL)
		{
			if (node < *current)
			{
				parent = current;
				current = (*current).left;
			}
			else
			{
				parent = current;
				current = (*current).right;
			}
		}
		if (node < *parent)
		{
			parent->left = new Node();
			*parent->left = node;
		}
		else
		{
			parent->right = new Node();
			*parent->right = node;
		}
		this->size++;
	}

		Node search(Node node)
		{
		Node* current = &this->root;
		while (current != NULL)
		{
			if (*current == node)
			{
				return *current;
			}
			if (node < *current)
			{
				current = (*current).left;
			}
			else
			{
				current = (*current).right;
			}
		}
		throw exception("This node is not exist");
		}

		void deleteNode(Node& node)
		{
			if (this->size == 0)
			{
				throw new exception("there is nothing to remove!!");
			}
			else
			{
				Node* current = &this->root;
				Node* parent = &this->root;
				bool isNodeExist = false;
				while (current != NULL)
				{
					if (node < *current)
					{
						parent = current;
						current = (*current).left;
					}
					else if (node > *current)
					{
						parent = current;
						current = (*current).right;
					}
					else
					{
						isNodeExist = true;
						break;
					}
				}

				if (isNodeExist)
				{
					if ((*current).left == NULL)
					{
						//node tim dc la root
						if (current == parent)
						{
							current = (*current).right;
							this->size--;
						}
						else
						{
							if ((*parent).left == current)
							{
								(*parent).left = (*current).right;
								current = NULL;
								this->size--;
							}
							else
							{
								(*parent).right = (*current).right;
								current = NULL;
								this->size--;
							}
						}

					}
					else
					{
						Node* leftParentTreeNode = current;
						Node* leftTreeNode = (*current).left;
						while ((*leftTreeNode).right != NULL)
						{
							leftParentTreeNode = leftTreeNode;
							leftTreeNode = (*leftTreeNode).right;
						}

						this->editNode((*current), (*leftTreeNode));

						(*leftParentTreeNode).right = NULL;
						this->size--;
					}
				}
				else
				{
					throw new exception("This node is not exist!!");
				}
			}
		}

		int getSize() 
		{
		return this->size;
		}

		Node& searchEditNode(QString value)
		{
			Node* current = &this->root;
			while (current != NULL)
			{
				if (value.compare((*current).value) == 0)
				{
					return *current;
				}
				if (value.compare((*current).value) < 0)
				{
					current = (*current).left;
				}
				else
				{
					current = (*current).right;
				}
			}
			throw exception("This node is not exist");
		}

		void editNodeValue(QString oldVal, QString newVal)
		{
			//luu tru bien ngoai de xoa bien trong cay, tao gia tri moi cho bien ngoai va add lai vao cay
			Node node = this->search(oldVal);
			deleteNode(node);
			node.left = NULL;
			node.right = NULL;
			node.value = newVal;
			add(node);
		}

		void editNodeType(QString value, QString newType)
		{
			//tao bien tham chieu toi node tren cay, sua node
			Node& node = this->searchEditNode(value);
			node.type = newType;
		}

		void editNodePronun(QString value, QString newPronun)
		{
			//tao bien tham chieu toi node tren cay, sua node
			Node& node = this->searchEditNode(value);
			node.pronunciation = newPronun;
		}

		void editNodeDetail(QString value, QString newDetail)
		{
			//tao bien tham chieu toi node tren cay, sua node
			Node& node = this->searchEditNode(value);
			node.detail = newDetail;
		}

		void editNode(Node& node1, Node& node2)
		{
			node1.value = node2.value;
			node1.type = node2.type;
			node1.pronunciation = node2.pronunciation;
			node1.detail = node2.detail;
		}
};

