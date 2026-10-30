#include <iostream>
#include <string>
using namespace std;

int main()
{
    char choice = 'Y';

    cout << "*********************************************\n";
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "*********************************************\n";

    // Continue registration while administrator enters Y
    while (choice == 'Y' || choice == 'y')
    {
        string enrollmentNumber;
        string studentName;
        string branch;
        int semester;
        string mobileNumber;

        cout << "\n-------------------------------------------\n";
        cout << "           Student Registration\n";
        cout << "-------------------------------------------\n";

        // Input student details
        cout << "\nEnrollment Number : ";
        cin >> enrollmentNumber;

        cin.ignore();

        cout << "Student Name      : ";
        getline(cin, studentName);

        cout << "Branch            : ";
        getline(cin, branch);

        cout << "Semester          : ";
        cin >> semester;

        cout << "Mobile Number     : ";
        cin >> mobileNumber;

        // Display success message
        cout << "\nStudent Registered Successfully.\n";

        // Ask whether to register another student
        cout << "\nRegister Another Student? (Y/N) : ";
        cin >> choice;
    }

    cout << "\nReturning To Main Menu...\n";

    return 0;
}
