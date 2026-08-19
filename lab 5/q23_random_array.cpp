// Write a program to read and display n random numbers using an array.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of random numbers to generate: ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Please enter a valid positive number for n." << endl;
        return 1;
    }

    int arr[1000];
    srand(time(0)); // Seed the random number generator

    cout << "Generated random numbers: ";
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generate a random number between 0 and 99
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
