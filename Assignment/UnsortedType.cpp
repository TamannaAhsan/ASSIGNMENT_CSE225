#include"UnsortedType.h"
#include <bits/stdc++.h>
using namespace std;

struct NodeType{
    ItemType info;
    NodeType* next;
};

UnsortedType::UnsortedType(){
	listData = NULL;
	length = 0;
}

bool UnsortedType::isFull(){
	try{
		NodeType* location  = new NodeType;
		delete location;
		return false;
	}
	catch(bad_alloc exception){
		return true;
	}
}

int UnsortedType::getLength(){
	return length;
}

void UnsortedType::makeEmpty(){
	NodeType* location;
	while(listData != NULL){
		location = listData;
		listData = listData->next;
		delete location;
	}
	length = 0;
}

void UnsortedType::putItem(ItemType item){
	NodeType* location = new NodeType;
	location->next = listData;
	location->info = item;
	listData = location;
	length++;
}

ItemType UnsortedType::getItem(ItemType &item, bool &found){
	NodeType* location ;
	location = listData;
	found = false;
	bool moreToSearch = (location != NULL);
	while(moreToSearch && !found){
		switch(item.compareTo(location->info)){
			case LESS :
			case GREATER : location = location->next;
			moreToSearch = location != NULL;
			break;
			default : found = true;
			item = location->info;
			break;
		}
	}
	return item;
}

void UnsortedType::deleteItem(ItemType item){
	NodeType* location = listData;
	NodeType* tempLocation;
    if(item.compareTo(listData->info) == EQUAL){
        tempLocation = location;
        listData = listData->next;
}
    else {
	while(item.compareTo(location->next->info)!= EQUAL)
		location = location->next;
        tempLocation = location->next;
        location->next = location->next->next;
}
delete tempLocation;
	length--;

}

void UnsortedType::resetList(){
	currentPos = NULL;
}
ItemType UnsortedType::getNextItem(){
	if(currentPos == NULL){
		currentPos = listData;
	}
	else
		currentPos = currentPos->next;
		return currentPos->info;
}

UnsortedType:: ~UnsortedType(){
	NodeType* tempPtr;
	while(listData != NULL){
		tempPtr = listData;
		listData = listData->next;
		delete tempPtr;
	}
}

