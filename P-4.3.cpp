#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Student details
    string enrollmentNo, studentName, branch, semester, mobileNumber;

    // Marks
    float maths = 0, physics = 0, cpf = 0;
    float total = 0, average = 0, percentage = 0;

    int choice;

    bool studentRegistered = false;
    bool marksEntered = false;

mainMenu:

    cout << "\n*********************************************";
    cout << "\n          STUDENT RECORD MANAGEMENT SYSTEM";
    cout << "\n*********************************************";

    cout << "\n\n---------------- MAIN MENU ----------------\n";

    cout << "\n1. Register New Student";
    cout << "\n2. Display Student Record";
    cout << "\n3. Enter Student Marks";
    cout << "\n4. Display Academic Result";
    cout << "\n5. Exit";

    cout << "\n\nEnter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
        // Option 1: Register Student
        case 1:
        {
            cout << "\n-------------------------------------------";
            cout << "\nStudent Registration";
            cout << "\n-------------------------------------------\n";

            cout << "\nEnrollment Number : ";
            cin >> enrollmentNo;

            cin.ignore();

            cout << "Student Name      : ";
            getline(cin, studentName);

            cout << "Branch            : ";
            getline(cin, branch);

            cout << "Semester          : ";
            getline(cin, semester);

            cout << "Mobile Number     : ";
            getline(cin, mobileNumber);

            studentRegistered = true;

            cout << "\nStudent Registered Successfully.\n";

            goto mainMenu;
        }

        // Option 2: Display Student Record
        case 2:
            goto displayRecord;

        // Option 3: Enter Student Marks
        case 3:
            goto enterMarks;

        // Option 4: Display Academic Result
        case 4:
            goto academicResult;

        // Option 5: Exit
        case 5:
            cout << "\nTerminating the application...";
            cout << "\nThank You!\n";
            return 0;

        default:
            cout << "\nInvalid Choice! Please try again.\n";
            goto mainMenu;
    }


displayRecord:

    if (!studentRegistered)
    {
        cout << "\nPlease register the student first!\n";
        goto mainMenu;
    }

    cout << "\n-------------------------------------------";
    cout << "\n          STUDENT RECORD";
    cout << "\n-------------------------------------------";

    cout << "\nEnrollment Number : " << enrollmentNo;
    cout << "\nStudent Name      : " << studentName;
    cout << "\nBranch            : " << branch;
    cout << "\nSemester          : " << semester;
    cout << "\nMobile Number     : " << mobileNumber;

    cout << "\n\nStudent Record Displayed Successfully.\n";

    goto mainMenu;


enterMarks:

    if (!studentRegistered)
    {
        cout << "\nPlease register the student first!\n";
        goto mainMenu;
    }

    cout << "\n-------------------------------------------";
    cout << "\n          ENTER STUDENT MARKS";
    cout << "\n-------------------------------------------\n";

    cout << "Mathematics                     : ";
    cin >> maths;

    cout << "Physics                         : ";
    cin >> physics;

    cout << "Computer Programming Foundation : ";
    cin >> cpf;

    marksEntered = true;

    cout << "\nMarks Entered Successfully.\n";

    goto mainMenu;


academicResult:

    if (!studentRegistered)
    {
        cout << "\nPlease register the student first!\n";
        goto mainMenu;
    }

    if (!marksEntered)
    {
        cout << "\nPlease enter student marks first!\n";
        goto mainMenu;
    }

    // Calculate result
    total = maths + physics + cpf;
    average = total / 3;
    percentage = (total / 300) * 100;

    string result, grade, remark;

    // Result
    if (maths >= 35 && physics >= 35 && cpf >= 35)
        result = "PASS";
    else
        result = "FAIL";

    // Grade
    if (percentage >= 90)
    {
        grade = "A+";
        remark = "Excellent";
    }
    else if (percentage >= 80)
    {
        grade = "A";
        remark = "Very Good";
    }
    else if (percentage >= 70)
    {
        grade = "B+";
        remark = "Good";
    }
    else if (percentage >= 60)
    {
        grade = "B";
        remark = "Above Average";
    }
    else if (percentage >= 50)
    {
        grade = "C";
        remark = "Average";
    }
    else if (percentage >= 35)
    {
        grade = "D";
        remark = "Pass";
    }
    else
    {
        grade = "F";
        remark = "Fail";
    }

    cout << fixed << setprecision(2);

    cout << "\n-------------------------------------------";
    cout << "\n          ACADEMIC RESULT";
    cout << "\n-------------------------------------------";

    cout << "\nMathematics Marks               : " << maths;
    cout << "\nPhysics Marks                   : " << physics;
    cout << "\nComputer Programming Foundation : " << cpf;

    cout << "\n\nTotal Marks      : " << total << " / 300";
    cout << "\nAverage Marks    : " << average;
    cout << "\nPercentage       : " << percentage << "%";
    cout << "\nResult           : " << result;
    cout << "\nGrade            : " << grade;
    cout << "\nPerformance Remark : " << remark << endl;

    goto mainMenu;

    return 0;
}
