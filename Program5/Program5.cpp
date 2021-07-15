//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 5
//
//  File Name:         Program5.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          6/30/21
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 6
//
//  Description:
//     This program calculates and displays the average of a group 
//     of test scores, all integers, after the lowest score in 
//     the group has been dropped.
//
//***************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void developerInfo();
void getScore(int&);
double calcAverage(int, int, int, int, int, int, int&);
int findLowest(int, int, int, int, int, int);
void displayResults(double, int);

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    int score1, score2, score3, score4, score5, score6, lowest;

    developerInfo();    // Do not delete this statement

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    getScore(score6);

    double averageScore = calcAverage(score1, score2, score3, score4, score5, score6, lowest);
    displayResults(averageScore, lowest);

    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     getScore
// 
//  Description:  Asks user to enter a test score integer
//
//  Parameters:   Integer
//
//  Returns:      N/A 
//
//**************************************************************
void getScore(int& score)
{
    cout << "What is the test score: ";
    if (score > 0 || score < 100)
    {
        cin >> score;
    }
    else
    {
        cout << "Please enter a valid test score between 0-100" << endl;
    }
}

//***************************************************************
//
//  Function:     calcAverage
// 
//  Description:  Calulates the average score of the 5 highest test scores
//
//  Parameters:   6 integers, entered by the user
//
//  Returns:      A double of the average score
//
//**************************************************************
double calcAverage(int score1, int score2, int score3, int score4, int score5, int score6, int& lowest)
{
    double average;
    lowest = findLowest(score1, score2, score3, score4, score5, score6);

    if (score1 == lowest)
    {
        average = (score2 + score3 + score4 + score5 + score6) / 5.0;
    }
    else if (score2 == lowest)
    {
        average = (score1 + score3 + score4 + score5 + score6) / 5.0;
    }
    else if (score3 == lowest)
    {
        average = (score1 + score2 + score4 + score5 + score6) / 5.0;
    }
    else if (score4 == lowest)
    {
        average = (score1 + score2 + score3 + score5 + score6) / 5.0;
    }
    else if (score5 == lowest)
    {
        average = (score1 + score2 + score3 + score4 + score6) / 5.0;
    }
    else if (score6 == lowest)
    {
        average = (score1 + score2 + score3 + score4 + score5) / 5.0;
    }
    return average;
}

//***************************************************************
//
//  Function:     findLowest
// 
//  Description:  Finds the lowest score entered by the user
//
//  Parameters:   6 integers, entered by the user
//
//  Returns:      An integer of the lowest score entered by the user
//
//**************************************************************
int findLowest(int score1, int score2, int score3, int score4, int score5, int score6)
{
    int lowest;
    if (score1 <= score2 && score1 <= score3 && score1 <= score4 && score1 <= score5 && score1 <= score6)
    {
        lowest = score1;
    }
    else if (score2 <= score1 && score2 <= score3 && score2 <= score4 && score2 <= score5 && score2 <= score6)
    {
        lowest = score2;
    }
    else if (score3 <= score1 && score3 <= score2 && score3 <= score4 && score3 <= score5 && score3 <= score6)
    {
        lowest = score3;
    }
    else if (score4 <= score1 && score4 <= score2 && score4 <= score3 && score4 <= score5 && score4 <= score6)
    {
        lowest = score4;
    }
    else if (score5 <= score1 && score5 <= score2 && score5 <= score3 && score5 <= score4 && score5 <= score6)
    {
        lowest = score5;
    }
    else if (score6 <= score1 && score6 <= score2 && score6 <= score3 && score6 <= score4 && score6 <= score5)
    {
        lowest = score6;
    }
    return lowest;
}

//***************************************************************
//
//  Function:     displayResults
// 
//  Description:  Displays results of the average score and the lowest test score
//
//  Parameters:   The calculated double average and the integer lowest score
//
//  Returns:      N/A 
//
//**************************************************************
void displayResults(double avg, int lowest)
{
    cout << "The average test score is: " << avg << endl;
    cout << "The lowest test score is: " << lowest << endl;
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: Five"
        << endl
        << endl;
} // End of developer
