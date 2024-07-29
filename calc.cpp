#include <iostream>
using namespace std;

int main() {
    double polka,stake,coinprice,avgprice,bookvalue;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<< ltm->tm_mday << endl;
    cout << "enter amount of dot" << endl;
    cin >> polka;
    cout << "enter stake average" << endl;
    cin >> stake;
    cout << "enter value of coin" << endl;
    cin >> coinprice;
    cout << "enter bookvalue" << endl;
    cin >> bookvalue;
    double perday=polka*((stake/100)/365);
    cout << perday << endl;
    cout << perday*7 << endl;
    cout << perday*365 << endl;
    for(int loop=0; loop<1000; loop++)
    {

        polka=polka+perday;
        avgprice=avgprice-(perday*avgprice);
        cout << loop << ": " << polka << " Price of Coins " << polka*coinprice << "Average: " << bookvalue/polka <<endl;
    }
    return 0;
}
