#include <iostream>

using namespace std;

int main() {
    int startDay, daysInMonth;
    
    cout << "Enter the start day of the month (0 for Sun, 1 for Mon, ..., 6 for Sat): ";
    cin >> startDay;
    cout << "Enter the number of days in the month: ";
    cin >> daysInMonth;
    
    cout << "\nSun\tMon\tTue\tWed\tThu\tFri\tSat\n";
    
    // Print leading spaces
    for (int i = 0; i < startDay; i++) {
        cout << "\t";
    }
    
    int currentDay = startDay;
    for (int i = 1; i <= daysInMonth; i++) {
        cout << i << "\t";
        currentDay++;
        if (currentDay > 6) {
            currentDay = 0;
            cout << endl;
        }
    }
    cout << endl;
    
    return 0;
}
