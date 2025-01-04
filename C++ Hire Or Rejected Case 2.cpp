#include <iostream>
#include <cmath>
#include "string"
using namespace std;

struct StrInfo
{
    short int Age;
    bool CheckDriverLicense,Recommendation;
};

StrInfo ReadTheInfo()
{
    StrInfo Info;
    cout<<"Enter your age : ";
    cin>>Info.Age;
    cout<<"Do you are have the driver license : ";
    cin>>Info.CheckDriverLicense;
    cout<<"Do you are have Recommendation : ";
    cin>>Info.Recommendation;
    return Info;
}
bool IsAccepted(StrInfo Info)
{
    if (Info.Recommendation)
    {
        return true;
    }
    else
    {
        return(Info.Age>21&&Info.CheckDriverLicense);
    }
}

void PrintResult(StrInfo Info)
{
    if (IsAccepted(Info))
    {
        cout<<"\n Hired"<<endl;
    }
    else
    {
        cout<<"\n Rejected"<<endl;
    }
    
}

int main()
{
    PrintResult(ReadTheInfo());
    return 0;
}
