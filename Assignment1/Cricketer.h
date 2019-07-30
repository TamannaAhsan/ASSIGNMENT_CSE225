#ifndef CRICKETER_H_INCLUDED
#define CRICKETER_H_INCLUDED
#define SIZE 10
#include<iostream>
using namespace std;

class Cricketer{
private:
    int id;
    string name;
    int runArray[SIZE] ;

public:
    Cricketer* next;
    Cricketer();
    Cricketer(int id, string name, int runArray[]);
    int findTotal();
    float findAverage();
    int findMax();
    int findMin();
};

#endif // CRICKETER_H_INCLUDED
