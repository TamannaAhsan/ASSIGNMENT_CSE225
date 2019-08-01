#include "ItemType.h"
#include <vector>
#include<bits/stdc++.h>
using namespace std;

ItemType::ItemType(){

}

string ItemType::getName(){
    return name;
}

ItemType::ItemType(int _id, string _name, vector<int>arr){
    id= _id;
    name= _name;
    for(int i=0; i<SIZE; i++){
        runArray[i]=arr[i];
    }
}

int ItemType::getId(){
	return this->id;
}

int ItemType::findTotal(){
    int sum=0;
    for(int i=0; i<SIZE; i++){
        sum=sum+runArray[i];
    }
    return sum;
}

float ItemType::findAverage(){
   return (float)findTotal()/SIZE;
}

int ItemType::findMax(){
    int maximum=runArray[0];
    for(int i=0; i<SIZE; i++){
        if(runArray[i]>maximum){
            maximum=runArray[i];
        }
    }
    return maximum;
}

int ItemType::findMin(){
    int minimum=runArray[0];
    for(int i=0; i<SIZE; i++){
        if(runArray[i]<minimum){
            minimum=runArray[i];
        }
    }
    return minimum;
}

relation ItemType::compareTo(ItemType item){
    if(this->id < item.getId())
        return 	LESS;
    else if(this->id > item.getId())
        return GREATER;
    else return EQUAL;
}

