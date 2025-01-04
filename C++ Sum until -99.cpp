#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

void ReadTheNumber(int &Number,int counter)/* لاحظ : هنا توضع قيم المتغيرات علي حسب القيم التي في الاسفل*/
{
    cout<<"Enter The Number "<<counter<<" : ";/*بمعني انه هنا اخذ القيمة من الاسفل ووضعها في هذا المتغير*/
    cin>>Number;
    if(Number!=-99)
        cout<<"__________________________________________"<<endl;
}

int CheckTheNumber(int Number)
{
    int Sum = 0;int counter=2;
    while (Number != -99)
    {
        Sum+=Number;
        ReadTheNumber(Number,counter);
        ++counter;
    }
    return Sum;
}

void PrintTheResult(int CheckTheNumber)
{
    cout<<"________________The Result Is_____________"<<endl;
    cout<<"The sum of number(s) : "<<CheckTheNumber<<endl;
}

int main()
{
    int Number;
    ReadTheNumber(Number,1);/*لاحظ : المتغير هنا يعوض به في الداله نفسها*/
    PrintTheResult(CheckTheNumber(Number));
    return 0;
}
