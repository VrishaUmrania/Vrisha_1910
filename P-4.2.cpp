#include<iostream>
using namespace std;
int main()
{
    int maths,physics,cpf,total;
    float percentage;
    cout<<"Enter maths marks: ";
    cin>>maths;
    cout<<"Enter phy marks: ";
    cin>>physics;
    cout<<"Enter cpf marks:";
    cin>>cpf;
    total=maths+physics+cpf;
    percentage=(total*100.0)/300;
    cout<<"\n\nTotal is "<<total;
    cout<<"\nPercentage is "<<percentage;

    if (maths>=35&&physics>=35&&cpf>=35)
    {
        cout<<"\n\nResult:PASS";
    }
    else
    {
        cout<<"\n\nResult:FAIL";
    }
    if (percentage>=90 && percentage<=100) {
        cout<<"GRADE : O"<<endl;
        cout<<"performance: outstanding";
    }
    else if (percentage>=80 && percentage<=89) {
        cout<<"GRADE : A+"<<endl;
        cout<<"performance: excellent";
    }
    else if (percentage>=70 && percentage<=79) {
        cout<<"GRADE : A"<<endl;
        cout<<"performance: very good";
    }
    else if (percentage>=60 && percentage<=69) {
        cout<<"GRADE : B+"<<endl;
        cout<<"performance: good";
    }
    else if (percentage>=50 && percentage<=59) {
        cout<<"GRADE : B"<<endl;
        cout<<"performance: Satisfactory";
    }
    else if (percentage>=40 && percentage<=49) {
        cout<<"GRADE : C"<<endl;
        cout<<"performance: need improvement";
    }
    else {
        cout<<"GRADE : F"<<endl;
        cout<<"performance: failed"<<endl;
    }
    return 0;
}
