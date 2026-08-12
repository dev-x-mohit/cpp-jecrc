#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (islower(ch)) {
        cout << "Converted: " << (char)toupper(ch) << endl;
    } else if (isupper(ch)) {
        cout << "Converted: " << (char)tolower(ch) << endl;
    } else {
        cout << "Not an alphabet character." << endl;
    }

    return 0;
}
