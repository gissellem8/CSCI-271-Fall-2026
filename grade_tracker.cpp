//Gisselle Mejia
// Assignment 7

#include <iostream> // lets us use cout and cin
#include <vector> //lets us use vectors
using namespace std; // so we can write cout instead of std::cout
int main () { // marks the beginning of the programs body

    vector<int> grades; //empty vector to hold grades

    int count; //declares the number of grades the user wants to enter
    cout << "How many grades?" << endl; //prints a message asking the user how many grades they want to enter
    cin >> count; //stores the number the user types in count

for (int i = 0; i <count; i++) {  //repeats once for each grade the user wants to enter
    int grade; //declares the grade the user wants to enter
    cout << "Enter a grade " << i + 1 << ": "; //asks the user for the next grade
    cin >> grade; //stores the number the user types in grade
    grades.push_back(grade); //adds the grade to the end of the vector
} // ends the for loop

cout << "Grades: "; // labels the grades that will be printed
for (int g : grades) { //repeats once for each grade in the vector
    cout << g << " "; //prints the grade followed by a space
} // ends the for loop
cout << endl; // prints a new line after the grades

int sum = 0; //holds the sum of the grades
int highest = grades[0]; //starts with the first grade as the highest grade
for (int g : grades) { //repeats once for each grade in the vector
    sum += g; //adds the grade to the sum
    if (g > highest) { //checks if the grade is higher than the current highest
        highest = g; //updates the highest grade if the current grade is higher
    } // ends the if statement
} // ends the for loop      

double average = static_cast<double>(sum) / grades.size(); //calculates the average of the grades
cout << "Count: " << grades.size() << endl; //prints the number of grades entered   
cout << "Average: " << average << endl; //prints the average of the grades
cout << "Highest: " << highest << endl; //prints the highest grade  

return 0; // ends the program
} // marks the end of the programs body