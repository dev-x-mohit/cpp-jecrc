#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    double avg = (double)sum / n;
    cout << "Average of first " << n << " natural numbers is: " << avg << endl;
    return 0;
}
