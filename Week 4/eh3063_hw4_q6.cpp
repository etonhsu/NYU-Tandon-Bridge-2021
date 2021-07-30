#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    //input the upper bound
    int n;

    cout << "Please input a positive integer: ";
    cin >> n;

    //use a for loop to iterate through all int from 1 - n
    for (int count = 1; count < n + 1; count++) {
        //find how many digits each number has
        int length = to_string(count).length();

        //isolate each digit and determine whether even or odd
        int even = 0;
        int odd = 0;
        int temp_count = count;

        for (int i = length; i > 0; i--) {
            int power = int(pow(10, i - 1));
            int digit = temp_count / power;

            //determine if even or odd
            if (digit % 2 == 0) {
                even++;
            }

            else {
                odd++;
            }

            //adjust the value of count for next digit
            temp_count = temp_count % power;
        }

        //determine if more even
        if (even > odd) {
            cout << count << endl;
        }
    }

    return 0;
}
