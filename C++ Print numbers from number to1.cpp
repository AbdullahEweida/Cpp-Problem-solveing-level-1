#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadTheStartLoop()
{
    int NumberTheStartOfRange;
    cout<<"Enter the number that start of range : ";
    cin>>NumberTheStartOfRange;
    return NumberTheStartOfRange;
}

void PrintTheNumbers(int ReadTheStartLoop )
{
    cout<<"_____________The Numbers________________"<<endl;
    for (int i = ReadTheStartLoop; i >= 1; i--)
    {
        cout<<i<<endl;
    }
}

int main()
{
    PrintTheNumbers(ReadTheStartLoop());
    return 0;
}
