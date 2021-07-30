#include <iostream>
using namespace std;

int main() {
    int times;

    cout << "Please enter a positive integer: ";
    cin >> times;

    //run the loop
    int iter = 0;
    int total = 0;

    while (iter < times) {
        total += 2;
        cout << total << endl;
        iter++;
    }


    return 0;
}
