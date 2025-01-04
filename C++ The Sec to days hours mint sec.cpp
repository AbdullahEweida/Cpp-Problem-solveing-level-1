#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

struct strDuration
{
    int Days;
    int Hours;
    int Minutes;
    int Sec;
};


int ReadData(string Massege)
{
    int Data;
    do{
    cout<<Massege;
    cin>>Data;}while(Data<=0);
    return Data;
}

strDuration TaskDurationInSecond(strDuration SecTo,int Sec)
{
    const int Days =(60*60*24);
    const int Hours =(60*60);
    const int Minutes =(60);

    int Remainder = 0;
    SecTo.Days=floor(Sec/Days);
    Remainder=Sec%Days;
    SecTo.Hours=floor(Remainder/Hours);
    Remainder=Remainder % Hours;
    SecTo.Minutes=floor(Remainder/Minutes);
    Remainder=Remainder % Minutes;
    SecTo.Sec=floor(Remainder);
    return SecTo;
}

void PrintTheDurationFromSec(strDuration SecTo)
{
    cout<<"------------------------------------"<<endl;
    cout<<SecTo.Days;
    cout<<" : "<<SecTo.Hours;
    cout<<" : "<<SecTo.Minutes;
    cout<<" : "<<SecTo.Sec<<endl;
}

int main()
{
    strDuration SecTo;
    PrintTheDurationFromSec(TaskDurationInSecond(SecTo,ReadData("Enter No.Sec = ")));
    return 0;
}
