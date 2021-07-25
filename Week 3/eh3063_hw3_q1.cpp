#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double price_1;
    double price_2;
    double tax_rate;
    char club_card;
    double base_price;

    cout << setprecision(7);

    cout << "Enter price of first item: ";
    cin >> price_1;

    cout << "Enter price of second item: ";
    cin >> price_2;

    cout << "Does customer have a club card? (Y/N): ";
    cin >> club_card;

    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin >> tax_rate;

    base_price = price_1 + price_2;

    //determine which of the two items is more expensive
    double lower_price;
    double higher_price;

    if (price_1 <= price_2) {
        lower_price = price_1;
        higher_price = price_2;
    }

    else {
        lower_price = price_2;
        higher_price = price_1;
    }

    //check whether the customer has a club card and determine discount price
    double discount_price;
    double total_price;

    if (club_card == 'Y' || club_card == 'y') {
        discount_price = (higher_price + (lower_price / 2)) * 0.9;
    }

    else {
        discount_price = higher_price + (lower_price / 2);
    }

    //find the total price by applying the tax rate
    total_price = discount_price * (1 + (tax_rate / 100));

    cout << "Base price: " << base_price << endl;
    cout << "Price after discounts: " << discount_price << endl;
    cout << "Total price: " << total_price;

    return 0;
}
