#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
//function prototype
string questionsAsk(string question, string answerA, string answerB, string answerC, string answerD, int correctAnswer);

char userAnswer;
string userInput;

int main() {
	
	


	return 0;
}
//function definitions
string questionsAsk(string question, string answerA, string answerB, string answerC, string answerD, int correctAnswer) {
    userAnswer = toupper(userAnswer);

    switch (userAnswer) {
    case 'A':
        if (correctAnswer == 1) {
            return answerA;
        }
        break;
    case 'B':
        if (correctAnswer == 2) {
            return answerB;
        }
        break;
    case 'C':
        if (correctAnswer == 3) {
            return answerC;
        }
        break;
    case 'D':
        if (correctAnswer == 4) {
            return answerD;
        }
        break;
    default:
        break;
    }
    return"";
}