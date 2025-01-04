#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

void ReadTheNumbers(float &Radius )
{
    cout<<"Please Enter the the radius of circle : ";
    cin>>Radius;
}

float TheAreaOfCircle(float Radius)
{
    return M_PI*pow(Radius,2);
}

void PrintTheAreaOfCircle(float TheAreaOfCircle)
{
    cout<<"___________________________________________"<<endl;
    cout<<"The area of circle is : "<<TheAreaOfCircle<<endl;
}

int main()
{
    float Radius;
    ReadTheNumbers(Radius);
    PrintTheAreaOfCircle(TheAreaOfCircle(Radius));
    return 0;
}
