#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadTheFactorial()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    return n;
}

void Factorial(int ReadTheFactorial)    
{
    int i;
    int fact=1;
    for(i=1;i<=ReadTheFactorial;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial is : "<<fact<<endl;
}   

int main()
{
    Factorial(ReadTheFactorial());
    return 0;
}
