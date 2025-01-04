#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

struct strDuration
{
    float Days;
    float Hours;
    float Minutes;
    float second;
};


float ReadData(string Massege)
{
    float Data;
    do{
    cout<<Massege;
    cin>>Data;}while(Data<=0);
    return Data;
}

strDuration CalculateDuration()
{
    strDuration Duration;
    Duration.Hours=ReadData("Enter the NO.Hour : ");
    Duration.Days=ReadData("Enter the NO.Days : ");
    Duration.Minutes=ReadData("Enter the No.Minutes : ");
    Duration.second=ReadData("Enter the NO.Second : ");
    return Duration;
}

float TaskDurationInSecond(strDuration Duration)
{
    float Sec=0;
    Sec+=Duration.Hours*60*60;
    Sec+=Duration.Days*60*60*24;
    Sec+=Duration.Minutes*60;
    Sec+=Duration.second;
    return Sec;
}

void PrintTheDurationInSecond(float Sec)
{
    cout<<"-------------------------"<<endl;
    cout<<"The Duration In Second : "<<Sec<<endl;
}

int main()
{
    PrintTheDurationInSecond(TaskDurationInSecond(CalculateDuration()));
    return 0;
}
