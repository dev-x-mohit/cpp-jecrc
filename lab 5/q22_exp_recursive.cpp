// Write a program to calculate exp (x,y) using recursive functions.

#include <iostream>

using namespace std;

double power(double x, int y) {
    if (y == 0)
        return 1;
    if (y > 0)
        return x * power(x, y - 1);
    // For negative exponents
    return 1.0 / power(x, -y);
}

int main() {
    double x;
    int y;
    cout << "Enter base (x) and exponent (y): ";
    cin >> x >> y;
    cout << x << " ^ " << y << " = " << power(x, y) << endl;
    return 0;
}
