#include <iostream>
#include <cmath>
#include "string"
using namespace std;

enum TheProduct {multiplies=1,addition=2,divides=3,disjunction=4};

void ReadTheNumbers(float &Num1,float &Num2 )
{
    cout<<"Enter the first number : ";
    cin>>Num1;
    cout<<"Enter the second number : ";
    cin>>Num2;
}
void PrintTheProduct()
{
    cout<<"********************************"<<endl;
    cout<<"{1} multiplies"<<endl;
    cout<<"{2} addition"<<endl;
    cout<<"{3} divides"<<endl;
    cout<<"{4} disjunction\n";
    cout<<"********************************"<<endl;
    cout<<"Choose the number of product : ";
}
TheProduct ReadTheNumberOfProduct()
{
    short int change;
    TheProduct NumberOfProduct;
    cin>>change;
    cout<<"The Result is : ";
    return (TheProduct)change;
}
float SwitchCase(TheProduct NumberOfProduct,float &Num1,float &Num2)
{
    switch (NumberOfProduct)
    {
    case TheProduct::multiplies:
        return Num1*Num2;
    break;

    case TheProduct::addition:
        return Num1+Num2;
    break;  
    case TheProduct::disjunction:
        return Num1-Num2;
    break;
    case TheProduct::divides:
        return Num1/Num2;
    break;
    default:
        cout<<"The number is out of RANGE"<<endl;
        return 0;
    break;
    }
}
int main ()
{
    float Num1,Num2;
    ReadTheNumbers(Num1,Num2);
    PrintTheProduct();
    cout<<SwitchCase(ReadTheNumberOfProduct(),Num1,Num2)<<endl;  
}
