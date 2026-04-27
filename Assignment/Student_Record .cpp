//
// Created by ad on 25/04/2026.
//
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    int numStudents;

    cout << "--- Lecturer Gradebook System ---\n";
    cout << "How many students are you computing results for?: ";
    cin >> numStudents;

    // We set a maximum capacity for simplicity.
    const int MAX = 50;

    // Safety check in case the user enters a huge number
    if (numStudents > MAX) {
        cout << "Limiting to maximum capacity of 50 students.\n";
        numStudents = MAX;
    }

    // 1. Parallel Arrays Setup
    string names[MAX];               // 1D array for names
    float scores[MAX][6];            // 2D array: Rows = Students, Cols = 6 Courses
    float averages[MAX];             // 1D array for calculated averages

    // Variables to track the highest scorer
    float highestScore = -1.0f;
    string topStudent = "";

    // 2. Data Entry & Calculation Loop
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter name for Student #" << (i + 1) << " (single word): ";
        cin >> names[i];

        float sum = 0.0f; // Reset sum for each student

        // Inner loop: Get 6 course scores for this specific student
        for (int j = 0; j < 6; j++) {
            cout << "  Enter score for Course " << (j + 1) << ": ";
            cin >> scores[i][j];
            sum += scores[i][j];
        }

        // Calculate average
        averages[i] = sum / 6.0f;

        // Check if this student is the new highest scorer
        if (averages[i] > highestScore) {
            highestScore = averages[i];
            topStudent = names[i];
        }
    }

    // 3. Tabular Output
    cout << "\n========================================================================\n";
    // Header Row
    cout << left << setw(15) << "NAME"
         << setw(8) << "C1" << setw(8) << "C2" << setw(8) << "C3"
         << setw(8) << "C4" << setw(8) << "C5" << setw(8) << "C6"
         << "AVERAGE\n";
    cout << "------------------------------------------------------------------------\n";

    cout << fixed << setprecision(1); // Show 1 decimal place for neatness

    // Print each student's data
    for (int i = 0; i < numStudents; i++) {
        cout << left << setw(15) << names[i]; // Print name

        // Print the 6 course scores
        for (int j = 0; j < 6; j++) {
            cout << setw(8) << scores[i][j];
        }

        // Print their average at the end of the row
        cout << averages[i] << "\n";
    }
    cout << "========================================================================\n";

    // 4. Highest Scorer Output
    cout << "\n>>> TOP PERFORMER <<<\n";
    cout << "Highest Scorer: " << topStudent << " with an average of " << highestScore << "\n";

    return 0;
}