#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

void ReadTheDiameter(float &Diameter )
{
    cout<<"Enter the the Diameter of circle : ";
    cin>>Diameter;
}

float TheAreaOfCircle(float Diameter)
{
    return M_PI*pow(Diameter/2,2);
}

void PrintTheAreaOfCircle(float TheAreaOfCircle)
{
    cout<<"___________________________________________"<<endl;
    cout<<"The area of circle is : "<<TheAreaOfCircle<<endl;
}

int main()
{
    float Diameter;
    ReadTheDiameter(Diameter);
    PrintTheAreaOfCircle(TheAreaOfCircle(Diameter));
    return 0;
}
