#include <iostream>
#include <string>
using namespace std;

int main() {
    //input the number of lines
    int lines;

    cout << "Please enter the number of lines: ";
    cin >> lines;

    //use number of lines to generate pattern
    int length = 1 + (2 * (lines - 1));

    //generate the top half of the hourglass
    for (int i = lines; i > 0; i--) {
        int temp_length = 1 + (2 * (i - 1));

        //determine correct number of stars and spaces
        string stars(temp_length, '*');
        string spaces((length - temp_length) / 2, ' ');

        //output each line
        cout << spaces << stars << spaces << endl;
    }

    //generate the bottom half of the hourglass
    for (int i = 1; i < lines + 1; i++) {
        int temp_length = 1 + (2 * (i - 1));

        //determine correct number of stars and spaces
        string stars(temp_length, '*');
        string spaces((length - temp_length) / 2, ' ');

        //output each line
        cout << spaces << stars << spaces << endl;
    }

    return 0;
}
