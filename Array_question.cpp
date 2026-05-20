//
// Created by ad on 20/05/2026.
//
#include "iostream"

using namespace std;

int main() {
    string questions[] = {  "1. What year was cpp created?: ",
                            "2. Who invented cpp?: ",
                            "3. What is the predecessor of cpp?: ",
                            "4. When was I born?: " };

    char answerKey[] = {'C', 'B', 'A', 'C'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        string options[][4] =  {
            { "A. 1969", "B. 1975", "C. 1985", "D. 1983"},
            {"A. John F. Kennedy", "B. Bjarne Stroustrup", "C. Linus Trovald", "D. Marcus Aureleos"},
            {"A. C", "B. C+", "C. Assembly", "D. Haskel"},
            {"A. 1999", "B. 2000", "C. 2007", "D. 2009"},
        };
        cout << "*************" << endl;
        cout << questions[i] << endl;
        cout << "*************" << endl;

        for (int j = 0; j <  sizeof(options[i])/sizeof(options[i][0]); j++) {
            cout << options[i][j] << endl;

        }

        cin >> guess;guess = toupper(guess);

        if(guess == answerKey[i]) {
            cout << "CORRECT\n";
            score++;
        }else {
            cout << "WRONG\n";
            cout << "ANSWER: " << answerKey[i] << '\n';
        }
    }

    cout << "*************" << endl;
    cout << " *   RESULTS   * \n";
    cout << "*************" << endl;
    cout << "CORRECT GUESSES: " << score << endl;
    cout << "# of QUESTIONS: " << size << endl;
    cout << "SCORE: " << (score/static_cast<double>(size))*100 << "%" << endl;
    cout << "*************" << endl;

    return 0;
}