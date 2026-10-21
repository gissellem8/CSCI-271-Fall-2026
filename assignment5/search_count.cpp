//Gisselle Mejia
//Assignment 5
#include <iostream> //starter
using namespace std; //allows us to use cout/cin without std:: each time
int main () { //marks the beginning of the program's body

    const int SIZE = 10; //a constant that holds how many numbers there are in the array
    int data [SIZE] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5}; //an array that holds the 10 numbers
   
    int target; //declares the target variable
    cout << "Enter a number to search for: "; //prints a prompt asking the user to enter a number to search for
    cin >> target; //reads the typed number into the target variable

    int foundIndex = -1; //the sentinel: -1 means the target was "not found yet"
    int count = 0; //declares the count variable and starts it at 0

for (int i = 0; i < SIZE; i++) { //runs a loop 10 times to go thru all the numbers in the array
    if (data[i] == target) { //checks if the current number is equal to the target
        if (foundIndex == -1) { //checks if this is the first match found (if foundIndex is still -1)
            foundIndex = i; //if yes, this number's index becomes the foundIndex
        }
        count++; //adds 1 to the count for every match
    }
}
if (foundIndex != -1 ) { //if the foundIndex is not -1, the target was found
    cout << target << " first found at index " << foundIndex << endl; //printing the first index where the target was found
    cout << target << " appears " << count << " time(s)" << endl; //printing how many times the target was found in the array
} else { // if the foundIndex is still -1, the target was not found
    cout << target << " was not found." << endl; //printing that the target was not found message
}
return 0; //end of program
}   
