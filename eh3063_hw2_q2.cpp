#include <iostream>
using namespace std;

int main() {
    int dollars;
    int cents;
    int total;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    cout << "Please enter the amount in the format of dollars and cents separated by a space:" << endl;
    cin >> dollars;
    cin >> cents;
    total = (dollars * 100) + cents;

    quarters = total / 25;
    total = total % 25;

    dimes = total / 10;
    total = total % 10;

    nickels = total / 5;
    total = total % 5;

    pennies = total;

    cout << dollars << " dollars and " << cents << " cents are: " << endl;
    cout << quarters << " quarters, " << dimes << " dimes, ";
    cout << nickels << " nickels, and " << pennies << " pennies";

    return 0;

}
