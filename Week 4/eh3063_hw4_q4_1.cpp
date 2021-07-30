#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //determine length and values of dataset
    int length;

    cout << "Please enter the length of the sequence: ";
    cin >> length;

    //initialize array to hold data
    int dataset[length];

    cout << "Please enter your sequence:" << endl;

    //load each value into the array
    for (int i = 0; i < length; i++) {
        int values;
        cin >> values;
        dataset[i] = values;
    }

    //determine the geometric mean
    int product = 1;

    for (int i = 0; i < length; i++) {
        product *= dataset[i];
    }

    double root = 1.0 / length;
    double mean = pow(product, root);

    //output the result
    cout << "The geometric mean is: " << mean << endl;

    return 0;
}
