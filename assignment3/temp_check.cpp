//Gisselle Mejia
//Assignment 3

#include <iostream> //starter
using namespace std; //lets us use cout/cin without writing std:: each time
int main() { //marks the beginning of the program's body
    int temp; //declares a variable to store the temperature
    cout << "Enter the temperature (F): "; //printing a prompt asking for the temperature in Fahrenheit
    cin >> temp; //stores the entered temperature in the temp variable

    if (temp < 32) //checks if the temperature is below 32
    {
        cout << "That's Freezing." << endl; //prints "That's Freezing." if the temperature is below 32
    }
    else if (temp >= 32 && temp <= 59) //checks if the temperature is between 32 and 59
    {
        cout << "That's Cold." << endl; //prints "That's Cold." if the temperature is between 32 and 59
    }
    else if (temp >= 60 && temp <= 75) //checks if the temperature is between 60 and 75

    {
        cout << "That's Mild." << endl; //prints "That's Mild." if the temperature is between 60 and 75
    }
    else //runs if none of the conditions above are true, 76 and above
    {
        cout << "That's Hot." << endl; //prints "That's Hot." if the temperature is above 76
    }

    return 0; //ends the program
}
