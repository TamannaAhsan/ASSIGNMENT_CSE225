#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include<bits/stdc++.h>
#include<vector>
using namespace std;

enum relation {LESS , GREATER , EQUAL};
const int SIZE =10;

class ItemType {

public:
    ItemType();
    ItemType(int _id, string _name, vector<int>arr);
    int getId();
    string getName();
	relation compareTo(ItemType item);
	int findTotal();
	float findAverage();
	int findMax();
	int findMin();

private:
	int id;
	string name;
	int runArray[SIZE];
};

#endif // ITEMTYPE_H_INCLUDED
