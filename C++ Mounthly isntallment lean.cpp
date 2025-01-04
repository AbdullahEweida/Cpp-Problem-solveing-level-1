#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadTheData(string Massege)
{
    int Data;
    cout<<Massege;
    cin>>Data;
    return Data;
}

int TheMounth(int LeanAmount,int MonthlyPayment)
{
    return LeanAmount/MonthlyPayment;
}

int main()
{
    int LeanAmount,MonthlyPayment;
    LeanAmount=ReadTheData("Enter The lean amount : ");
    MonthlyPayment=ReadTheData("Enter The monthly payment : ");
    cout<<"The Result is "<<TheMounth(LeanAmount,MonthlyPayment)<<" Month"<<endl;
    return 0;
}
