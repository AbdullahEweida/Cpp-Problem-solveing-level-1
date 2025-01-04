#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadTheNumber()
{
    int Number;
    cout<<"Enter the number : ";
    cin>>Number;
    return Number;
}

int ReadThePowOfNumber()
{
    int Power;
    cout<<"Enter the power of number : ";
    cin>>Power;
    return Power;
}

void PrintTheResult(int ReadThePowOfNumber,int ReadTheNumber)/*لاحظ : هنا المتغيرات هي متغيرات توضع بها قيمة الدالة علي حسب اماكن الدوال اسفل في الدالة الاساسية*/
{
    cout<<"_____________________________"<<endl;
    cout<<ReadTheNumber<<" Power of "<<ReadThePowOfNumber<<" : "<<pow(ReadTheNumber,ReadThePowOfNumber)<<endl;
}

int main()
{
    PrintTheResult(ReadThePowOfNumber(),ReadTheNumber());/*لاحظ:الدالة الاخيرة هي الدالة التي تنفذ الاول*/
    return 0;
}
