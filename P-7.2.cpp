
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string paragraph, sentence, keyword, word;
    string firstWord, lastWord;
    string upper, lower, reversed;
    string palindromeWord;

    int i, words = 0, alphabets = 0;
    int digits = 0, special = 0;
    int position;


    cout << "****************************************" << endl;
    cout << "         DOCUMENT TEXT ANALYZER" << endl;
    cout << "****************************************" << endl;


    cout << "\nEnter Paragraph:" << endl;
    getline(cin, paragraph);

    for(i = 0; i < paragraph.length(); i++)
    {
        if(isalpha((unsigned char)paragraph[i]))
            alphabets++;

        else if(isdigit((unsigned char)paragraph[i]))
            digits++;

        else if(!isspace((unsigned char)paragraph[i]))
            special++;
    }


    bool inWord = false;

    for(i = 0; i < paragraph.length(); i++)
    {
        if(!isspace((unsigned char)paragraph[i]))
        {
            if(!inWord)
            {
                words++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << "\n----------------------------------------" << endl;
    cout << "TEXT ANALYSIS" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Characters       : " << paragraph.length() << endl;
    cout << "Words            : " << words << endl;
    cout << "Alphabets        : " << alphabets << endl;
    cout << "Digits           : " << digits << endl;
    cout << "Special Characters: " << special << endl;



    string temp = "";
    firstWord = "";
    lastWord = "";

    for(i = 0; i <= paragraph.length(); i++)
    {
        if(i < paragraph.length() &&
           !isspace((unsigned char)paragraph[i]))
        {
            temp += paragraph[i];
        }
        else
        {
            if(temp != "")
            {
                if(firstWord == "")
                    firstWord = temp;

                lastWord = temp;
                temp = "";
            }
        }
    }

    cout << "\n----------------------------------------" << endl;
    cout << "STRING EXTRACTION" << endl;
    cout << "----------------------------------------" << endl;

    cout << "First Word      : " << firstWord << endl;
    cout << "Last Word       : " << lastWord << endl;
    cout << "First Character : " << paragraph[0] << endl;
    cout << "Last Character  : "
         << paragraph[paragraph.length() - 1] << endl;



    cout << "\n----------------------------------------" << endl;
    cout << "Enter Additional Sentence:" << endl;
    getline(cin, sentence);

    paragraph = paragraph + " " + sentence;

    cout << "\nUpdated Paragraph:" << endl;
    cout << paragraph << endl;



    cout << "\n----------------------------------------" << endl;
    cout << "PATTERN MATCHING" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Enter Search Word: ";
    getline(cin, keyword);

    position = paragraph.find(keyword);

    if(!keyword.empty() && position != string::npos)
    {
        cout << "Keyword Found" << endl;
        cout << "First Occurrence Position: "
             << position + 1 << endl;
    }
    else
    {
        cout << "Keyword Not Found" << endl;
        cout << "First Occurrence Position: -1" << endl;
    }



    cout << "\n----------------------------------------" << endl;
    cout << "STRING TRANSFORMATION" << endl;
    cout << "----------------------------------------" << endl;

    upper = paragraph;
    lower = paragraph;


    for(i = 0; i < upper.length(); i++)
    {
        upper[i] = toupper((unsigned char)upper[i]);
    }

    cout << "\nUppercase:" << endl;
    cout << upper << endl;


    for(i = 0; i < lower.length(); i++)
    {
        lower[i] = tolower((unsigned char)lower[i]);
    }

    cout << "\nLowercase:" << endl;
    cout << lower << endl;


    reversed = paragraph;
    reverse(reversed.begin(), reversed.end());

    cout << "\nReverse:" << endl;
    cout << reversed << endl;


    cout << "\nEnter Word for Palindrome Check: ";
    getline(cin, palindromeWord);

    reversed = palindromeWord;

    for(i = 0; i < reversed.length(); i++)
    {
        reversed[i] = tolower((unsigned char)reversed[i]);
    }

    string original = palindromeWord;

    for(i = 0; i < original.length(); i++)
    {
        original[i] = tolower((unsigned char)original[i]);
    }

    reverse(reversed.begin(), reversed.end());

    cout << "\nPalindrome Check:" << endl;

    if(original == reversed)
        cout << "Result: Palindrome" << endl;
    else
        cout << "Result: Not Palindrome" << endl;



    cout << "\n----------------------------------------" << endl;
    cout << "STANDARD STRING FUNCTIONS" << endl;
    cout << "----------------------------------------" << endl;


    cout << "Length: " << paragraph.length() << endl;


    string copiedString;
    copiedString = paragraph;

    cout << "String Copied Successfully" << endl;


    string str1 = "Programming";
    string str2 = "Programming";

    if(str1.compare(str2) == 0)
        cout << "Comparison Result: Equal" << endl;
    else
        cout << "Comparison Result: Not Equal" << endl;


    string str3 = "Hello ";
    string str4 = "World";

    str3.append(str4);

    cout << "Concatenation: " << str3 << endl;


    if(paragraph.find(keyword) != string::npos)
        cout << "Substring Search: Found" << endl;
    else
        cout << "Substring Search: Not Found" << endl;


    char ch1 = 'a';
    cout << "toupper(): " << (char)toupper(ch1)
         << " Successful" << endl;


    char ch2 = 'A';
    cout << "tolower(): " << (char)tolower(ch2)
         << " Successful" << endl;

    cout << "\n----------------------------------------" << endl;
    cout << "DOCUMENT TEXT ANALYSIS COMPLETED" << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}

