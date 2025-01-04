#include <iostream>
#include <cmath>
#include "string"
using namespace std;


int ReadTheNumberOfSubject(int &NumberOfSubject)
{
    do
    {
        cout<<"Enter the number of subject 1 from 100 : ";
        cin>>NumberOfSubject;
    }
    while(NumberOfSubject<1||NumberOfSubject>100);
    return NumberOfSubject;
}

void ReadTheMarks(float NumberOfSubject,float Arr1[100])
{
    cout<<"_________________________________________"<<endl;
    for (int i = 0; i <NumberOfSubject; i++)
    {
        cout<<"Enter the mark in subject "<<i+1<<" : ";
        cin>>Arr1[i];
    }
}

float CalculatTheAverage(float NumberOfSubject ,float Arr1[100])
{
    cout<<"_________________________________________"<<endl;
    float Sum =0;
    for (int i = 0; i < NumberOfSubject ; i++)
    {
        Sum+=Arr1[i];
    }
    float Average=Sum/NumberOfSubject;
    cout<<"The Average is : "<<Average<<endl;
    return Average;
}

string CheckTheInfoOfMark(float CalculatTheAverage)
{
    
    if (CalculatTheAverage>=50)
    {
        return "You are pass \n";
    }
    else
    {
        return "You are fail \n";
    }
}
int main()
{
    int NumberOfSubject;
    float Arr1[100];
    ReadTheNumberOfSubject(NumberOfSubject);
    ReadTheMarks(NumberOfSubject,Arr1);
    cout<< CheckTheInfoOfMark(CalculatTheAverage(NumberOfSubject,Arr1));
    return 0;
}
