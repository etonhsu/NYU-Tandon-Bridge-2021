#include <iostream>
using namespace std;

int main() {
    //const variables for minutes in hour and day
    const int HOUR = 60;
    const int DAY = 24 * HOUR;

    //variables for how long John works
    int johnDays;
    int johnHrs;
    int johnMin;
    int johnTot;

    //variables for how long Bill works
    int billDays;
    int billHrs;
    int billMin;
    int billTot;

    //convert days + hours + minutes into minutes
    cout << "Please enter the days John has worked: ";
    cin >> johnDays;
    cout << "Please enter the hours John has worked: ";
    cin >> johnHrs;
    cout << "Please enter the minutes John has worked: ";
    cin >> johnMin;
    johnTot = (johnDays * DAY) + (johnHrs * HOUR) + (johnMin);

    cout << endl << "Please enter the days Bill has worked: ";
    cin >> billDays;
    cout << "Please enter the hours Bill has worked: ";
    cin >> billHrs;
    cout << "Please enter the minutes Bill has worked: ";
    cin >> billMin;
    billTot = (billDays * DAY) + (billHrs * HOUR) + (billMin);

    int combined;
    int totalDays;
    int totalHrs;
    int totalMin;

    //use combined minutes to convert to days + hours + minutes
    combined = johnTot + billTot;

    totalDays = combined / DAY;
    combined = combined % DAY;

    totalHrs = combined / HOUR;
    combined = combined % HOUR;

    totalMin = combined;

    cout << endl << "The total time both of them worked together is: ";
    cout << totalDays << " days, " << totalHrs << " hours, and " << totalMin << " minutes.";

    return 0;
}
