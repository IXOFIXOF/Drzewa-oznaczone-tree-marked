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
	virtual CNode* Search(int Key, CNode* node) = 0;
	virtual CNode* Search(int Key) = 0;
	void operator << (CNode* node);
protected:
	CNode* m_Head;
};


