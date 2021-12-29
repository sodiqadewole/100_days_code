#include <iostream>
using namespace std;


int main(){
    int year;
    bool leap_year;

    cout << "Enter a year to check for leap year: ";
    cin >> year;

    // Check if year is divisible by 4
    if (year % 4 == 0){
        // Check if year is divisible by 100
        if (year % 100 != 0){
            // Check if year is divisible by 400
            if (year % 400 == 0){
                leap_year = true;
                // return leap_year;
                } else {
                    leap_year = false;
                    //return leap_year;
                    }
        } else {
            leap_year = false;
            // return leap_year;
        }
    } else {
        leap_year = false;
        // return leap_year;
        }

    if (leap_year == true){
        cout << "Year " << year << " is a leap year" << endl;
    } else {
        cout << "Year " << year << " is not a leap year" << endl;
    }
}