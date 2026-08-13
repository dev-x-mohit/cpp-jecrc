#include <iostream>

using namespace std;

int main() {
    int num, largest;
    cout << "Enter 10 numbers:" << endl;
    
    cin >> largest; // Read the first number
    
    for (int i = 1; i < 10; i++) {
        cin >> num;
        largest = (num > largest) ? num : largest;
    }
    
    cout << "The largest number is: " << largest << endl;
    return 0;
}
