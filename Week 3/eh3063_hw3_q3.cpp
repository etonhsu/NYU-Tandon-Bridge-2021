#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Please enter value of a: ";
    cin >> a;
    cout << "Please enter value of b: ";
    cin >> b;
    cout << "Please enter value of c: ";
    cin >> c;

    //determine the value of the discriminant
    double disc = (b * b) - (4 * a * c);

    //use discriminant to determine # of solutions and value of roots
    if (a == 0 && b == 0 && c == 0) {
        cout << "This equation has no solutions" << endl;
    }

    else if (disc < 0) {
        cout << "This equation has no real solutions" << endl;
    }

    else if (disc == 0) {
        double root_1 = -b / (2 * a);
        cout << "This equation has a single real solution. x = " << root_1 << endl;
    }

    else if (disc > 0) {
        double root_1 = (-b + sqrt(disc)) / (2 * a);
        double root_2 = (-b - sqrt(disc)) / (2 * a);
        cout << "This equation has two real solutions. x = " << root_1 << ", " << root_2 << endl;
    }

    return 0;
}
