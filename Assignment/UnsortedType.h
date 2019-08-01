#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

#include "ItemType.h"
struct NodeType;
class UnsortedType {
	private :
	NodeType *listData;
	int length;
	NodeType *currentPos;

	public:
	UnsortedType();
	~UnsortedType();
	void makeEmpty();
	bool isFull();
	int getLength();
	ItemType getItem(ItemType& item, bool& found);
	void putItem(ItemType item);
	void deleteItem(ItemType item);
	void resetList();
	ItemType getNextItem();

};


#endif // UNSORTEDTYPE_H_INCLUDED
