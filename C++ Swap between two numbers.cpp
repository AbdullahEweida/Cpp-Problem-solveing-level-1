#include <iostream>
#include <cmath>
#include "string"
using namespace std;

void ReadNumbers(int &Num1,int &Num2)
{
    cout<<"Please enter the first number : ";
    cin>>Num1;
    cout<<"Please enter the second number : ";
    cin>>Num2;
}

void SwapNumbers(int &Num1,int &Num2)
{
    int Temp;
    Temp=Num1;
    Num1=Num2;
    Num2=Temp;
}

void PrintNumbers(int Num1,int Num2)
{
    cout<<"_______________after swap______________"<<endl;
    cout<<"The first Number is : "<<Num1<<endl;
    cout<<"The second Number is : "<<Num2<<endl;
}

int main()
{
    int Num1,Num2;
    ReadNumbers(Num1,Num2);
    SwapNumbers(Num1,Num2);
    PrintNumbers(Num1,Num2);
    return 0;
}
