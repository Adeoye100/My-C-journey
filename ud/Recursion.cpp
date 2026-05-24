//
// Created by ad on 24/05/2026.
//
#include <iostream>
using namespace std;

// Factorial - the classic recursion example
int factorial(int n) {
    // Base case - the foundation
    if(n <= 1) return 1;

    // Recursive case - the tower rising
    return n * factorial(n - 1);
}

// Fibonacci - nature's recursive pattern
int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Tower of Hanoi - recursion's masterpiece
void towerOfHanoi(int n, char from, char to, char aux) {
    if(n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }

    towerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from);
}

// Binary search - recursion in algorithms
int binarySearch(int arr[], int left, int right, int target) {
    if(right >= left) {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target) return mid;

        if(arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);

        return binarySearch(arr, mid + 1, right, target);
    }
    return -1;
}

int main() {
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "10th Fibonacci: " << fibonacci(10) << endl;

    cout << "\nTower of Hanoi with 3 disks:\n";
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}