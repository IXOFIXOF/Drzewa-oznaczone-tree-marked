#pragma once
#include "Tree.h"

class CTreeBst : public CTree
{
public:
	CTreeBst();
	~CTreeBst();

	CNode* InsertKey(int Key, CNode* node );
	void InsertKey(int Key);

};

