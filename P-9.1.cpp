
#include<iostream>
using namespace std;

int main()
{
    int a;
    char b;
    float c;

    int *p;
    char *q;
    float *r;

    int arr[5]={10,20,30,40,50};
    int i;

    cout<<"********************************************"<<endl;
    cout<<"       MEMORY ADDRESS EXPLORER"<<endl;
    cout<<"********************************************"<<endl;

    // Part A - Variable Information

    cout<<"------------ Variable Information ------------"<<endl;

    cout<<"Integer Value :";
    cin>>a;

    p=&a;

    cout<<"Memory Address :"<<p<<endl;

    cout<<"----------------------------------------------"<<endl;

    cout<<"Character Value :";
    cin>>b;

    q=&b;

    cout<<"Memory Address :"<<(void*)q<<endl;

    cout<<"----------------------------------------------"<<endl;

    cout<<"Floating Value :";
    cin>>c;

    r=&c;

    cout<<"Memory Address :"<<r<<endl;

    cout<<"----------------------------------------------"<<endl;


    // Part B - Indirect Referencing

    cout<<"Indirect Referencing"<<endl;

    cout<<"Stored Value :"<<*p<<endl;

    cout<<"Modified Value :"<<endl;

    *p=30;

    cout<<*p<<endl;

    cout<<"----------------------------------------------"<<endl;


    // Part C - Sequential Data Collection

    cout<<"Sequential Data Collection"<<endl;

    cout<<"Array using Index"<<endl;

    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    p=&arr[0];

    for(i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }

    return 0;
}

