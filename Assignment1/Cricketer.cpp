#include "Cricketer.h"

Cricketer::Cricketer(){

}

Cricketer::Cricketer(int i, string n, int arr[]){
    id=i;
    name=n;
    for(int i=0; i<SIZE; i++){
        runArray[i] = arr[i];
    }
}

int Cricketer::findTotal(){
    int sum=0;
    for(int i=0; i<SIZE; i++){
        sum=sum+runArray[i];
    }
    return sum;
}

float Cricketer::findAverage(){
   return (float)findTotal()/SIZE;
}

int Cricketer::findMax(){
    int maximum=runArray[0];
    for(int i=0; i<SIZE; i++){
        if(runArray[i]>maximum){
            maximum=runArray[i];
        }
    }
    return maximum;
}

int Cricketer::findMin(){
    int minimum=runArray[0];
    for(int i=0; i<SIZE; i++){
        if(runArray[i]<minimum){
            minimum=runArray[i];
        }
    }
    return minimum;
}

