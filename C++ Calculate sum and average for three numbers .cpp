#include <iostream>
#include <cmath>
#include "string"
using namespace std;

struct stNumbers
{
    int FirstNumber;
    int SecondNumber;
    int ThirdNumber;
};

stNumbers ReadTheNumbers(stNumbers &Numbers)
{
    cout<<"Enter the first number : ";
    cin>>Numbers.FirstNumber;
    cout<<"Enter the second number : ";
    cin>>Numbers.SecondNumber;
    cout<<"Enter the third number : ";
    cin>>Numbers.ThirdNumber;
    return Numbers;
}

int CalculatSum(stNumbers Numbers)
{
    int Sum =Numbers.FirstNumber+Numbers.SecondNumber+Numbers.ThirdNumber;
    return Sum;
}

float CalculatAverage(stNumbers Numbers)
{
    return (Numbers.FirstNumber+Numbers.SecondNumber+Numbers.ThirdNumber)/3.0;
}

void PrintSum(int CalculatSum)
{
    cout<<"The Sum is : "<<CalculatSum<<endl;
}

void PrintAverage(float CalculatAverage)
{
    cout<<"The Average is : "<<CalculatAverage<<endl;
}

int main()
{
    stNumbers Numbers;
    PrintSum(CalculatSum(ReadTheNumbers(Numbers)));
    PrintAverage(CalculatAverage(Numbers));
    return 0;
}
