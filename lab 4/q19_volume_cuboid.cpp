#include <iostream>

using namespace std;

// Function to calculate the volume of a cuboid with default arguments
double calculateVolume(double length = 1.0, double width = 1.0, double height = 1.0) {
    return length * width * height;
}

int main() {
    double l, w, h;
    cout << "Enter length, width, and height of the cuboid (separated by space): ";
    cin >> l >> w >> h;
    
    cout << "Volume with all provided arguments: " << calculateVolume(l, w, h) << endl;
    cout << "Volume with length and width only (default height): " << calculateVolume(l, w) << endl;
    cout << "Volume with length only (default width and height): " << calculateVolume(l) << endl;
    cout << "Volume with all default arguments: " << calculateVolume() << endl;
    
    return 0;
}
