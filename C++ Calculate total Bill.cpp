#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

float ReadData()
{
    float Bill;
    cout<<"Enter the bill value : ";
    cin>>Bill;
    return Bill;
}

float CalculateData(float Bill)
{
    Bill=Bill*1.1;
    Bill=Bill*1.16;
    return Bill;
}

void PrintTheResult(float Bill)
{
    cout<<"------------------------------"<<endl;
    cout<<"The total bill : "<<CalculateData(Bill)<<endl;
}

int main()
{
    PrintTheResult(ReadData());
    return 0;
}
