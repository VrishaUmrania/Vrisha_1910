#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float marks1, marks2, marks3;
    float total, average, percentage;

    cout << "**********************************************" << endl;
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**********************************************" << endl;

    // Input marks
    cout << "\nEnter marks for Subject 1: ";
    cin >> marks1;

    cout << "Enter marks for Subject 2: ";
    cin >> marks2;

    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    // Calculate academic statistics
    total = marks1 + marks2 + marks3;
    average = total / 3;
    percentage = (total / 300) * 100;

    // Academic Summary
    cout << "\n----------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "----------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    cout << "Total Marks       : " << total << endl;
    cout << "Average Marks     : " << average << endl;
    cout << "Percentage        : " << percentage << "%" << endl;

    // Academic Result
    cout << "\n----------------------------------------------" << endl;
    cout << "Academic Result" << endl;
    cout << "----------------------------------------------" << endl;

    // Decision making using if-else
    if (percentage >= 40)
    {
        cout << "Result            : PASS" << endl;
        cout << "\nCongratulations! You have successfully passed."
             << endl;
    }
    else
    {
        cout << "Result            : FAIL" << endl;
        cout << "\nSorry! You have failed. Better luck next time."
             << endl;
    }

    cout << "----------------------------------------------" << endl;

    return 0;
}
