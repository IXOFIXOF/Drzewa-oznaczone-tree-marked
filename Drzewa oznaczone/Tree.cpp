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
	Key = new int;
}