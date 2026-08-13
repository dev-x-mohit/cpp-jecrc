#include <iostream>

using namespace std;

const double PI = 3.14159265358979323846;

double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    cout << "Area of the circle is: " << calculateArea(radius) << endl;
    
    return 0;
}
