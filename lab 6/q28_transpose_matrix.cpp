#include <iostream>
using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int trans[3][3];

    // Transpose logic
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    cout << "Original Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nTransposed Matrix:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << trans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
