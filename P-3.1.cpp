#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string enrollment, name, branch;
    int semester;
    long long mobile;


    float mathematics, physics, cpf;
    float total, average, percentage;

    cout << "**************************************************" << endl;
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**************************************************" << endl;

    cout << "\nSoftware Version : 1.2" << endl;

    cout << "\n--------------------------------------------------" << endl;
    cout << "Student Registration" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "\nEnter Enrollment Number : ";
    cin >> enrollment;

    cout << "Enter Student Name      : ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Branch            : ";
    cin >> branch;

    cout << "Enter Semester          : ";
    cin >> semester;

    cout << "Enter Mobile Number     : ";
    cin >> mobile;

    cout << "\n--------------------------------------------------" << endl;
    cout << "Academic Information" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "\nEnter Mathematics Marks                 : ";
    cin >> mathematics;

    cout << "Enter Physics Marks                     : ";
    cin >> physics;

    cout << "Enter CPF Marks     : ";
    cin >> cpf;


    total = mathematics + physics + cpf;
    average = total / 3;
    percentage = (total / 300) * 100;

    cout << "\n--------------------------------------------------" << endl;
    cout << "Academic Summary" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << fixed << setprecision(2);
    cout << "\nTotal Marks       : " << total << endl;
    cout << "Average Marks     : " << average << endl;
    cout << "Percentage        : " << percentage << "%" << endl;

    cout << "\n--------------------------------------------------" << endl;
    cout << "Student Information" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "\nEnrollment Number : " << enrollment << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;
    cout << "Semester          : " << semester << endl;
    cout << "Mobile Number     : " << mobile << endl;

    cout << "\n--------------------------------------------------" << endl;

    return 0;
}
