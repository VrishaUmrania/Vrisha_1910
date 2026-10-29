#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numberOfSubjects;
    float marks, total = 0, average, percentage;
    bool pass = true;

    cout << "*****************************************\n";
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "*****************************************\n";

    // Input number of subjects
    cout << "\nEnter Number of Subjects : ";
    cin >> numberOfSubjects;

    // Input marks using for loop
    for (int i = 1; i <= numberOfSubjects; i++)
    {
        cout << "\nEnter Marks of Subject " << i << " : ";
        cin >> marks;

        // Validation
        while (marks < 0 || marks > 100)
        {
            cout << "Invalid marks! Enter marks between 0 and 100.\n";
            cout << "Enter Marks of Subject " << i << " : ";
            cin >> marks;
        }

        total = total + marks;

        // Check pass/fail (minimum passing marks = 35)
        if (marks < 35)
        {
            pass = false;
        }
    }

    // Calculate average and percentage
    average = total / numberOfSubjects;
    percentage = (total / (numberOfSubjects * 100.0)) * 100;

    // Variables for result
    string result, grade, performance;

    // Determine Result
    if (pass)
        result = "PASS";
    else
        result = "FAIL";

    // Determine Grade and Performance
    if (!pass)
    {
        grade = "F";
        performance = "Fail";
    }
    else if (percentage >= 90)
    {
        grade = "A+";
        performance = "Outstanding";
    }
    else if (percentage >= 80)
    {
        grade = "A";
        performance = "Excellent";
    }
    else if (percentage >= 70)
    {
        grade = "B+";
        performance = "Very Good";
    }
    else if (percentage >= 60)
    {
        grade = "B";
        performance = "Good";
    }
    else if (percentage >= 50)
    {
        grade = "C";
        performance = "Average";
    }
    else
    {
        grade = "D";
        performance = "Pass";
    }

    // Display Academic Result
    cout << fixed << setprecision(2);

    cout << "\n\n-----------------------------------------\n";
    cout << "Academic Result\n";
    cout << "-----------------------------------------\n";

    cout << "\nTotal Marks       : " << total;
    cout << "\nAverage Marks     : " << average;
    cout << "\nPercentage        : " << percentage << "%";

    cout << "\n\nResult            : " << result;
    cout << "\nGrade             : " << grade;
    cout << "\nPerformance       : " << performance;

    cout << "\n\n-----------------------------------------\n";

    return 0;
}
