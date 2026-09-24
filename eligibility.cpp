//Gisselle Mejia
//Assignment 3

#include <iostream> //starter
using namespace std; //lets us use cout/cin without writing std:: each time
int main () { //marks the beginning of the program's body

int age; //declares a variable to store the age
int isMember; //declares a variable to store if the person is a member or not

    cout << "Enter your age: "; //printing a prompt asking for the age
    cin >> age; //reads the typed age and stores it in the age variable

    cout << "Are you a member? (1 = yes, 0 = no): "; //printing a prompt asking if the person is a member or not
    cin >> isMember; //reads the typed answer and stores it in the isMember variable

if (age >=60 || (age >=18 && isMember ==1)) { //checks if the person is 60 or older, or if they are 18 or older and a member
    cout << "You qualify for the discount." << endl; //prints "You qualify for the discount." if the person is 60 or older, or if they are 18 or older and a member
}
else {
    cout << "You do not qualify for the discount." << endl; //prints "You do not qualify for the discount." if neither of the conditions above are true
}   
    return 0; //ends the program
}

