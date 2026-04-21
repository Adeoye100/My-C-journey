 //
// Created by ad on 15/04/2026.
//
#include "iostream"

using namespace std;

int main() {
    char grade;


   do {
       cout << "What's your grade: \n";
       cin >> grade;

       switch (grade) {
           case 'A':
               cout << "You did Excellently Well!";
               break;

           case 'B':
               cout << "You did Good, well done!";
               break;

           case 'C' :
               cout << "You can do better!";
               break;

           case 'D':
               cout << "D - Don't give up!";
               break;

           case 'E':
               cout << "This is not the 'E'-nd Of the world!";
               break;

           case 'F':
               cout << "Better Luck Next time!";
               break;

           default:
               cout << "Enter a proper grade (A-F)";
       }

   }while ( grade != 'a' && grade != 'b' && grade != 'c' && grade != 'd' && grade != 'e' && grade != 'f');
    return 0;
}
