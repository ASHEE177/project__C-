#include <iostream>
#include <string>
using namespace std;

int main() {
    string day;
    cout << "Enter the day (e.g., Sunday, Monday): ";
    cin >> day;

    bool isLeaveDay = (day == "Sunday" || day == "sunday");
    bool isWorkDay = (day == "Monday" || day == "monday");

    if (isLeaveDay) {
        cout << "It's leave." << endl;
    } else if (isWorkDay) {
        cout << "Go to work." << endl;
    } else {
        cout << "Day not recognized or no info available." << endl;
    }

    return 0;
}