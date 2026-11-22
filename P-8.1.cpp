

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string enrollmentNumber, studentName, branch;
int semester, marks[5], totalMarks;
float percentage;
string grade, result;

void displayHeader()
{
    cout << "******************************************\n";
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "******************************************\n";
}

void acceptStudentDetails()
{
    cout << "\n---------- Student Registration ----------\n\n";

    cout << "Enter Enrollment Number : ";
    cin >> enrollmentNumber;

    cin.ignore();
    cout << "Enter Student Name : ";
    getline(cin, studentName);

    cout << "Enter Branch : ";
    getline(cin, branch);

    cout << "Enter Semester : ";
    cin >> semester;

    cout << "\nEnter Marks\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << " : ";
        cin >> marks[i];
    }
}

void calculateAcademicResult()
{
    totalMarks = 0;

    for (int i = 0; i < 5; i++)
    {
        totalMarks += marks[i];
    }

    percentage = totalMarks / 5.0;

    if (percentage >= 85)
        grade = "A+";
    else if (percentage >= 75)
        grade = "A";
    else if (percentage >= 65)
        grade = "B+";
    else if (percentage >= 55)
        grade = "B";
    else if (percentage >= 40)
        grade = "C";
    else
        grade = "F";

    if (percentage >= 40)
        result = "PASS";
    else
        result = "FAIL";
}

void displayStudentReport()
{
    cout << "\n------------------------------------------\n";
    cout << "             Academic Report\n";
    cout << "------------------------------------------\n\n";

    cout << "Enrollment Number : " << enrollmentNumber << endl;
    cout << "Student Name      : " << studentName << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Total Marks       : " << totalMarks << endl;

    cout << fixed << setprecision(2);
    cout << "Percentage        : " << percentage << "%\n";
    cout << "Grade             : " << grade << endl;
    cout << "Result            : " << result << endl;

    cout << "------------------------------------------\n";
    cout << "Program Executed Successfully Using "
         << "User-defined Functions.\n";
    cout << "------------------------------------------\n";
}

int main()
{
    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();

    return 0;
}
