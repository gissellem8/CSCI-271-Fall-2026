//Gisselle Mejia 
//Assignment 4 

#include <iostream> //starter
using namespace std; //lets us use cout/cin without std:: each time
int main () { //marks the beginning of the program's body
    int choice; //declares a variable to store the user's choice

    do { 
        cout << "Enter a menu choice (1, 2, or 3): "; //prints a message to the user asking for a menu choice
        cin >> choice; //reads the entered choice from the user and stores it in the choice
    
        if (choice != 1 && choice != 2 && choice != 3) { //checks if the choice is not 1, 2, or 3
            cout << "Invalid choice, try again." << endl; //prints an error message if the choice is invalid    
        
    }
} while (choice !=1 && choice !=2 && choice !=3); //runs the loop while the choice is not 1, 2, or 3

cout << "You selected option " << choice << "." << endl; //prints the selected option

    return 0; //ends the program
}
