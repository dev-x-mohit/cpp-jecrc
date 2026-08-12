#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i) / i;
    }

    cout << "Sum of the series is: " << sum << endl;
    return 0;
}
