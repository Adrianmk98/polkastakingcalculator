#include <iostream>
using namespace std;
/*
 DOCUMENTATION

 Program Purpose:
 	This program allows for a person to input their Polkadot staking information, in order to determine the gains which can be made from staking over a longer period of time.


 Variables:
 polka (double) - The number of the coin you have
 stake (double) - the price average when starting staking
 coinprice (double) - the current price of the coin
 avgprice (double) - average price determined from
 bookvalue (double) - book value of the coins
 loop (int) - determined the number of loops for 100 days

*/
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
