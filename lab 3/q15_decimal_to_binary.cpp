#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }

    vector<int> binaryNum;
    int temp = n;
    while (temp > 0) {
        binaryNum.push_back(temp % 2);
        temp = temp / 2;
    }

    cout << "Binary equivalent of " << n << " is: ";
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        cout << binaryNum[i];
    }
    cout << endl;

    return 0;
}
