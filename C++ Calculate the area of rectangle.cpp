#include <iostream>
#include <cmath>
#include "string"
using namespace std;

void ReadTheNumbers(float &Hight,float &lengthOfBase )
{
    cout<<"Please Enter the length of base : ";
    cin>>lengthOfBase;
    cout<<"Please Enter the hight of rectangle : ";
    cin>>Hight;
}

float TheAreaOfRectangle(float Hight,float lengthOfBase)
{
    return Hight*lengthOfBase;
}

void PrintTheAreaOfRectangle(float TheAreaOfRectangle)
{
    cout<<"___________________________________________"<<endl;
    cout<<"The area of Rectangle is : "<<TheAreaOfRectangle<<endl;
}

int main()
{
    float Hight,lengthOfBase;
    ReadTheNumbers(Hight,lengthOfBase);
    PrintTheAreaOfRectangle(TheAreaOfRectangle(Hight,lengthOfBase));
    return 0;
}
