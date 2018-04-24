// Drzewa oznaczone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tree.h"
#include "TreeBst.h"
void Menu();
void Option();
int main()
{
	CTree* oTree = nullptr;
	Menu();
	cout << "Wybierz rodzaj drzewa: ";
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		oTree = new CTreeBst();
	}
	default:
		break;
	}
	Option();
	cout << "Wybierz rodzaj operacji: ";
	cin >> n;
	switch (n)
	{
	case 1:
	{
		oTree->InsertKey(4);
		oTree->InsertKey(5);
		oTree->InsertKey(10);
		oTree->InsertKey(3);
		oTree->InsertKey(6);
	}
	}
	return 0;
}
void Menu()
{
	cout << "1. Drzewo BST\n";
}
void Option()
{
	cout << "1. Dodaj element: \n";
}
