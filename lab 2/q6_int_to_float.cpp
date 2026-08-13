// Write a program to convert an integer into the corresponding floating point number.

#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    float f = (float)n;
    cout << "Floating point number: " << f << endl;

    return 0;
}
