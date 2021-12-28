#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    // Declare variables
    float bill, tip, split;
    int persons;

    // get the bill amount from user and check for negative or zero bill
    cout << "Welcome to the tip calculator." << endl;
    do {
        cout << "What is the total bill?" << endl;
        cout << "You cannot have a negative or zero value bill. Enter at least $1" << endl; 
        cout << "$";
        cin >> bill;
    } while (bill <= 0 or isnan(bill));

    // Take the number of persons and check for negative values
    do{
        cout << "How many people to split the bill? ";
        cout << "Enter at least 1 person to get the bill ";
        cin >> persons;
    } while (persons <= 0 or isnan(persons));
    
    do{
        cout << "What percentage tip would you like to give? 10, 12, or 15? ";
        cin >> tip;
    } while (tip < 0 or isnan(tip));

    float total_bill = bill + ((tip/100) * bill);
    split = total_bill / persons;

    cout << "Each person is to pay $" << split << endl;

    return 0;
}