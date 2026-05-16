#ifndef UI_DISPLAY_H
#define UI_DISPLAY_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// Print horizontal line
void printLine(char ch = '=', int width = 50)
{
    cout << string(width, ch) << endl;
}

// Welcome Screen
void displayWelcome()
{
    system("cls");   // For Windows systems
    printLine('=');
    cout << "       *** MATH QUIZ CHALLENGE ***        " << endl;
    cout << "     Sharpen Your Skills, One Sum at a Time!" << endl;
    printLine('=');
    cout << endl;
    cout << "  Welcome! This quiz tests your arithmetic skills." << endl;
    cout << "  Choose a difficulty level and answer questions." << endl;
    cout << "  Your progress is saved automatically." << endl;
    cout << endl;
    printLine('-');
}

// Main Menu
void displayMenu()
{
    cout << endl;
    printLine('-');
    cout << "                MAIN MENU                " << endl;
    printLine('-');
    cout << "  [1]  Start Quiz" << endl;
    cout << "  [2]  View Progress" << endl;
    cout << "  [3]  Exit" << endl;
    printLine('-');
    cout << "  Enter your choice: ";
}

// Difficulty Menu
void displayDifficultyMenu()
{
    cout << endl;
    printLine('-');
    cout << "          SELECT DIFFICULTY               " << endl;
    printLine('-');
    cout << "  [1]  Easy   (+ and - with small numbers)" << endl;
    cout << "  [2]  Medium (* and / included)         " << endl;
    cout << "  [3]  Hard   (larger numbers, all ops)  " << endl;
    printLine('-');
    cout << "  Enter difficulty: ";
}

// Feedback after answer
void displayAnswerFeedback(bool isCorrect, int correctAnswer)
{
    if (isCorrect)
    {
        cout << "  Correct! Great job!" << endl;
    }
    else
    {
        cout << "  Wrong! The correct answer was: " << correctAnswer << endl;
    }
}

// Performance message
string getPerformanceMessage(double accuracy)
{
    if (accuracy >= 80.0)
        return "EXCELLENT! You're a Math Star!";
    else if (accuracy >= 50.0)
        return "GOOD! Keep practicing to improve!";
    else
        return "NEEDS IMPROVEMENT. Don't give up!";
}

// Final Report
void displayReport(const string& name, int totalQ, int correct, int wrong, int level)
{
    double accuracy = (totalQ > 0) ? ((double)correct / totalQ) * 100.0 : 0.0;

    string levelStr;
    if (level == 1)
        levelStr = "Easy";
    else if (level == 2)
        levelStr = "Medium";
    else
        levelStr = "Hard";

    cout << endl;
    printLine('*');
    cout << "             QUIZ REPORT CARD             " << endl;
    printLine('*');

    cout << left;
    cout << "  Player         : " << name << endl;
    cout << "  Difficulty     : " << levelStr << endl;

    printLine('-');

    cout << "  Total Questions: " << totalQ << endl;
    cout << "  Correct        : " << correct << endl;
    cout << "  Wrong          : " << wrong << endl;

    cout << fixed << setprecision(1);
    cout << "  Accuracy       : " << accuracy << " %" << endl;

    printLine('-');

    cout << "  " << getPerformanceMessage(accuracy) << endl;

    printLine('*');
    cout << endl;
}

// Progress History
void displayProgress(const string& name, int totalQ, int correct, int wrong)
{
    double accuracy = (totalQ > 0) ? ((double)correct / totalQ) * 100.0 : 0.0;

    cout << endl;
    printLine('=');
    cout << "           YOUR PROGRESS HISTORY           " << endl;
    printLine('=');

    cout << "  Player         : " << name << endl;
    cout << "  Total Attempted: " << totalQ << endl;
    cout << "  Total Correct  : " << correct << endl;
    cout << "  Total Wrong    : " << wrong << endl;

    cout << fixed << setprecision(1);
    cout << "  Overall Accuracy: " << accuracy << " %" << endl;

    printLine('-');

    cout << "  " << getPerformanceMessage(accuracy) << endl;

    printLine('=');
    cout << endl;
}

// Exit Screen
void displayExit()
{
    cout << endl;
    printLine('=');
    cout << "   Thank you for using Math Quiz Challenge!  " << endl;
    cout << "        Keep practising — you've got this!   " << endl;
    printLine('=');
    cout << endl;
}

#endif
