// Write a program to interchange the largest and the smallest number in the array.

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0 || n > 1000) {
        cout << "Please enter a valid positive number for n." << endl;
        return 1;
    }

    int arr[1000];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) return 0;

    int minIdx = 0, maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Interchange largest and smallest
    int temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;

    cout << "Array after interchanging largest and smallest: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
