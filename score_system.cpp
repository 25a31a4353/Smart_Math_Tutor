#include <iostream>
using namespace std;

// Global score variables
int score = 0;
int correctCount = 0;
int wrongCount = 0;

// Check answer and update score
bool checkAnswer(int userAnswer, int correctAnswer)
{
    if (userAnswer == correctAnswer)
    {
        score += 10;
        correctCount++;
        return true;
    }
    else
    {
        wrongCount++;
        return false;
    }
}

// Calculate accuracy percentage
double calculateAccuracy(int totalQuestions)
{
    return (double)correctCount / totalQuestions * 100.0;
}

// Display final score summary
void displayScore(int totalQuestions)
{
    double accuracy = calculateAccuracy(totalQuestions);

    cout << "\n===== RESULT =====" << endl;
    cout << "Score: " << score << endl;
    cout << "Correct Answers: " << correctCount << endl;
    cout << "Wrong Answers: " << wrongCount << endl;
    cout << "Accuracy Percentage: " << accuracy << "%" << endl;
}
