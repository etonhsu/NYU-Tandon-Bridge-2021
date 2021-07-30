#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    //input dataset
    cout << "Please enter a non-empty sequence of positive integers, ";
    cout << "each one in a separate line. End your sequence by typing -1:" << endl;

    int number = 0;
    vector<int> dataset;

    //use while loop to push values into dataset
    while (number != -1) {
        cin >> number;
        dataset.push_back(number);
    }

    //remove -1 from the dataset
    dataset.pop_back();

    //determine geometric mean
    int product = 1;
    int length = dataset.size();

    for (int i = 0; i < length; i++) {
        product *= dataset[i];
    }

    double root = 1.0 / length;
    double mean = pow(product, root);

    //output the result
    cout << "The geometric mean is: " << mean << endl;

    return 0;
}
