#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int get_count(string to_search, char to_find)
{
    int count = 0;
    // cout << "Length of string to search is " << to_search.length() << endl;
    for (int i=0; i<to_search.length(); i++){
        if (to_search[i] == to_find){
            count += 1;
        }
    }
    return count;
}


int main()
{
    string user_name, fName, lName;
    string partner_name;
    int t, r, u, e, l, o, v;
    int true_score, love_score;
    string total_score;

    cout << "Enter your name: ";
    cin >> fName;
    cin >> lName;
    user_name = fName + lName;
    cout << "Your name is " << user_name << endl;

    // cout << "Enter your partner's name: ";
    // cin >> partner_name;

    // Loop through the entered user name
    t = get_count(user_name, 't');
    // cout << "t has a score " << t << endl;
    r = get_count(user_name, 'r');
    // cout << "r has a score " << r << endl;
    u = get_count(user_name, 'u');
    // cout << "u has a score " << u << endl;
    e = get_count(user_name, 'e');
    // cout << "e has a score " << e << endl;

    true_score = t + r + u + e;

    l = get_count(user_name, 'l');
    o = get_count(user_name, 'o');
    v = get_count(user_name, 'v');
    e = get_count(user_name, 'e');

    love_score = l + o + v + e;

    total_score = to_string(true_score) + to_string(love_score);
    cout << "Your score is " << total_score << endl;  

return 0;
}

// void TraverseString(string &str, int N)
//  {
//     // Stores address of 
//     // a character of str
//     string:: iterator it;
      
//     // Traverse the string
//     for (it = str.begin(); it != str.end();
//                                    it++) {
//         // Print current character
//         cout<< *it<< " ";
//     }
// }

// Function to traverse the string and
// print the elements of the string
// void TraverseString(string &str, int N)
// {
      
//     // Stores address of 
//     // a character of str
//     string:: iterator it;
      
//     // Traverse the string
//     for (it = str.begin(); it != str.end();
//                                    it++) {
//         // Print current character
//         cout<< *it<< " ";
//     }
// }