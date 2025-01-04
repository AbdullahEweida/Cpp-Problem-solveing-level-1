#include <iostream>
#include <cmath>
#include "string"
using namespace std;

int ReadTheNumber()
{
    int Number;
    cout<<"Enter The number = ";
    cin>>Number;
    return Number;
}

float TheHalfNumber(int Number)
{
    return (float)Number/2.0;
}

void PrintTheResult(int Number)
{
    string TheResult = "The half of " + to_string(Number)  +" is : "+to_string(TheHalfNumber(Number));
    cout<<TheResult<<endl;
}

int main()
{
    PrintTheResult(ReadTheNumber());
    return 0;
}
