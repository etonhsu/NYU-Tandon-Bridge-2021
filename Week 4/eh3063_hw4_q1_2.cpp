#include <iostream>
using namespace std;

int main() {
    int times;

    cout << "Please enter a positive integer: ";
    cin >> times;

    //run the for loop
    int total = 0;

    for (int i = 0; i < times; i++) {
        total += 2;
        cout << total << endl;
    }


    return 0;
}
