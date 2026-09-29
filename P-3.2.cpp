#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initial marks
    int cpfMarks = 70;
    int mathMarks = 80;

    cout << "**************************************************" << endl;
    cout << "        STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "**************************************************" << endl;

    cout << "\nPractical 3.2" << endl;
    cout << "Operator Demonstration" << endl;

    // ------------------------------------------------
    // 1. Pre-increment
    // ------------------------------------------------
    cpfMarks = 70;

    cout << "\n1. ++cpfMarks" << endl;
    cout << "Marks Before Execution : " << cpfMarks << endl;

    ++cpfMarks;

    cout << "Marks After Execution  : " << cpfMarks << endl;

    // ------------------------------------------------
    // 2. Pre-decrement
    // ------------------------------------------------
    cpfMarks = 70;

    cout << "\n2. --cpfMarks" << endl;
    cout << "Marks Before Execution : " << cpfMarks << endl;

    --cpfMarks;

    cout << "Marks After Execution  : " << cpfMarks << endl;

    // ------------------------------------------------
    // 3. Post-increment
    // ------------------------------------------------
    cpfMarks = 70;

    cout << "\n3. cpfMarks++" << endl;
    cout << "Marks Before Execution : " << cpfMarks << endl;

    cpfMarks++;

    cout << "Marks After Execution  : " << cpfMarks << endl;

    // ------------------------------------------------
    // 4. Post-decrement
    // ------------------------------------------------
    cpfMarks = 70;

    cout << "\n4. cpfMarks--" << endl;
    cout << "Marks Before Execution : " << cpfMarks << endl;

    cpfMarks--;

    cout << "Marks After Execution  : " << cpfMarks << endl;

    // ------------------------------------------------
    // Expression evaluation
    // ------------------------------------------------

    cpfMarks = 70;
    mathMarks = 80;

    cout << "\n--------------------------------------------------" << endl;
    cout << "Expression Evaluation" << endl;
    cout << "--------------------------------------------------" << endl;

    cout << "\nInitial CPF Marks        : " << cpfMarks << endl;
    cout << "Initial Mathematics     : " << mathMarks << endl;

    // Step 1: ++cpfMarks
    ++cpfMarks;
    int firstValue = cpfMarks;

    // Step 2: cpfMarks++
    int secondValue = cpfMarks;
    cpfMarks++;

    // Step 3: --mathMarks
    --mathMarks;
    int thirdValue = mathMarks;

    // Step 4: ++mathMarks
    ++mathMarks;
    int fourthValue = mathMarks;

    // Step 5: mathMarks--
    int fifthValue = mathMarks;
    mathMarks--;

    int result = firstValue + secondValue
               + thirdValue + fourthValue + fifthValue;

    cout << "\nStep 1 (++cpfMarks)      : " << firstValue << endl;
    cout << "Step 2 (cpfMarks++)      : " << secondValue << endl;
    cout << "Step 3 (--mathMarks)     : " << thirdValue << endl;
    cout << "Step 4 (++mathMarks)     : " << fourthValue << endl;
    cout << "Step 5 (mathMarks--)     : " << fifthValue << endl;

    cout << "\nFinal CPF Marks          : " << cpfMarks << endl;
    cout << "Final Mathematics Marks  : " << mathMarks << endl;

    cout << "\nResult                   : " << result << endl;


    return 0;
}
