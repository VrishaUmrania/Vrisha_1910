#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "**********************************************" << endl;
    cout << "        SPORTS EVENT SCORE ANALYSIS" << endl;
    cout << "**********************************************" << endl;

    cout << "\nEnter Number of Participants: ";
    cin >> n;

    
    string participantID[n];
    string participantName[n];
    int score[n];

    
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Participant ID: ";
        cin >> participantID[i];

        cout << "Enter Participant Name: ";
        cin >> participantName[i];

        cout << "Enter Score: ";
        cin >> score[i];
    }

    
    cout << "\n---------------------------------------------" << endl;
    cout << "          Participant Performance" << endl;
    cout << "---------------------------------------------" << endl;

    cout << left << setw(10) << "ID"
         << setw(15) << "Name"
         << setw(10) << "Score" << endl;

    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left << setw(10) << participantID[i]
             << setw(15) << participantName[i]
             << setw(10) << score[i] << endl;
    }

    cout << "---------------------------------------------" << endl;

    
    int totalScore = 0;
    int highestScore = score[0];
    int lowestScore = score[0];

    for (int i = 0; i < n; i++)
    {
        totalScore += score[i];

        if (score[i] > highestScore)
        {
            highestScore = score[i];
        }

        if (score[i] < lowestScore)
        {
            lowestScore = score[i];
        }
    }

    
    double averageScore = (double)totalScore / n;

    
    cout << "\nTotal Score: " << totalScore << endl;
    cout << fixed << setprecision(2);
    cout << "Average Score: " << averageScore << endl;
    cout << "Highest Score: " << highestScore << endl;
    cout << "Lowest Score: " << lowestScore << endl;

    return 0;
}