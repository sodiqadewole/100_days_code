#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int get_count(string to_search, char to_find)
{
    int count = 0;
    for (int i=0; to_search.length(); i++){
        if (to_search.find(to_find)){
            count += 1;
        }
    }
    return count;
}
int main()
{
    string user_name;
    string partner_name;
    int idx;
    int score = 0, total_score = 0;
    string string_to_find = "TRUELOVE";

    cout << "Enter your name: ";
    cin >> user_name;

    // cout << "Enter your partner's name: ";
    // cin >> partner_name;

    // Loop through the entered user name

    for (int i=0; string_to_find.length(); i++)
    {
        score = get_count(user_name, string_to_find[i]);
        total_score += score;
        if (score > 0)
        {
            cout << string_to_find[i] << " found in " << user_name << endl;
        } 
        else 
        {
        cout << string_to_find[i] << " not found in " << user_name << endl;
        }
    }   

return total_score;
}