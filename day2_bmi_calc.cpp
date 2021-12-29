#include <iostream>
#include <cmath>
#include <ctgmath>
using namespace std;

int main(){
    float weight, height;
    cout << "Enter your weight in kg: ";
    cin >> weight;
    
    cout << "Enter your height in m: ";
    cin >> height;

    float bmi = round(weight / (height * height));

    cout << "Your BMI is: " << bmi << endl;
    if(bmi < 18.5){
        cout << "You are underweight" << endl;
    }else if (bmi <= 25){
        cout << "You have normal weight" << endl;
    }else if (bmi <= 30){
        cout << "You are overweight" << endl;
    }else if (bmi <= 35){
        cout << "You are Obese" << endl;
    }else{
        cout << "You are clinically obsese" << endl;
        }
}