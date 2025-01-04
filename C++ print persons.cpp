#include <iostream>
#include <cmath>
#include "string"
using namespace std;

struct stinfo
{
    string FristName;
    string LastName;
    short int Age;
    string phone;
};

void ReadInfo(stinfo& info)
{
    cout<<"****************************"<<endl;
    cout<<"enter first name for person : ";
    cin>>info.FristName;
    cout<<"enter last name for person : ";
    cin>>info.LastName;
    cout<<"enter age for person : ";
    cin>>info.Age;
    cout<<"enter phone for person : ";
    cin>>info.phone;
    cout<<"****************************"<<endl;
}

void ReadPersonsInfo( stinfo person[100],int &length)
{
    cout<<"Enter the numbers of persons : ";
    cin>>length;
    for (int i = 0; i < length; i++)
    {
        cout<<"The person { "<<i+1<<" }"<<endl;
        ReadInfo(person[i]);
    }
    
}

void PrintInfo(stinfo info)
{
    cout<<"****************************"<<endl;
    cout<<"first name :  "<<info.FristName<<endl;
    cout<<"last name :  "<<info.LastName<<endl;
    cout<<"Age :  "<<info.Age<<endl;
    cout<<"phone :  "<<info.phone<<endl;
    cout<<"****************************"<<endl;
}

void PrintPersonInfo(stinfo person[100],int length)
{
   for (int i = 0; i < length; i++)
    {
        cout<<"The person { "<<i+1<<" }"<<endl;
        PrintInfo(person[i]);
    }
}

int main()
{
    int length;
    stinfo person[100];
    ReadPersonsInfo(person, length);
    PrintPersonInfo(person,length);
    return 0;
}
