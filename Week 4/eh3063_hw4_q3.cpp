#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //get decimal input
    int number;

    cout << "Enter decimal number: ";
    cin >> number;

    //make a copy of the number
    int copy = number;

    //use while loop to convert to binary
    int counter = 0;
    double binary = 0;

    while (copy != 0) {
        binary += (copy % 2) * pow(10, counter);
        copy /= 2;
        counter++;
    }

    //output the result
    cout << "The binary representation of " << number << " is " << binary;


    return 0;
}
