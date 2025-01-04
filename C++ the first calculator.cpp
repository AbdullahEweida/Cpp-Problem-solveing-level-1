#include <iostream>
#include <cmath>
#include "string"
using namespace std;

enum The_Product {multiplies=1,division=2,disjunction=3,addition=4};

void ReadTheNumbers(float &Num1,float &Num2)
{
    cout<<"Enter the first number = ";
    cin>>Num1;
    cout<<"Enter the second number = ";
    cin>>Num2;
}

void PrintTheProduct()
{
    cout<<"***************************************"<<endl;
    cout<<"Please choose the number of pruduct : "<<endl;
    cout<<"{1} multiplies"<<endl;
    cout<<"{2} division"<<endl;
    cout<<"{3} disjunction"<<endl;
    cout<<"{4} addition"<<endl;
    cout<<"***************************************"<<endl;
    cout<<"Choose ? : ";
}
The_Product NumberOfProduct()
{
    int c;
    cin>>c;
    The_Product NumberOfProduct;
    cout<<"***************************************"<<endl;
    cout<<"The Result is : ";
    return (The_Product)c;
}

float PrintTheResult(The_Product NumberOfProduct,float &Num1,float &Num2)
{
    if (NumberOfProduct==The_Product::multiplies)
    {
        return Num1*Num2;   
    }
    else if (NumberOfProduct==The_Product::disjunction)
    {
        return Num1-Num2;
    }
    else if (NumberOfProduct==The_Product::addition)
    {
        return Num1+Num2;
    }
    else if (NumberOfProduct==The_Product::division)
    {
        return Num1/Num2;
    }
    else
    {
        return 0;    
    }
}

int main ()
{
    float Num1,Num2;
    ReadTheNumbers(Num1,Num2);
    PrintTheProduct();
    cout<<PrintTheResult(NumberOfProduct(),Num1,Num2)<<endl;
    return 0;
}
