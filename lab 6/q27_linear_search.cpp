#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 24, 32, 45, 50, 67, 89};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    bool found = false;

    cout << "Array elements: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element " << key << " found at index " << i << "." << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
