/*
 The program askes the user for height and weight and calculates the user's BMI.
 Then the program displays the user's BMI
 */


#include <iostream>

using namespace std;

double usersBmi (double bmi);
//returns the users BMI

int main (void) {
    int userHeight;
    cout << "Please type your height in centimeters: " ;
    cin  >> userHeight;
    // Gets the height of user in cm and saves it as an int.
    
    
    int userWeight;
    cout << "Please type your weight in kilograms: " ;
    cin >> userWeight;
    // Gets the weight of the user in kg and saves it as an int.


    


    cout << "Your BMI is: " << ((userWeight)/(((userHeight)/(100))^2)) << endl;
    
    return 0;
}
