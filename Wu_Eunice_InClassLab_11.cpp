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
    double alpha[ARRAY_SIZE];

// 1.a
    for (int i=0; i<=24; i++) {
    alpha[i] = pow (i,2);
    }

    for (int i=25; i<=49; i++) {
    alpha[i] = 3*i;
    }

// 2
    for (int i=0; i<=49; i++) {
        if (i % 10==0 && i != 0)
        cout << endl << fixed << setprecision (0) << alpha[i] << " ";
        else
        cout  << fixed << setprecision (0) << alpha[i] << " ";
    }

// 3
    srand(time(0));
    for (int i=0; i<=49; i++) {
        alpha[i] = rand() % 101;
    }

// 4
    double sum = 0;
    for (int i=0; i<=49; i++) {
        sum = sum + alpha[i];
    }
    
    cout << endl << "The average is: " << sum/50 << endl;

// 5
    int NumEqual2Zero = 0;
    for (int i=0; i<=49; i++) {
        sum = sum + alpha[i];
        if (alpha[i] == 0)
        NumEqual2Zero += 1;
    }

    cout << "This is how much elements are exactly equal to 100: " << NumEqual2Zero;

    return 0;
}