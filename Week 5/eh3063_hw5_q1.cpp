#include <iostream>
using namespace std;

int main() {
    //enter table parameter
    int size;

    cout << "Please enter a positive integer:" << endl;
    cin >> size;

    //generate a size x size times table
    for (int i = 1; i < size + 1; i++) {
        for (int j = 1; j < size + 1; j++) {
            cout << i * j << '\t';
        }
        cout << endl;
    }
    return 0;
}
