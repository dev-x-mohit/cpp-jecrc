#include <iostream>

using namespace std;

// Overloaded functions to add values of different data types (Static Polymorphism)
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int int1 = 5, int2 = 10;
    double d1 = 5.5, d2 = 10.2;
    float f1 = 3.2f, f2 = 1.1f;
    
    cout << "Sum of integers " << int1 << " and " << int2 << " is: " << add(int1, int2) << endl;
    cout << "Sum of doubles " << d1 << " and " << d2 << " is: " << add(d1, d2) << endl;
    cout << "Sum of floats " << f1 << " and " << f2 << " is: " << add(f1, f2) << endl;
    
    return 0;
}
