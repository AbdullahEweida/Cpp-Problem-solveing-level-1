#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadTheEndLoop()
{
    int NumberTheEndOfRange;
    cout<<"Enter the number that End of range : ";
    cin>>NumberTheEndOfRange;
    return NumberTheEndOfRange;
}

void CheckTheNumberIsOdd(int i,int &Sum)
{
    if (!(i%2==0))
    {
        Sum+=i;
    }
}

void PrintTheNumbers(int ReadTheEndLoop )
{
    int Sum=0;
    cout<<"_____________The Sum Of Odd Numbers________________"<<endl;
    for (int i = 1; i <=ReadTheEndLoop; i++)
    {
        CheckTheNumberIsOdd(i,Sum);
    }
    cout<<"The sum is : "<<Sum<<endl;
}

int main()
{
    PrintTheNumbers(ReadTheEndLoop());
    return 0;
}
