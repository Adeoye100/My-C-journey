//
// Created by ad on 18/05/2026.
//
#include "iostream"

using namespace std;

/* Basically  for searching the index number of a single number
 * (i.e. index of 1 is 0, 2 is 1),
  ~ as defined in the numbers array.
 */

// int searchArray(string array, int size, string element);

void getline(const istream & basic_istream);

int searchArray(string * foods, int size, const string & string);

int main() {
    string foods[] ={"Eba","Rice", "Semo", "Poundo"};
    // int numbers[] = {1,2,3,4,5,6,7};
    // int size = sizeof(numbers)/sizeof(numbers[0]);
    int size = sizeof(foods)/sizeof(foods[0]);
    int index;
    string myfood;

    cout << "Enter an element to search for: " << endl;
    getline(cin >> myfood);
    index = searchArray(foods, size, myfood);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    }else {
        cout << "Element not found" << endl;
    }

    return 0;
}

int searchArray(string array[], int size, string element) {

    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1; //Not found
}
