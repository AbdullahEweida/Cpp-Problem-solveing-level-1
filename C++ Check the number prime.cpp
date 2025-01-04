#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

enum ThePrimeOrNot{Prime,NOtPrime};

float ReadTheNumber()
{
    float Number=0;
    do
    {
        cout<<"Enter The Positive Number : ";
        cin>>Number;
    }while(Number<=0);
    return Number;
}

ThePrimeOrNot CheckTheNumberPrime(int Number)
{
    int M=round(Number/2);
    for (int i = 2; i <=M; i++)
    {
        if (Number % i==0)
        {
            return ThePrimeOrNot::NOtPrime;
        }   
    }
    return ThePrimeOrNot::Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckTheNumberPrime(Number))
    {
    case ThePrimeOrNot::Prime:
        cout<<"The Number Is Prime "<<endl;
        break;
    case ThePrimeOrNot::NOtPrime:
        cout<<"The Number Is Not Prime "<<endl;
        break;
    }
}

int main()
{
    PrintNumberType(ReadTheNumber());
    return 0;
}
