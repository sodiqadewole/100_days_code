#include <iostream>
using namespace std;

int main()
{
    string cross_road, boat_or_swim, door_color;

    cout << "Welcome to Treasure Island" << endl;
    cout << "Your mission is to find the treasure" << endl;
    cout << "You are at a cross road, where do you want to go? type 'left' or 'right'" << endl;
    cin >> cross_road;

    if(cross_road == "left"){
        cout << "You come to a lake. There is an island in the middle of the lake.";
        cout << " Type 'wait' to wait for a boat. Type 'swim' to swim across." << endl;
        cin >> boat_or_swim;

        if(boat_or_swim == "wait"){
            cout << "You arrived at the island unharmed. There is a house with 3 doors";
            cout << " One red, one yellow, and one blue. Which color do you choose?" << endl;
            cin >> door_color;

            if (door_color == "red")
            {
                cout << "You entered a room of beasts. Game Over!" << endl;
                return 0;
            } 
            else if (door_color == "yellow")
            {
                cout << "You have entered a room of Saints. Welcome home!" << endl;
            } 
            else if (door_color == "blue")
            {
                cout << "Welcome home!" << endl;
            }
        else if(boat_or_swim == "swim"){
            cout << "Do you have a life vest? 'Yes' or 'No'" << endl;
            string vest;
            cin >> vest;
        }
        }
    } else if(cross_road == "right"){
        cout << "You have fallen into a hole. Game Over!" << endl;
        return 0;
    }
    else{
        cout << "You have entered and invalid option. Type 'left' or 'right'" << endl;
    }

}