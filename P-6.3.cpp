f#include<iostream>
using namespace std;

const int MAX=10;

int main()
{
    string number[MAX];
    int n;

cout << "Enter Number Of Students: ";
cin >> n;

for(int i =0;i<n;i++)
{
    cout << "Enter Numbers: ";
    cin >> number[i];
    cout << endl;
}
for(int i =0;i<n;i++)
{
    cout << number[i] << endl;
}

int position;
cout << "Enter Position: ";
cin >> position;

position--;

if(position >=0 && position <=n && n<MAX)
{
    for(int i = n; i > position;i--)
    {
        number[i] = number[i-1];
    }
    cout << "Enter Number: ";
    cin >> number[position];}
    n++;
}




