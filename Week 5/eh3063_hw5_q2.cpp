#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //generate random number 1-100
    int number;

    srand(time(0));
    number = (rand() % 100) + 1;

    //ask the user for their guess
    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    //use while loop to continuously run game
    const int tot_tries = 5;
    int lower = 1;
    int upper = 100;
    int tries = 5;
    int guess;

    while (tries > 0 && guess != number) {
        cout << "Range: [" << lower << ", " << upper << "], ";
        cout << "Number of guesses left: " << tries << endl;
        cout << "Your guess: ";
        cin >> guess;
        tries--;

        //check if the guess was correct and adjust ranges
        if (guess == number) {
            cout << "Congrats! You guessed my number in " << tot_tries - tries << "guesses";
            cout << endl  << endl;
        }

        else {
            if (guess > number) {
                cout << "Wrong! My number is smaller.";
                cout << endl  << endl;
                upper = guess - 1;
            }

            else if (guess < number) {
                cout << "Wrong! My number is bigger.";
                cout << endl  << endl;
                lower = guess + 1;
            }

            if (tries == 0) {
                cout << "Out of guesses! My number is " << number;
                cout <<  endl  << endl;
            }
        }

    }

    return 0;
}
