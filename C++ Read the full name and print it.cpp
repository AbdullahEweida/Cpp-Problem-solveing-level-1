#include <iostream>
#include <cmath>
#include "string"
using namespace std;

struct StFullName
{
    string FirstName;
    string LastName;
};


StFullName ReadTheFullName()
{
    StFullName FullName;
    cout<<"Enter the first name : ";
    cin>>FullName.FirstName;
    cout<<"Enter the last name : ";
    cin>>FullName.LastName;
    return FullName;
}

string GetFullName(StFullName FullName)
{
    string Name="";
    Name= FullName.FirstName +" "+FullName.LastName;
    return Name;
}

void PrintFullName(string Name)
{
    cout<<"________________________________________"<<endl;
    cout<<"The FullName is : "<<Name<<endl;
}

int main()
{
    PrintFullName(GetFullName(ReadTheFullName()));    
    return 0;
}
