#include <iostream>
using namespace std;

int main(){
    string var1, var2;
    // Take input variables
    cout << "Enter first string: " << endl;
    cin >> var1;
    cout << "Enter second string: " << endl;
    cin >> var2;
    cout << "Variable 1 before swap = " << var1 << endl;
    cout << "Variable 2 before swap = " << var2 << endl << endl;
    
    // Create a third variable to store temporarily
    string temp;
    temp = var1;
    var1 = var2;
    var2 = temp;

    // Print variables after swap 
    cout << "Variable 1 after swap = " << var1 << endl;
    cout << "Variable 2 after swap = " << var2 << endl << endl;

    return 0;
}