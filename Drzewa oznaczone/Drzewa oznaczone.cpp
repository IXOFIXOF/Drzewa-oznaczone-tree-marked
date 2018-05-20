// Drzewa oznaczone.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Tree.h"
#include "TreeBst.h"
void ListTree();
void Option();
void GetData(int& Key);
int main()
{
	CTree* oTree = nullptr;
	ListTree();
	cout << "Wybierz rodzaj drzewa: ";
	int n;
	int key = 0;
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
	cout << "Wybierz rodzaj operacji: \n";
	do
	{
		Option();
		cin >> n;
		switch (n)
		{
		case 1:
		{
			GetData(key);
			oTree->InsertKey(key);
			break;
		}
		case 2:
		{
			GetData(key);
			oTree->operator<<(oTree->Search(key));
			break;
		}
		case 3:
		{
			oTree->operator<<(oTree->Min());
			break;
		}
		case 4:
		{
			oTree->operator<<(oTree->Max());
			break;
		}
		case 5:
		{
			GetData(key);
			oTree->Remove(key);
			break;
		}
		case 6:
		{
			oTree->PostOrder();
			break;
		}
		}
	} while ( n != 7 );
	
	return 0;
}
void ListTree()
{
	cout << "1. Drzewo BST\n";
}
void Option()
{
	cout << "1. Dodaj element: \n";
	cout << "2. Wyszukaj element\n";
	cout << "3. Minimum\n";
	cout << "4. Maximum\n";
	cout << "5. Usun element\n";
	cout << "6. PostOrder\n";
	cout << "7. Zakoncz prace\n";

}
void GetData(int& Key)
{
	cout << "Podaj liczbe: ";
	cin >> Key;
}