#include <iostream>
using namespace std;

int main(){
    // Declare the string variables
    string FName, LName;
    // Get the first name
    cout << "What is your First Name: " << endl;
    cin >> FName;
    // Get the last name
    cout << "What is your Last Name: " << endl;
    cin >> LName;
    // Print first name and last name to console
    cout << "Your name is: " << FName << " " << LName << endl;
    cout << "Thank you for using this program!" << endl;
    return 0;
}