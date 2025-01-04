#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

enum Grade{A,B,C,D,E,f};

int ReadTheGrade(int &Grade)
{
    do{
    cout<<"Enter your Grade in the subject : ";
    cin>>Grade;}
    while (Grade>100||Grade<0);
    return Grade;
}

Grade SetTheEnum(int Grade)
{
    if (Grade>=90)
       return Grade::A;
    else if(Grade>=80)
       return Grade::B;
    else if (Grade>=70)
       return Grade::C;
    else if(Grade>=60)
       return Grade::D;
    else if(Grade>=50)
       return Grade::E;
    else
       return Grade::f;
}

string PrintTheResult(int Grade)
{
    cout<<"_________________________________"<<endl;
    if (SetTheEnum(Grade)==Grade::A)/*هنا بيكون لازم قيمة الدالة بتساوي الطرف الثاني وبيعوض بالمتغير*/
    {
        return "The Grade is : A \n";
    }
    else if (SetTheEnum(Grade)==Grade::B)
    {
        return "The Grade is : B \n";
    }
    else if (SetTheEnum(Grade)==Grade::C)
    {
        return "The Grade is : C \n";
    }
    else if (SetTheEnum(Grade)==Grade::D)
    {
        return "The Grade is : D \n";
    }
    else if (SetTheEnum(Grade)==Grade::E)
    {
        return "The Grade is : E \n";
    }
    else
    {
        return "The Grade is : F \n";
    }
}

int main()
{
    int Grade;
    cout<<PrintTheResult(ReadTheGrade(Grade));
    return 0;
}
