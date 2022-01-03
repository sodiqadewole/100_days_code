#include <iostream>
#include <string>
// #include <random>
// #include <stdlib.h>

using namespace std;

int main()
{
    const char arrayName[4] = {'1', '3', '7', '9'};
    string arrayString[5] = {"Sodiq", "Suliyat", "Faizah", "Maimunah", "Hakeem"};
    
    int arraySize = sizeof(arrayName);
    int size_of_family = sizeof(arrayString);

    srand(time(NULL)); // initialize the random seed    
    int rndIdx = rand() % arraySize;

    srand(time(NULL)); // initialize the random seed
    int rndPerson = rand() % size_of_family;
    
    cout << "Length of array " << arraySize << endl;
    // cout << "random index: " << rndIdx << endl;
    cout << "random element of array: " << arrayName[rndIdx] << endl;

    cout << arrayString[rndPerson] << " is the random person selected" << endl;
    return 0;
}