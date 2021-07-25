#include <iostream>
#include <string>
using namespace std;

int main() {
    int lbs;
    int in;
    string status;

    cout << "Please enter weight (in pounds): ";
    cin >> lbs;

    cout << "Please enter height (in inches): ";
    cin >> in;

    //convert weight and height into kg and m and calculate BMI
    double kg;
    double m;
    double BMI;

    kg = double(lbs) * 0.453592;
    m = double(in) * 0.0254;
    BMI = kg / (m * m);

    if (BMI < 18.5) {
        status = "Underweight";
    }

    else if (BMI > 18.5 && BMI < 25) {
        status = "Normal";
    }

    else if (BMI > 25 && BMI < 30) {
        status = "Overweight";
    }

    else if (BMI > 30) {
        status = "Obese";
    }

    cout << "The weight status is: " << status << endl;

    return 0;
}
