#include <bits/stdc++.h>
using namespace std;

int main() {
    string questions[5] = {
        "What is the capital of India?",
        "How many days are there in a week?",
        "Which planet is known as the Red Planet?",
        "What is 5 + 3?",
        "What is the national animal of India?"
    };

    string answers[5] = {
        "Delhi",
        "7",
        "Mars",
        "8",
        "Tiger"
    };

    string userAnswer;
    int score = 0;

    for(int i = 0; i < 5; i++) {
        cout << "\nQ" << i + 1 << ". " << questions[i] << endl;
        cin >> userAnswer;

        if(userAnswer == answers[i]) {
            cout << "Correct!\n";
            score++;
        } else {
            cout << "Wrong! Correct answer is " << answers[i] << endl;
        }
    }

    cout << "\nYour Score: " << score << "/5" << endl;

    return 0;
}
