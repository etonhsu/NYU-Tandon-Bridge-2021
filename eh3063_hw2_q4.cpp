#include <iostream>
using namespace std;

int main() {
    int first;
    int second;

    cout << "Please enter two positive integers, separated by a space: " << endl;
    cin >> first;
    cin >> second;

    cout << first << " + " << second << " = " << first + second << endl;
    cout << first << " - " << second << " = " << first - second << endl;
    cout << first << " * " << second << " = " << first * second << endl;

    //Have to account for division by 0
    if (second == 0) {
        cout << first << " / " << second << " = " << "Illegal Expression" << endl;
        cout << first << " div " << second << " = " << "Illegal Expression" << endl;
        cout << first << " mod " << second << " = " << "Illegal Expression" << endl;
    }

    else {
        cout << first << " / " << second << " = " << double(first) / double(second) << endl;
        cout << first << " div " << second << " = " << first / second << endl;
        cout << first << " mod " << second << " = " << first % second << endl;
    }


    return 0;
}
