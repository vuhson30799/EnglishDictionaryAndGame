#include <iostream>
using namespace std;
struct Node
{
	Node* left = NULL;
	Node* right = NULL;
	string value;
	
};
struct TreeMap
{
	Node* root;
	int size = 0;

	TreeMap()
	{
		TreeMap::root = NULL;
	}

	void display(Node* root)
	{
		
		if (root->left != NULL)
		{
			display(root->left);
		}

		cout << root->value << endl;

		if (root->right != NULL)
		{
			display(root->right);
		}
	}

	Node* search(Node* node)
	{
		Node* current = this->root;
		while (current != NULL)
		{
			if ((*current).value._Equal(node->value)) 
			{
				return current;
			}
			if (node->value < (*current).value)
			{
				current = current->left;
			}
			else
			{
				current = current->right;
			}
		}
		throw exception("This node is not exist");
	}

	Node* deleteNode(Node* node)
	{
			Node* current = this->root;
			Node* parent = this->root;
			bool isNodeExist = false;
			while (current != NULL)
			{
				if (node->value < (*current).value)
				{
					parent = current;
					current = (current->left);
				}
				else if (node->value > (*current).value)
				{
					parent = current;
					current = (current)->right;
				}
				else
				{
					isNodeExist = true;
					break;
				}
			}

			if (isNodeExist)
			{
				if (current->left == NULL)
				{
					if (current == parent)
					{
						current = current->right;
					}
					else
					{
						if (parent->left->value._Equal(current->value))
						{
							parent->left = current->right;
						}
						else
						{
							parent->right = current->right;
						}
					}
					
				}
				else
				{
					Node* leftParentTreeNode = current;
					Node* leftTreeNode = current->left;
					while (leftTreeNode->right != NULL)
					{
						leftParentTreeNode = leftTreeNode;
						leftTreeNode = leftTreeNode->right;
					}

					if (current == parent)
					{
						parent->value = leftTreeNode->value;
						this->root = current;
					}
					else
					{
						if (parent->left->value._Equal(current->value))
						{
							parent->left->value = leftTreeNode->value;
						}
						else
						{
							parent->right->value = leftTreeNode->value;
						}
					}
					

					if (leftParentTreeNode->left == NULL)
					{
						leftParentTreeNode->right = NULL;
					}
					else
					{
						leftParentTreeNode->right = leftTreeNode->left;
					}
				}
				return current;
			}
			else
			{
				throw new exception("This node is not exist!!");
			}
	}
};

void add(TreeMap* MyTree, string value)
{
	if (MyTree->size == 0)
	{
		MyTree->root = new Node;
		MyTree->root->value = value;
		MyTree->size++;
		return;
	}

	Node* node = new Node;
	node->value = value;
	Node* current = MyTree->root;
	Node* parent = MyTree->root;
	while (current != NULL)
	{
		if (node->value <= (*current).value)
		{
			parent = current;
			current = (current->left);
		}
		else
		{
			parent = current;
			current = (current)->right;
		}
	}
	if (node->value < parent->value)
	{
		parent->left = node;
	}
	else
	{
		parent->right = node;
	}
	return;
}



int main()
{
	TreeMap* MyTree = new TreeMap;
	add(MyTree,"home");
	add(MyTree,"cat");
	add(MyTree, "map");
	add(MyTree, "define");

	MyTree->display(MyTree->root);

	Node* node = new Node;
	node->value = "home";
	try
	{
		Node* FoundNode = MyTree->search(node);
		cout << "Node is found!!" << endl;
		cout << FoundNode->value << endl;

		Node* deletedNode = MyTree->deleteNode(FoundNode);

		cout << "Node is deleted" << endl;
		cout << deletedNode->value << endl;

		cout << "My tree" << endl;
		MyTree->display(MyTree->root);
	}
	catch (const std::exception e)
	{
		cout << e.what();
	}
	
}