//Gisselle Mejia
//Assignment 5
#include <iostream> //starter
using namespace std; //allows us to use cout/cin without std:: each time

void printForward(const int arr[], int size) { //function that prints the array in forward order, void means it sends nothing back
    cout << "Forward: "; //prints the word "Forward: "
    for (int i = 0; i < size; i++) { //goes thru the array from the first index to the last index
        cout << arr [i] << " "; //prints the value at the current index followed by a space

    }
    cout << endl; //moves to the next line
} //end of printForward function

void printReverse(const int arr[], int size) { //function that prints the array in reverse order, void means it sends nothing back
    cout << "Reverse: "; //prints the word "Reverse: "
    for (int i = size - 1; i >=0; i--) { //goes thru the array from the last index to the first index
        cout << arr [i] << " "; //prints the value at the current index followed by a space
    }
    cout << endl; //moves to the next line
} //end of printReverse function

int countAbove (const int arr[], int size, int limit) { //function that counts elements in the array bigger than the limit, returns an int
    int count = 0; //declares the count variable and starts it at 0
    for (int i = 0; i < size; i++) { //goes thru the array from the first index to the last index
        if (arr [i] > limit) { //checks if the value at the current index is bigger than the limit
            count++; //adds 1 to the count for every value bigger than the limit
        } //end of if statement
    } //end of for loop
    return count; //sends the final count back to the main function
} //end of countAbove function

int main () { //marks the beginning of the program's body
    const int SIZE = 6; //a constant that holds how many numbers there are in the array
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; //an array that holds the 6 numbers

    printForward(values, SIZE); //calls the printForward function to print the array in forward order
    printReverse(values, SIZE); //calls the printReverse function to print the array in reverse order

    int limit; //declares a variable to store the limit value
    cout << "Count values above: "; //prints a prompt asking the user to enter a limit value
    cin >> limit; //reads the typed limit value into the limit variable
    
    int results = countAbove(values, SIZE, limit); //call the countAbove function to count how many values in the array are bigger than the limit, and store the result in the results variable
    cout <<"Count: " << results << endl; //prints the final count of values bigger than the limit

    return 0; //ends of program
} //end of main function
