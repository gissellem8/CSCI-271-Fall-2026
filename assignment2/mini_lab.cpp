#include <iostream> //starter
using namespace std; //lets us use cout/cin without writing std:: each time
int main() { //marks the beginning of the program's body
    string name; //declares a variable to store the name
    int age; //declares a variable to store the user's age (whole number)
    cout<< "What is your name? "; //printing a prompt asking for the name
    cin >> name; //reads the typed name into the name variable
    cout << "What is your age? "; //printing a prompt asking for the age
    cin >> age; //reads the typed age into the age variable 
    cout << "Hello, I am " << name << "! I am " << age << " years old." << endl; //printing the combined greeting using both variables
        return 0; //ending
}
