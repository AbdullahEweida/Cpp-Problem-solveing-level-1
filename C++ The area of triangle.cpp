#include <iostream>
#include <cmath>
#include "string"
using namespace std;

void ReadTheNumbers(float &Hight,float &TheSide )
{
    cout<<"Please Enter the the side of Triangle : ";
    cin>>TheSide;
    cout<<"Please Enter the hight of Triangle : ";
    cin>>Hight;
}

float TheAreaOfTriangle(float Hight,float TheSide)
{
    return (0.5*Hight*TheSide);
}

void PrintTheAreaOfTriangle(float TheAreaOfTriangle)
{
    cout<<"___________________________________________"<<endl;
    cout<<"The area of triangle is : "<<TheAreaOfTriangle<<endl;
}

int main()
{
    float Hight,TheSide;
    ReadTheNumbers(Hight,TheSide);
    PrintTheAreaOfTriangle(TheAreaOfTriangle(Hight,TheSide));
    return 0;
}
