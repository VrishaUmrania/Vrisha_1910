#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    string softwareVersion = "1.1";
    string instituteName = "CHARUSAT University";
    string academicYear = "2026-27";


    string enrollmentNumber;
    string studentName;
    string branch;
    string semester;
    string mobileNumber;


    cout << "\n";
    cout << "****************************************************\n";
    cout << "          STUDENT RECORD MANAGEMENT SYSTEM          \n";
    cout << "****************************************************\n\n";


    cout << "Software Version : " << softwareVersion << endl;
    cout << "Institute        : " << instituteName << endl;
    cout << "Academic Year    : " << academicYear << endl;

    cout << "\n----------------------------------------------------\n";
    cout << "              Student Registration\n";
    cout << "----------------------------------------------------\n\n";


        cout << "Enter Enrollment Number : ";
    getline(cin, enrollmentNumber);

    cout << "Enter Student Name      : ";
    getline(cin, studentName);

    cout << "Enter Branch            : ";
    getline(cin, branch);

    cout << "Enter Semester          : ";
    getline(cin, semester);

    cout << "Enter Mobile Number     : ";
    getline(cin, mobileNumber);


    cout << "\n";
    cout << "----------------------------------------------------\n";
    cout << "              Student Information\n";
    cout << "----------------------------------------------------\n\n";

    cout << left << setw(25) << "Enrollment Number" << ": "
         << enrollmentNumber << endl;

    cout << left << setw(25) << "Student Name" << ": "
         << studentName << endl;

    cout << left << setw(25) << "Branch" << ": "
         << branch << endl;

    cout << left << setw(25) << "Semester" << ": "
         << semester << endl;

    cout << left << setw(25) << "Mobile Number" << ": "
         << mobileNumber << endl;

    cout << "\n----------------------------------------------------\n";

    return 0;
}
