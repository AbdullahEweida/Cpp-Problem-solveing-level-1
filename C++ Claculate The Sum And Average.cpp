#include <iostream>
#include <cmath>
#include "string"
using namespace std;

void ReadTheLengthOf_Array (int &length,float Arr1[100])
{
    cout<<"Please Enter The Length of Array from 1:100 : ";
    cin>> length;
    for (short int i = 0; i <= length-1; i++)
    {
        cout<<"Enter The Element "<<i+1<<" : ";
        cin>>Arr1[i];
    }
}

void PrintArrayData(int length, float Arr1[100])
{
    cout<<"________________________________"<<endl;
    for (short int i = 0; i <= length-1 ; i++)
    {
        cout<<"The Element {"<<i+1<<"} is "<<Arr1[i]<<endl;
    }
    cout<<"________________________________"<<endl;
}

float CalculateArraySum (int length, float Arr1[100])
{
    float Sum = 0;
    for (int i = 0; i <= length-1; i++)
    {
        Sum=Sum+Arr1[i];
    }
    return Sum;
}

int main ()
{
    int length;
    float Arr1[100];
    ReadTheLengthOf_Array(length,Arr1);
    PrintArrayData(length,  Arr1);
    float Sum=CalculateArraySum (length, Arr1);
    cout<<"________________________________"<<endl;
    cout<<"The Sum = "<<Sum<<endl;
    cout<<"The Average = "<<Sum/length<<endl;
}
