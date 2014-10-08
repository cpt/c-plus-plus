/*
 The program askes the user for height and weight and calculates the user's BMI.
 Then the program displays the user's BMI according to the data provided.
 */


#include <iostream>

using namespace std;



int main (void) {
    int userHeight;
    cout << "Please type your height in centimeters: " ;
    cin  >> userHeight;
    // Gets the height of user in cm and saves it as an int.
    
    
    int userWeight;
    cout << "Please type your weight in kilograms: " ;
    cin >> userWeight;
    // Gets the weight of the user in kg and saves it as an int.

    double bmi;
    //Creats a "double" variable "bmi".
    
    bmi = ((double)userHeight)/100.0;
    bmi = bmi * bmi;
    bmi = ((double) userWeight) / (bmi);
    //Piecemeal computation to run users data through equation.
    

    cout << "Your BMI is: " << bmi << "Kg/M^2" << endl;
    //Prints the users BMI.
    
    return 0;
}

/*
 Please type your height in centimeters: 186
 Please type your weight in kilograms: 123
 Your BMI is: 35.5532Kg/M^2
 Program ended with exit code: 0
*/