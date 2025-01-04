#include <iostream>
#include <cmath>
#include "string"
using namespace std;

void ReadTwoNumbers(float &Num1,float &Num2,float &Num3)
{
    cout<<"Please enter the first number : ";
    cin>>Num1;
    cout<<"Please enter the second number : ";
    cin>>Num2;
    cout<<"Please enter the third number : ";
    cin>>Num3;
}

float CheckTheNumbers(float Num1,float Num2,float &Num3)
{
    if (Num1>Num2&&Num1>Num3)
    {
        return Num1;
    }
    else if(Num2>Num1&&Num2>Num3)
    {
        return Num2;
    }
    else if(Num1=Num2=Num3)
    {
        return Num1;
    }
    else
    {
        return Num3;
    }
}

void PrintTheMaxNum(float CheckTheNumbers)
{
    cout<<"________________________"<<endl;
    cout<<"The maximum number is : "<<CheckTheNumbers<<endl;
}

int main()
{
    float Num1,Num2,Num3;
    ReadTwoNumbers(Num1,Num2,Num3);
    PrintTheMaxNum(CheckTheNumbers(Num1,Num2,Num3));
    return 0;
}
