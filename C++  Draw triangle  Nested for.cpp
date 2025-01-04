#include <iostream>
#include <cmath>
#include "string"
using namespace std;

int ReadNumberOfLines()
{
    int No_Lines;
    cout<<"Enter the No.Lines : ";
    cin>>No_Lines;
    return No_Lines;
}

string PrintTheShape(int ReadNumberOfLines)
{
    cout<<"________________________"<<endl;
    cout<<"The shape is : "<<endl<<endl;
    for (int i = 1; i <=ReadNumberOfLines; i++)
    {
        for (int space = 1; space <= ReadNumberOfLines-i ; space++)
        {
            cout<<" ";
        }
        for (int Numbers = 65; Numbers <= 64+i; Numbers++)
        {
            cout<<char(Numbers)<<" ";
        }
        cout<<endl;
        
    }
    return "";
}

int main()
{
    
    cout<<PrintTheShape(ReadNumberOfLines())<<endl;
    return 0;
    
}
