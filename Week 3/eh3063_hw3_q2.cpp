#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int grad_year;
    int curr_year;
    int year_diff;
    string status;

    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your graduation year: ";
    cin >> grad_year;

    cout << "Please enter current year: ";
    cin >> curr_year;

    year_diff = grad_year - curr_year;

    if (year_diff > 4) {
        status = "not in college yet";
    }

    else if (year_diff <= 0) {
        status = "Graduated";
    }

    else if (year_diff == 4) {
        status = "a Freshman";
    }

    else if (year_diff == 3) {
        status = "a Sophomore";
    }

    else if (year_diff == 2) {
        status = "a Junior";
    }

    else if (year_diff == 1) {
        status = "a Senior";
    }

    cout << name << ", you are " << status;

    return 0;
}
