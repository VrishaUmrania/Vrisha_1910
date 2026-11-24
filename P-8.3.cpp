#include <iostream>
using namespace std;


unsigned long long factorialIterative(int n)
{
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}


unsigned long long factorialRecursive(int n)
{
    if (n <= 1)
        return 1;

    return n * factorialRecursive(n - 1);
}


unsigned long long fibonacciIterative(int n)
{
    if (n <= 1)
        return n;

    unsigned long long first = 0, second = 1, next;

    for (int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    return second;
}


unsigned long long fibonacciRecursive(int n)
{
    if (n <= 1)
        return n;

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}


void displayFibonacciIterative(int n)
{
    unsigned long long first = 0, second = 1, next;

    for (int i = 0; i < n; i++)
    {
        cout << first << " ";

        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}


void displayFibonacciRecursive(int index, int n)
{
    if (index >= n)
        return;

    cout << fibonacciRecursive(index) << " ";
    displayFibonacciRecursive(index + 1, n);
}

int main()
{
    int n;

    cout << "============================================\n";
    cout << " RECURSIVE MATHEMATICAL OPERATIONS ANALYZER\n";
    cout << "============================================\n";

    cout << "Enter a number for factorial (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "Invalid input. Please enter a number from 0 to 20.\n";
        return 1;
    }


    cout << "\n========== FACTORIAL ==========\n";
    cout << "Factorial using iteration = "
         << factorialIterative(n) << endl;

    cout << "Factorial using recursion = "
         << factorialRecursive(n) << endl;

    cout << "\nEnter the number of Fibonacci terms (0 to 20): ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "Invalid input. Please enter a number from 0 to 20.\n";
        return 1;
    }


    cout << "\n========== FIBONACCI SERIES ==========\n";

    cout << "Using iteration: ";
    displayFibonacciIterative(n);

    cout << "Using recursion: ";
    displayFibonacciRecursive(0, n);

    cout << "\n\n========== COMPARISON ==========\n";
    cout << "1. Iterative factorial uses a loop.\n";
    cout << "2. Recursive factorial calls itself until the base case.\n";
    cout << "3. Iterative Fibonacci calculates terms using a loop.\n";
    cout << "4. Recursive Fibonacci calls itself repeatedly.\n";
    cout << "5. Basic recursive Fibonacci is inefficient for large n.\n";
    cout << "6. Iterative solutions generally use less memory.\n";

    cout << "\nProgram Executed Successfully.\n";

    return 0;
}
