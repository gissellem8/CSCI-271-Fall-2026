// Gisselle Mejia
// Assignment 7 

#include <iostream> //lets us use cout and cin
using namespace std; //so we can write cout instead of std::cout

int main () { //marks the beginning of the programs body 

const int SIZE = 8; //declares the number of items in the array 
int arr[SIZE]= {11, 22, 33, 44, 55, 66, 77, 88}; //sorted array we will search 

int target; //declares the number the user wants to find
cout << "Enter a number to search for: "; //asks the user for a number
cin >> target; // stores the number the user types in target

int low = 0; // left end of the search area
int high = SIZE -1; // right end of the search area
int foundIndex = -1; //-1 means not found yet

while (low <= high) { //keeps searching while low is less than or equal to high
    int mid = (low + high) / 2; // finds the index of the middle item

    if (arr[mid] == target) { //checks if the middle item is the target 
    foundIndex = mid; // saves the index where the target was found
    break; //stops the loop because we are done searching
}

else if (arr[mid] < target) { // checks if the middle item is smaller than the target 
    low = mid + 1; // moves low up to search the right half

} else { //the middle item is larger than the target
    high = mid - 1;  //moves high down to search the left half
}
} //ends the while loop

if (foundIndex != -1) { //checks if the target was found
    cout << target << " found at index " <<foundIndex << endl; //prints the number and its index

} else { //the target was not found
    cout << target << " not found " << endl; //prints that the target was not found in the array 

}

return 0; // ends the program

} // marks the end of the programs body 


