//Gisselle Mejia 
//Assignment 4 

#include <iostream> //starter
using namespace std; //lets us use cout/cin without std:: each time
int main () { //marks the beginning of the program's body
int num; //declares a variable to store the number 
cout << "Enter a number: "; //prints a message to the user asking for a number
cin >> num; //reads the entered number from the user and stores it in the num variable
for (int i=1; i <=10; i++) { //runs while i is 10 or less, starting at 1 and increasing by 1 each time
cout << num << " x " << i << " = " << num * i <<endl; //prints the multiplication table for the entered number, showing the product of num and i
}
return 0; //ends the program
}










