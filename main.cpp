#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

  //BMI calculator
  //weight(kg) / height * height(m)
  //underweight < 18.5
  //Normal weight 18.5 - 24.9
  //Overweight > 25

  double weight;
  double height;
  double bmi;
  cout << "Enter your weight(kg) and height(m): " << endl;
  cin >> weight >> height;
  bmi = weight / pow(height, 2);

  if (bmi < 18.5) {
    cout << "You are underweight "<< endl;
  }

  else {
    if (bmi > 25) {
      cout << "You are overweight, do something about it! " << endl;
    }
    else {
      cout << "You have a normal weight"<< endl;
    }
  }
  //set fixed 3 digits after the decimal point
  cout<<setprecision(3)<<fixed;
  
  cout << "Your bmi is " << bmi << endl;
}