#include "ItemType.h"
#include "ItemType.cpp"
#include"UnsortedType.h"
#include"UnsortedType.cpp"
#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream input("Player.txt");
    ofstream output("Player-Summary.txt");
    string temp;
    int id;
    string name;
    int x;
    cin>>x;

    UnsortedType list1;
    for(int i=0; i<x; i++){
        input>>temp;
        input>>id;
        input>>temp;
        getline(input, name);
        input>>temp;
        string r;
        getline(input, r);
        vector<int>v;

        stringstream strings(r);
        for(int value; strings>>value;){
            v.push_back(value);
            if(strings.peek()==',' || strings.peek()== ' ')
                strings.ignore();
        }

        ItemType temp(id, name, v);
        list1.putItem(temp);

        output<<"ID: "<<temp.getId()<<endl;
        output<<"Name: "<<temp.getName()<<endl;
        output<<"Total Run: "<<temp.findTotal()<<endl;
        output<<"Average Run: "<<temp.findAverage()<<endl;
        output<<"Maximum Run: "<<temp.findMax()<<endl;
        output<<"Minimum Run: "<<temp.findMin()<<endl;
        output<<endl;
    }
    output.close();
    input.close();
}
