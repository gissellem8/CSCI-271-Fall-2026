//Gisselle Mejia
//Assignment 5
#include <iostream> //starter
using namespace std; //allows us to use cout/cin without std:: each time
int main () { //marks the beginning of the program's body

    const int SIZE = 5; //a constant that holds how many scores there are
    int scores[SIZE]; //an array that holds the 5 scores

for (int i = 0; i < SIZE; i++) { // runs a loop 5 times, with i starting at 0 and going to 4
    cout << "Enter score " << i + 1 << ": "; //prints a prompt asking the user to enter a score, i + 1, so it starts at 1
    cin >> scores[i]; //reads the typed score into the array spot i
}

cout << "Scores: "; //print the scores
for (int i = 0; i < SIZE; i++) { //runs a loop 5 times to go thru all the scores
    cout << scores[i] << " "; //prints score followed by a space
}
cout << endl; //move to the next line after printing all scores

int sum = 0; //declares the sum variable and starts it at 0
for (int i = 0; i < SIZE; i++) { //runs a loop 5 times to go thru all the scores 
    sum = sum + scores[i]; //adds the current score to the sum
} 

int highest = scores [0]; //starts with the first score as the highest
for (int i = 1; i < SIZE; i++) { //loop to find the highest score, starting at 1
    if (scores [i] > highest) { //checks if this score is bigger than the highest
        highest = scores [i]; //if yes, this score becomes the new highest
    }

}

int lowest = scores [0]; //starts with the first score as the lowest
for (int i = 1; i < SIZE; i++) { //loop to find the lowest score, starting at 1
    if (scores [i] < lowest) { //checks if this score is smaller than the lowest
        lowest = scores [i]; //if yes, this score becomes the new lowest
    }
}   

double average = static_cast<double>(sum) / SIZE; //changes the sum to a decimal #, then divides by 5 so the avg is a decimal #

cout << "Sum: " << sum << endl; //printing the sum
cout << "Average: " << average << endl; //printing the average 
cout << "Highest: " << highest << endl; //printing the highest score
cout << "Lowest: " << lowest << endl; //printing the lowest score 

return 0; //end of program
}

