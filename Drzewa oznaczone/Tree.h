#pragma once

class CNode
{
public:
	CNode();

	CNode* Parent;
	CNode* LeftChild;
	CNode* RightChild;
	int* Key;
};

class CTree
{
public:
	CTree();
	~CTree();
	virtual CNode* InsertKey(int Key, CNode* node) = 0;
	virtual void InsertKey(int Key) = 0;
protected:
	CNode* m_Head;
};


