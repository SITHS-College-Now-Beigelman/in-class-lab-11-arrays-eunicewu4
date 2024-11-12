// Eunice Wu
// Nov 11,2024
// In-class lab 11

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;

int main () {

// 1 
    const int ARRAY_SIZE=50;
    double alpha[ARRAY_SIZE]; // declares list alpha which components are double data type

// 1.a
    for (int i=0; i<=24; i++) { // loop that runs through every component and operate on them
    alpha[i] = pow (i,2); // first 25 components are squared
    }

    for (int i=25; i<=49; i++) { // second 25 components are tripled
    alpha[i] = 3*i;
    }

// 2
    for (int i=0; i<=49; i++) { // loop that runs through every component and prints it
        if (i % 10==0 && i != 0) // if the component is the tenth one, then it will add a newline
        cout << endl << fixed << setprecision (0) << alpha[i] << " ";
        else // if not, it will just print regularlly. will print in integer format
        cout  << fixed << setprecision (0) << alpha[i] << " ";
    }

// 3
    srand(time(0)); // makes the random number generate different in the loop below every time
    for (int i=0; i<=49; i++) {
        alpha[i] = rand() % 101; // 101 bc rand will be from 1-100
    }

// 4
    double sum = 0;
    for (int i=0; i<=49; i++) {
        sum = sum + alpha[i]; // runs through every compoenet and adds into a sum
    }
    
    cout << endl << "The average is: " << sum/50 << endl; // prints out the avg and finds it by dividing by number of components

// 5
    int NumEqual2Zero = 0;
    for (int i=0; i<=49; i++) {
        sum = sum + alpha[i];
        if (alpha[i] == 0)
        NumEqual2Zero += 1; // if number = to 100, it will add to sum of number equal to zero
    }

    cout << "This is how much elements are exactly equal to 100: " << NumEqual2Zero;

    return 0;
}

/*
0 1 4 9 16 25 36 49 64 81 
100 121 144 169 196 225 256 289 324 361
400 441 484 529 576 75 78 81 84 87
90 93 96 99 102 105 108 111 114 117
120 123 126 129 132 135 138 141 144 147
The average is: 52
This is how much elements are exactly equal to 100: 1
*/