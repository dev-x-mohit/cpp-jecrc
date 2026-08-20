#include <iostream>
using namespace std;

int main() {
    int arr[2][2][2];

    cout << "Enter 8 elements for a 2x2x2 array:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\nThe 2x2x2 array elements are:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " << arr[i][j][k] << endl;
            }
        }
    }

    return 0;
}
