
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string enrollment, name, branch;
    string referenceID, firstName, lastName, keyword;
    int i, j, firstSpace, lastSpace;
    bool found = false;


    cout << "********************************************" << endl;
    cout << "       STUDENT RECORD MANAGEMENT SYSTEM" << endl;
    cout << "********************************************" << endl;


    cout << "\nEnter Enrollment Number : ";
    cin >> enrollment;

    cin.ignore();

    cout << "Enter Student Name      : ";
    getline(cin, name);

    cout << "Enter Branch            : ";
    getline(cin, branch);


    referenceID = "";

    for(i = 0; i < name.length(); i++)
    {
        referenceID += name[i];
    }

    referenceID += "-";

    for(i = 0; i < enrollment.length(); i++)
    {
        referenceID += enrollment[i];
    }

    cout << "\n--------------------------------------------" << endl;
    cout << "Student Reference" << endl;
    cout << referenceID << endl;


    referenceID = name + "-" + enrollment;


    firstSpace = -1;
    lastSpace = -1;

    for(i = 0; i < name.length(); i++)
    {
        if(name[i] == ' ')
        {
            if(firstSpace == -1)
                firstSpace = i;

            lastSpace = i;
        }
    }

    if(firstSpace == -1)
    {
        firstName = name;
        lastName = name;
    }
    else
    {
        firstName = "";
        lastName = "";

        for(i = 0; i < firstSpace; i++)
        {
            firstName += name[i];
        }

        for(i = lastSpace + 1; i < name.length(); i++)
        {
            lastName += name[i];
        }
    }

    cout << "\n--------------------------------------------" << endl;

    cout << "First Name" << endl;
    cout << firstName << endl;

    cout << "\nLast Name" << endl;
    cout << lastName << endl;


    if(name.find(' ') != string::npos)
    {
        firstName = name.substr(0, name.find(' '));
        lastName = name.substr(name.rfind(' ') + 1);
    }


    cout << "\n--------------------------------------------" << endl;
    cout << "Enter Keyword : ";
    getline(cin, keyword);

    found = false;

    if(keyword.length() > 0)
    {
        for(i = 0; i + keyword.length() <= name.length(); i++)
        {
            for(j = 0; j < keyword.length(); j++)
            {
                if(name[i + j] != keyword[j])
                    break;
            }

            if(j == keyword.length())
            {
                found = true;
                break;
            }
        }
    }

    if(found)
        cout << "Keyword Found." << endl;
    else
        cout << "Keyword Not Found." << endl;


    if(!keyword.empty() && name.find(keyword) != string::npos)
        cout << "Keyword Found using find()." << endl;
    else
        cout << "Keyword Not Found using find()." << endl;


    cout << "\n--------------------------------------------" << endl;
    cout << "Student Report" << endl;

    cout << "\nEnrollment Number : " << enrollment << endl;
    cout << "Student Name      : " << name << endl;
    cout << "Branch            : " << branch << endl;

    cout << "\n--------------------------------------------" << endl;

    return 0;
}
