#include <iostream>
#include <cmath>
#include "string"
using namespace std;

float CheckTheNumberInRange(int From ,int To)
{
    float Number;

    do
    {   
        cout<<"________________________________"<<endl;
        cout<<"Please enter the number again from "<<From<<" to "<<To<<" = ";
        cin>>Number;
    }
    while (Number<From||Number>To);
    cout<<"________________________________"<<endl;
    cout<<"The number that entered is : ";
    return Number;
    
}

int main()
{
    cout<<CheckTheNumberInRange(50,100)<<endl;
    return 0;
}
