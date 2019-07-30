#include"UnsortedType.h"
#include<iostream>
using namespace std;

template<class ItemType>
UnsortedType<ItemType>::UnsortedType(){
    Length=0;
    ListData=NULL;
    CurrentPos=NULL;
}

template<class ItemType>
int UnsortedType<ItemType>::LengthIs(){
    return Length;
}

template<class ItemType>
bool UnsortedType<ItemType>::IsFull(){
    NodeType *location;
    try{
        location=new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}

template<class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){
    NodeType *location;
    location=new NodeType;
    location->info=item;
    location->next=ListData;
    ListData=location;
    Length++;

}

template<class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found){
    NodeType *location=ListData;
    bool moreToSearch =(location != NULL);
    found = false;
    while(moreToSearch && !found){
        if(item==location->info)
            found=true;

    else{
        location=location->next;
        moreToSearch=(location != NULL);
    }

}

}

template<class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    NodeType *tempPtr;
    while(ListData != NULL){
        tempPtr=ListData;
        ListData=ListData->next;
        delete tempPtr;
    }
    Length=0;
}

template<class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
    MakeEmpty();
}

template<class ItemType>
void UnsortedType<ItemType>::ResetList(){
    CurrentPos=NULL;
}

template<class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item){
   if(CurrentPos==NULL)
    CurrentPos=ListData;
   else
    CurrentPos=CurrentPos->next;
   item=CurrentPos->info;
}



















