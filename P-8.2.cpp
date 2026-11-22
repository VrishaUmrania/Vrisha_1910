
#include <iostream>
#include <string>
using namespace std;

// Global variable
int globalVar = 100;

// Part A: Function Design

// Function without parameters and without return value
void displayMessage()
{
    cout << "\nFunction without parameters and without return value.\n";
}

// Function without parameters and with return value
int getNumber()
{
    return 10;
}

// Function with parameters and without return value
void displaySum(int a, int b)
{
    cout << "Sum = " << a + b << endl;
}

// Function with parameters and with return value
int multiply(int a, int b)
{
    return a * b;
}

// Part B: Parameter Passing

// Call by Value
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside callByValue: " << x << endl;
}

// Call by Reference
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside callByReference: " << x << endl;
}

// Part C: Scope and Visibility
void scopeDemo()
{
    int localVar = 50;

    cout << "Local variable inside function = " << localVar << endl;
    cout << "Global variable inside function = " << globalVar << endl;
}

// Part D: Function Overloading

void displayStudent(string name)
{
    cout << "Student Name: " << name << endl;
}

void displayStudent(string name, int semester)
{
    cout << "Student Name: " << name << endl;
    cout << "Semester: " << semester << endl;
}

void displayStudent(string name, int semester, string branch)
{
    cout << "Student Name: " << name << endl;
    cout << "Semester: " << semester << endl;
    cout << "Branch: " << branch << endl;
}

int main()
{
    // Part A: Function Design
    cout << "========== PART A: FUNCTION DESIGN ==========\n";

    displayMessage();

    cout << "Returned Number = " << getNumber() << endl;

    displaySum(10, 20);

    cout << "Multiplication = " << multiply(5, 4) << endl;

    // Part B: Parameter Passing
    cout << "\n========== PART B: PARAMETER PASSING ==========\n";

    int a = 20;

    cout << "Original value = " << a << endl;
    callByValue(a);
    cout << "After callByValue = " << a << endl;

    cout << "\nOriginal value = " << a << endl;
    callByReference(a);
    cout << "After callByReference = " << a << endl;

    cout << "\nComparison:\n";
    cout << "Call by Value does not change the original variable.\n";
    cout << "Call by Reference changes the original variable.\n";

    // Part C: Scope and Visibility
    cout << "\n========== PART C: SCOPE AND VISIBILITY ==========\n";

    scopeDemo();

    cout << "Global variable outside function = " << globalVar << endl;

    // cout << localVar; // Error: localVar is not accessible here

    // Part D: Function Overloading
    cout << "\n========== PART D: FUNCTION OVERLOADING ==========\n";

    displayStudent("Amit Patel");

    cout << "\nStudent Details with Academic Information:\n";
    displayStudent("Amit Patel", 1);

    cout << "\nStudent Details with Academic and Contact Information:\n";
    displayStudent("Amit Patel", 1, "CE");

    cout << "\nProgram Executed Successfully.\n";

    return 0;
}
