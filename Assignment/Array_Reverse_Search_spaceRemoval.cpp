//
// Created by ad on 28/04/2026.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string originalText;


    cout << "Enter a sentence or phrase: ";
    getline(cin, originalText); // Get the full string user's input (spaces included) using string functions


    // ! Reverse the string

    string reversedText = "";

    // Start at the very last character (length - 1) and count backward to 0
    for (int i = originalText.length() - 1; i >= 0; i--) {
        reversedText += originalText[i];
    }


    // ! Searches for a character

    char searchChar;
    bool isFound = false;
    int foundPosition = -1;

    cout << "Enter a single character to search for: ";
    cin >> searchChar;

    // Loop through the string from left to right
    for (int i = 0; i < originalText.length(); i++) {
        if (originalText[i] == searchChar) {
            isFound = true;
            foundPosition = i; // Save the exact index where it was found
            break;             // Stop searching the first match is found
        }
    }

    //! Remove spaces

    string noSpaceText = "";

    // Loop through and copy every character EXCEPT the space ' '
    for (int i = 0; i < originalText.length(); i++) {
        if (originalText[i] != ' ') {
            noSpaceText += originalText[i];
        }
    }


    // !  PRINTING THE RESULTS

    cout << "\n--- String Operations Results ---\n";
    cout << "Original String: " << originalText << endl;
    cout << "Reversed String: " << reversedText << endl;
    cout << "No-Space String: " << noSpaceText << endl;

    // ! search output loop :
    /*! Adding 1 to the position so it makes sense to a human (1st, 2nd, 3rd) */

    if (isFound) {
        cout << "Search Result:   '" << searchChar << "' was found at position " << (foundPosition + 1) << "." << endl;
    } else {
        cout << "Search Result:  '" << searchChar << "' was NOT found." << endl;
    }

    return 0;
}