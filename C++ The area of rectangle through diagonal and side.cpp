#include <iostream>
#include <cmath>
#include "string"
using namespace std;

void ReadTheNumbers(float &Hight,float &diagonal )
{
    cout<<"Please Enter the diagonal of rectangle : ";
    cin>>diagonal;
    cout<<"Please Enter the hight of rectangle : ";
    cin>>Hight;
}

float TheAreaOfRectangle(float Hight,float diagonal)
{
    return (Hight*sqrt(pow(diagonal,2)-pow(Hight,2)));
}

void PrintTheAreaOfRectangle(float TheAreaOfRectangle)
{
    cout<<"___________________________________________"<<endl;
    cout<<"The area of rectangle is : "<<TheAreaOfRectangle<<endl;
}

int main()
{
    float Hight,diagonal;
    ReadTheNumbers(Hight,diagonal);
    PrintTheAreaOfRectangle(TheAreaOfRectangle(Hight,diagonal));
    return 0;
}
