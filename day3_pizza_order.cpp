#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int add_pepperoni(string add_pepperoni, string size){
    if (add_pepperoni == "N"){
        return 0;
    } else if (add_pepperoni == "Y" && size == "S"){
        return 2;
    }else if (add_pepperoni == "Y" && size == "M"){
        return 3;
    }else if (add_pepperoni == "Y" && size == "L"){
        return 3;
    }
}

int extra_cheese(string cheese){
    if (cheese == "N"){
        return 0;
    } else {
        return 1;
        }
}

int main()
{
    int bill = 0;
    string size;
    string pepperoni;
    string cheese;
    int pepperoni_cost;
    int cheese_cost;

    do 
    {
        cout << "What size of pizza do you want? S = small; M = Medium; L = Large" << endl;
        cin >> size;
    } while (size.empty());

    do
    {
    cout << "Do you want to add pepperoni? Y or N" << endl;
    cin >> pepperoni;
    } while (pepperoni.empty());
    
    do
    {
    cout << "Do you want to add extra cheese? Y or N" << endl;
    cin >> cheese;
    } while (cheese.empty());

    pepperoni_cost = add_pepperoni(pepperoni, size);
    cheese_cost = extra_cheese(cheese);

    
    // Check size of pizza ordered
    if (size == "S" || size == "s")
    {
        bill += 15;
    } else if (size == "M" || size == "m")
    {
        bill += 20;
    } else if (size == "L" || size == "l")
    {
        bill += 25;
    }

    bill += add_pepperoni(pepperoni, size) + extra_cheese(cheese);
    cout << "Your total bill is: " << bill << endl;
}

