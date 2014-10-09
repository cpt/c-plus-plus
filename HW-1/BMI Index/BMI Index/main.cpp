/*
 The program askes the user for height and weight and calculates the user's BMI.
 Then the program displays the user's BMI according to the data provided.
 */

#include <iostream>

using namespace std;

int main (void) {
    int userHeight;
    
    // Get the height of the user in cm and save it as an int.
    cout << "Please type your height in centimeters: " ;
    cin  >> userHeight;
    
    int userWeight;
    
    // Get the weight of the user in kg and save it as an int.
    cout << "Please type your weight in kilograms: " ;
    cin >> userWeight;
    
    // A "double" variable to build up the BMI.
    double bmi;
    
    // Piecemeal computation to run users data through equation.
    bmi = ((double) userHeight)/100.0;
    bmi = bmi * bmi;
    bmi = ((double) userWeight)/bmi;
    
    // Prints the user's BMI.
    cout << "Your BMI is: " << bmi << "Kg/M^2" << endl;
    
    return 0;
}

/*
 Please type your height in centimeters: 186
 Please type your weight in kilograms: 123
 Your BMI is: 35.5532Kg/M^2
 Program ended with exit code: 0
*/
