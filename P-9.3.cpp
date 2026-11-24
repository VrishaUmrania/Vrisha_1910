#include<iostream>
using namespace std;

void Empty();
int main()
{
    cout<<"********************************************"<<endl;
    cout<<"    MEMORY ORGANIZATION ANALYZER"<<endl;
    cout<<"********************************************"<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    Empty();
}

void  Empty()
{
    int x=10;
    int *a,**b,***c;
    a=&x;
    cout<<"--------------- Stack Memory ----------------"<<endl;
    cout<<"Local Variable Value"<<endl;
    cout<<x;
    cout<<" "<<endl;
    cout<<"Memory Address"<<endl;
    cout<<a;

    cout<<" "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<" "<<endl;

    a=new int;
    *a=20;
    cout<<"--------------- Dynamically Allocated Memory ------------"<<endl;
    cout<<"Allocated Value"<<endl;
    cout<<*a;
    cout<<" "<<endl;
    cout<<"Memory Address"<<endl;
    cout<<a;

    cout<<" "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<" "<<endl;

    cout<<"----------- Multi-level Referencing ----------"<<endl;
    b=&a;
    c=&b;
    cout<<"Original Value"<<endl;
    cout<<*a;
    cout<<"Single-level Address"<<endl;
    cout<<a;
    cout<<endl;
    cout<<"Double-level Address"<<endl;
    cout<<b;
    cout<<endl;
    cout<<"Triple-level Address"<<endl;
    cout<<c;
    cout<<endl;
    cout<<"Value accessed through three levels"<<endl;
    cout<<***c;

    cout<<" "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<" "<<endl;

    cout<<"--------------- Memory Safety ----------------"<<endl;
    a=nullptr;
    cout<<"Null refernce"<<endl;
    if(a==nullptr)
    {
        cout<<"Safe(Refernce is NULL"<<endl;
    }
    else
    {
        cout<<"Not Safe(Refernce is not NULL"<<endl;
    }

    cout<<" "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<" "<<endl;

    int *e;
    e=new int;
    *e=98;
    delete e;
    cout<<"Invalid Reference"<<endl;
    cout<<"Memory Released Successfully"<<endl;
    cout<<"Reference Invalid"<<endl;

    cout<<" "<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<" "<<endl;

    cout<<"Uninitialized Address Variable"<<endl;

    int *z;

    cout<<"Unsafe to Access (Pointer is uninitialized)"<<endl;

}
