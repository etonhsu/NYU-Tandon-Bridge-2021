#include <iostream>
#include <string>
using namespace std;

int main() {
    //define roman numeral constants
    const int M = 1000;
    const int D = 500;
    const int C = 100;
    const int L = 50;
    const int X = 10;
    const int V = 5;
    const int I = 1;

    //ask for integer input
    int total;

    cout << "Enter decimal number: ";
    cin >> total;

    //initialize empty roman numeral string
    string rom_numeral;

    //use while loop to build string
    int number = total;

    while (number != 0) {
        //start from the largest numeral and work down
        if (number > M) {
            //append the char for each numeral onto the final string
            rom_numeral += 'M';
            number -= M;
        }

        else if (number >= D) {
            rom_numeral += 'D';
            number -= D;
        }

        else if (number >= C) {
            rom_numeral += 'C';
            number -= C;
        }

        else if (number >= L) {
            rom_numeral += 'L';
            number -= L;
        }

        else if (number >= X) {
            rom_numeral += 'X';
            number -= X;
        }

        else if (number >= V) {
            rom_numeral += 'V';
            number -= V;
        }

        else if (number >= I) {
            rom_numeral += 'I';
            number -= I;
        }
    }

    cout << total << " is " << rom_numeral << endl;



    return 0;
}
