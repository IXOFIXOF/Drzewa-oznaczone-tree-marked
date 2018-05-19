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
CNode* CTreeBst::Search(int Key)
{
	return Search(Key, m_Head);
}
CNode* CTreeBst::Search(int Key, CNode* node)
{
	if (node != nullptr)
	{
		if (Key != *node->Key)
		{
			if (Key < *node->Key)
			{
				node =  Search(Key, node->LeftChild);
			}
			else
			{
				node =  Search(Key, node->RightChild);
			}
		}
	}
	return node;
}
CNode* CTreeBst::Min(CNode* node)
{
	if (node->LeftChild == nullptr)
	{
		return node;
	}
	else
	{
		return Min( node->LeftChild );
	}
}
CNode* CTreeBst::Min()
{
	return Min( m_Head );
}
CNode* CTreeBst::Max(CNode* node)
{
	if (node->RightChild == nullptr)
	{
		return node;
	}
	else
	{
		return Max(node->RightChild);
	}
}
void CTreeBst::Remove(int Key)
{
	Remove(Key, m_Head);
}
void CTreeBst::Remove(int Key, CNode* node)
{
	CNode* toDelete = Search(Key, node);
	CNode* toSwap = nullptr;
	if (toDelete->LeftChild == nullptr && toDelete->RightChild == nullptr)
	{
		if (toDelete->Parent->LeftChild == toDelete)
		{
			toDelete->Parent->LeftChild = nullptr;
		}
		else if (toDelete->Parent->RightChild == toDelete)
		{
			toDelete->Parent->RightChild = nullptr;
		}
		toDelete = nullptr;
		delete toDelete;
	}
	else if (toDelete->LeftChild != nullptr && toDelete->RightChild == nullptr)
	{
		toDelete->Parent->LeftChild = toDelete->LeftChild;
		toDelete->LeftChild->Parent = toDelete->Parent;
		toDelete = nullptr;
		delete toDelete;
	}
	else if (toDelete->LeftChild == nullptr && toDelete->RightChild != nullptr)
	{
		toDelete->Parent->RightChild = toDelete->RightChild;
		toDelete->RightChild->Parent = toDelete->Parent;
		toDelete = nullptr;
		delete toDelete;
	}
	else
	{
		toSwap = Min(toDelete->RightChild);


	}

}
CNode* CTreeBst::Max()
{
	return Max(m_Head);
}
CTreeBst::~CTreeBst()
{
}
