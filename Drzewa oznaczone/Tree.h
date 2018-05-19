#pragma once

class CNode
{
public:
	CNode();

	CNode* Parent;
	CNode* LeftChild;
	CNode* RightChild;
	int Key;
};

class CTree
{
public:
	CTree();
	~CTree();

	virtual void InsertKey(int Key) = 0;
	virtual CNode* Search(int Key) = 0;
	virtual CNode* Min() = 0;
	virtual CNode* Max() = 0;
	virtual void  Remove(int Key) = 0;
	void operator << (CNode* node);

protected:
	virtual CNode* InsertKey(int Key, CNode* node) = 0;
	virtual CNode* Search(int Key, CNode* node) = 0;
	virtual CNode* Min(CNode * node) = 0;
	virtual CNode* Max(CNode* node) = 0;
	virtual void Remove(int Key, CNode* node) = 0;
	CNode* m_Head;
};


