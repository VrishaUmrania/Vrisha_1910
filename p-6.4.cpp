#include<iostream>
using namespace std;

int main()
{


int A[3][3],B[3][3],C[3];

cout << "*********************************";
cout <<      "MATRIX MULTIPLICATION"       ;
cout << "*********************************";

cout <<"\nEnter First Matrix(3 x 3):\n";

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin >> A[i][j];
    }
}

cout <<"\nEnter Second Matrix(3 x 3):\n";

for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cin >> B[i][j];
    }
}

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nFirst Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nSecond Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

   cout << "\nResultant Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }




    cout << "\n\n******** MERGE SORTED ARRAYS ********\n";

    int n, m;

    cout << "\nEnter size of First Array: ";
    cin >> n;

    int arr1[n];

    cout << "Enter sorted elements of First Array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter size of Second Array: ";
    cin >> m;

    int arr2[m];

    cout << "Enter sorted elements of Second Array:\n";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    int arr3[n + m];

    int i = 0, j = 0, k = 0;


    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }

        k++;
    }


    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }


    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;


    cout << "\nFirst Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\n\nSecond Array:\n";
    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << "\n\nMerged Sorted Array:\n";
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}

























