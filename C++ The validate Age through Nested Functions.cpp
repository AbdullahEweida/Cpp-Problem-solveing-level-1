#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadTheAge()
{
    int Age;
    cout<<"Enter the age from 18 to 45 : ";
    cin>>Age;
    return Age;
}

bool ValidateTheAge(int Number ,int From,int To)
{
    return (Number<From||Number>To);
}

int CheckTheAgeValidate(int From,int To)
{
    int Age=0;
    do
    {
        Age=ReadTheAge();
    } while (ValidateTheAge(Age,From,To));
    return Age;
}

void PrintTheResult(int CheckTheAgeValidate)
{
    cout<<"________________________"<<endl;
    cout<<"Your age is : "<<CheckTheAgeValidate<<endl;
}

int main()
{
    PrintTheResult(CheckTheAgeValidate(18,45));
    return 0;
}
