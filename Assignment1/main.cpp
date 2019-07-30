#include "Cricketer.h"
#include "Cricketer.cpp"
#include"UnsortedType.h"
#include"UnsortedType.cpp"
#include <bits/stdc++.h>
using namespace std;

int main(){

    ifstream input("Player.txt");
    string temp;
    int id;
    string name;

    int arr15[SIZE]={22, 35, 41, 8, 73, 63, 46, 87, 35, 72};
    int arr14[SIZE]={12, 30, 4, 78, 37, 6, 74, 80, 15, 62};
    int arr13[SIZE]={14, 3, 45, 7, 34, 56, 7, 100, 18, 52};
    int arr12[SIZE]={27, 36, 42, 30, 20, 5, 4, 20, 29, 21};
    int arr11[SIZE]={33, 43, 14, 3, 45, 10, 19, 12, 57, 27};
    int arr10[SIZE]={25, 4, 27, 59, 19, 12, 28, 27, 32, 23};
    int arr9[SIZE]={5, 30, 2, 7, 34, 56, 66, 59, 3, 29};
    int arr8[SIZE]={27, 23, 43, 53, 79, 100, 18, 52, 65, 67};
    int arr7[SIZE]={25, 40, 24, 52, 99, 102, 12, 42, 35, 27};
    int arr6[SIZE]={52, 42, 2, 9, 26, 27, 61, 43, 32, 25};
    int arr5[SIZE]={5, 4, 20, 29, 21, 27, 36, 42, 30, 20};
    int arr4[SIZE]={56, 50, 0, 4, 2, 0, 49, 61, 87, 78};
    int arr3[SIZE]={13, 76, 35, 17, 36, 12, 0, 88, 56, 74};
    int arr2[SIZE]={2, 5, 45, 10, 46, 0, 56, 78, 65, 70};
    int arr1[SIZE]={34, 44, 2, 20, 52, 62, 21, 44, 49, 51};


    Cricketer player15(15, "Sabic Islam", arr15);
    Cricketer player14(14, "Ifty Ali", arr14);
    Cricketer player13(13, "Zariff Ali", arr13);
    Cricketer player12(12, "Shabir Khan", arr12);
    Cricketer player11(11, "Rashed Khan", arr11);
    Cricketer player10(10, "Imram Karim", arr10);
    Cricketer player9(9, "Tahmid Abrar", arr9);
    Cricketer player8(8, "Kalyan Roy", arr8);
    Cricketer player7(7, "Redwanul Karim", arr7);
    Cricketer player6(6, "Sazid Rahman", arr6);
    Cricketer player5(5, "Rubel Rahman", arr5);
    Cricketer player4(4, "Farid Hossain", arr4);
    Cricketer player3(3, "Salam Mahbub", arr3);
    Cricketer player2(2, "Kamal Hossain", arr2);
    Cricketer player1(1, "Mahfuzur Rahman", arr1);

    UnsortedType<Cricketer>list;

    list.InsertItem(player15);
    list.InsertItem(player14);
    list.InsertItem(player13);
    list.InsertItem(player12);
    list.InsertItem(player11);
    list.InsertItem(player10);
    list.InsertItem(player9);
    list.InsertItem(player8);
    list.InsertItem(player7);
    list.InsertItem(player6);
    list.InsertItem(player5);
    list.InsertItem(player4);
    list.InsertItem(player3);
    list.InsertItem(player2);
    list.InsertItem(player1);

    ofstream output("Player-Summary.txt");

    while(list.LengthIs()>0){
        Cricketer temp;
        list.GetNextItem(temp);
        output<<"ID: "<<temp.id<<endl;
        output<<"Name: "<<temp.name<<endl;
        output<<"Average: "<<temp.findAverage()<<endl;
        output<<"Total: "<<temp.findTotal()<<endl;
        output<<"Maximum: "<<temp.findMax()<<endl;
        output<<"Minimum: "<<temp.findMin()<<endl;
        output<<endl;
    }
    output.close();
}
