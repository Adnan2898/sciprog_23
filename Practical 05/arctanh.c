#include <stdio.h>
#include <math.h>

//declaring the functions arctanh1 and arctanh2 here

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main() {
    double delta, x;
    printf("Enter the value of delta (precision):\n");
    scanf("%lf", &delta);
    
    int length = 1000;
    double tan1[length]; // storing the result
    double tan2[length]; // storing the result
    
    int j = 0;
    x = -0.9;
    while (x <= 0.9 && j < length) {
        tan1[j] = arctanh1(x, delta);
        tan2[j] = arctanh2(x);
        printf("the difference at x = %lf is %.15f.\n", x, fabs(tan1[j] - tan2[j]));

        j++;
        x = x + 0.1;
    }
    
    return 0;
}

//these are the functions that were declared. here these functions will expect two inputs, x and delta
double arctanh1(const double x, const double delta) {
    double arcTan = 0; // approximation 
    double elem, val; // elements
    int n = 0; // sum parameter 
    
    //the do while loop here will calculate abs element till it reaches the value of delta. it is better to use a do while, so we can add the ending condition here
    do {
        val = 2 * n + 1;
        elem = pow(x, val) / val;
        arcTan += elem;
        n++;
    } while (fabs(elem) >= delta);
    
    return arcTan;
}
// the arctanh2 is here to calculate the log value as specified in the question

double arctanh2(const double x) {
    return (log((1 + x) / (1 - x)) / 2);
}
