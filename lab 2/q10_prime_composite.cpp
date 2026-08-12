#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither prime nor composite." << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " is a prime number." << endl;
        } else {
            cout << n << " is a composite number." << endl;
        }
    }

    return 0;
}
