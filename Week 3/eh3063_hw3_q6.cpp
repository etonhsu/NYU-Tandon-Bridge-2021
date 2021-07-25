#include <iostream>
#include <string>
using namespace std;

int main() {
    int hour;
    int min;
    char temp;
    string day;
    int length;
    double cost;

    cout << "Please enter the time of the call: ";
    cin >> hour >> temp >> min;

    cout << "Please enter the day of the week: ";
    cin >> day;

    cout << "Please enter the length of the call (in minutes): ";
    cin >> length;

    //use if statements to determine different rates
    if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") {
        if (hour >= 8 && hour < 18) {
            cost = min * 0.40;
        }

        else if (hour < 8 || hour >= 18) {
            cost = min * 0.25;
        }
    }

    else if (day == "Sa" || day == "Su") {
        cost = min * 0.15;
    }

    cout << "The cost of your long distance call will be: $" << cost << endl;

    return 0;
}
