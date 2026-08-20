#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 5, 3, 9};
    int arr2[] = {2, 8, 4};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    int n3 = n1 + n2;
    int arr3[n3];

    // Copy elements of first array
    for(int i = 0; i < n1; i++) {
        arr3[i] = arr1[i];
    }
    
    // Copy elements of second array
    for(int i = 0; i < n2; i++) {
        arr3[n1 + i] = arr2[i];
    }

    cout << "First array: ";
    for(int i = 0; i < n1; i++) cout << arr1[i] << " ";
    cout << endl;

    cout << "Second array: ";
    for(int i = 0; i < n2; i++) cout << arr2[i] << " ";
    cout << endl;

    cout << "Merged array: ";
    for(int i = 0; i < n3; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
