#pragma once
#include "Tree.h"

class CTreeBst : public CTree
{
public:
	CTreeBst();
	~CTreeBst();


	void InsertKey(int Key);
	CNode* Search(int Key);
private:
	CNode* InsertKey(int Key, CNode* node);
	CNode* Search(int Key, CNode* node);
};

