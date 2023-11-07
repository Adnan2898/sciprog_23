#include <stdio.h> //We will load here the necessary libraries
#include <stdlib.h>
#include <math.h> //Since we will be exponential function, we are using the math library

int factorial(int n); //Declaring the factorial function which will take the input int n

int main(void) {  //This is our main function
    int i, order;  //Declaring the double variables here i and order
    double *terms, e; //Declaring the pointer terms and e

    printf("Enter the polynomial order: "); //We are asking the user to enter the value of order
    scanf("%d", &order); //Taking the input using scanf

    terms = (double *)malloc(order * sizeof(double)); //using dynamic memory allocation

    for (i = 0; i < order; i++) { //initialising a loop that will run from i to order-1
        terms[i] = 1.0 / (double)factorial(i + 1); //calculating terms[i] for each value of i 
        printf("e term for order %d is %1.15lf\n", i + 1, terms[i]); //Printing the value of e term here
    }

    e = 1.0; //initialising the value of e here 
    for (i = 0; i < order; i++) { //using loop to find the value of e
        e = e + terms[i];
    }
    printf("The value of e will be: %1.14lf\n", e); //Printing the value of e

    free(terms);  // Don't forget to free the dynamically allocated memory

    double actual_e = exp(1.0); //finding the actual value of e
    printf("The difference is: %1.101lf\n", e - actual_e); //printing the difference between caculated and actual value

    return 0;
}

int factorial(int n) { //defining the function factorial
    if (n < 0) { //making sure no negative value is given
        printf("Invalid: Error 404"); //printing error message
        return -1; 
    } else if (n == 0) { //defining the value for n ==0
        return 1;
    } else {
        return n * factorial(n - 1); //defining the calculation that needs to be done by the function
    }
}
