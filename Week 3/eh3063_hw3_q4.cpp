#include <iostream>
using namespace std;

int main() {
    const int FlOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;

    double num;
    int method;
    int sol;

    cout << "Please enter a Real number:" << endl;
    cin >> num;

    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> method;

    switch(method) {
        case FlOOR_ROUND:
            sol = int(num);
            break;
        case CEILING_ROUND:
            sol = int(num + 1);
            break;
        case ROUND:
            if (num - int(num) < 0.5) {
                sol = int(num);
            }

            else {
                sol = int(num + 1);
            }
            break;
    }

    cout << sol;


    return 0;
}
