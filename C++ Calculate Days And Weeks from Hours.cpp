#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

float ReadData(string Massege)
{
    float Data;
    cout<<Massege;
    cin>>Data;
    return Data;
}

float CalculateTheDays(float Hour)
{
    float Days = Hour/24;
    return Days;
}

float CalculateTheWeeks(float Days)
{
    float Weeks = Days/7;
    return Weeks;
}

int main()
{
    float Weeks,Days,Hour;
    Hour=ReadData("Enter the NO.Hour : ");
    Days=CalculateTheDays(Hour);
    Weeks=CalculateTheWeeks(Days);
    cout<<"------------------------"<<endl;
    cout<<"The Days is : "<<Days<<endl;
    cout<<"The Weeks is : "<<Weeks<<endl;
    return 0;
}
