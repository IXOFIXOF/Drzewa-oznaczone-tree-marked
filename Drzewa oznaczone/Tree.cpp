#include "stdafx.h"
#include "Tree.h"


CTree::CTree()
{
}


CTree::~CTree()
{
}
CNode::CNode()
{
	LeftChild = nullptr;
	RightChild = nullptr;
	Parent = nullptr;
	Key = 0;
}
void CTree::operator << ( CNode* node)
{
	if (node == nullptr)
	{
		cout << "Nie znaleziono klucza\n";
	}
	else
	{
		cout << node->Key << endl;
	}
}