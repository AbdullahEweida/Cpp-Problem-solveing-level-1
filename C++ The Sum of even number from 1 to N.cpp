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

void CheckTheNumberIsEven(int i,int &Sum)
{
    if ((i%2==0))
    {
        Sum+=i;
    }
}

void PrintTheNumbers(int ReadTheEndLoop )
{
    int Sum=0;
    cout<<"_____________The Sum Of Even Numbers From 1 To "<<ReadTheEndLoop<<" ________________"<<endl;
    for (int i = 1; i <=ReadTheEndLoop; i++)
    {
        CheckTheNumberIsEven(i,Sum);/*دي بتودي القيم للداله والداله بتعدل وبتستخدم القيم*/
    }
    cout<<"The sum is : "<<Sum<<endl;
}

int main()
{
    PrintTheNumbers(ReadTheEndLoop());
    return 0;
}
