#include <iostream>
using namespace std;

int main(){
    int age;
    int years_left, months, weeks, days;

    cout << "Enter your age: ";
    cin >> age;

    years_left = 90 - age;
    months = 12 * years_left;
    weeks = 52 * years_left;
    days = 365 * years_left;

    cout << "If you are going to live up to 90 years, you already lived for " << 52 * age << " weeks" << endl; 
    cout << "You have " << years_left << " years left." << endl;
    cout << "You have " << months << " months left." << endl;
    cout << "You have " << weeks << " weeks left." << endl;
    cout << "You have " << days << " days left." << endl;
}