#include "stdafx.h"
#include "TreeBst.h"

CTreeBst::CTreeBst()
{
	m_Head = nullptr;
}
CNode* CTreeBst::InsertKey(int Key, CNode* node)
{
	if (node == nullptr)
	{
		node = new CNode;
		*node->Key = Key;
	}
	else
	{
		if (Key < *node->Key)
		{
			node->LeftChild = InsertKey(Key, node->LeftChild);
			node->LeftChild->Parent = node;
		}
		else
		{
			node->RightChild = InsertKey(Key, node->RightChild);
			node->RightChild->Parent = node;
		}
	}
	return node;
}
void CTreeBst::InsertKey(int Key)
{
	if (m_Head == nullptr)
	{
		m_Head = new CNode();
		*m_Head->Key = Key;
	}
	else
	{
		InsertKey(Key, m_Head);
	}
	
}
CTreeBst::~CTreeBst()
{
}
