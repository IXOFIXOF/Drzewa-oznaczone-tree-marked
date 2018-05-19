#pragma once
#include "Tree.h"

class CTreeBst : public CTree
{
public:
	CTreeBst();
	~CTreeBst();


	void   InsertKey(int Key);
	CNode* Search(int Key);
	CNode* Min();
	CNode* Max();
	void Remove(int Key);

private:
	CNode* InsertKey(int Key, CNode* node);
	CNode* Search(int Key, CNode* node);
	CNode* Min(CNode* node);
	CNode* Max(CNode* node);
	void Remove(int Key, CNode* node);
};

