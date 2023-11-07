#include <stdio.h> // Include the standard input/output header file.
#include <stdlib.h> // Include the standard library header file.

//  Here is a function to allocate memory for an array of integers.
int *allocate(int n) {
    int *p; // Here we are declaring a pointer variable p.
    p = (int *)malloc(n * sizeof(int)); // Allocation of memory for an array of integers and store its address in p.
    return p; // Return the pointer to the allocated memory.
}

// This is a function to fill an array with ones.
void fillwithones(int *array, int n) {
    int i; // Declaring an integer variable i.
    for (i = 0; i < n; i++) { // i is initiated from 0 to n-1.
        array[i] = 1; // Set each element of the array to 1.
    }
}

// Function to print the elements of an array.
void printarray(int *array, int n) {
    int i; // We are declaring an integer variable i.
    for (i = 0; i < n; i++) { // Loop from 0 to n-1.
        printf("a[%d]: %d\n", i, array[i]); // Print the element at index i of the array.
    }
}

// Function to free memory allocated for an array.
void freearray(int *array) {
    free(array); // Free the memory associated with the array.
}

int main() {
    int n, *a; // Declare integer n and a pointer to an integer a.

    printf("Size of the array:\n"); // Display a message asking for the size of the array.
    scanf("%d", &n); // Read an integer value from the user and store it in n.

    a = allocate(n); // Allocate memory for an array of integers and store the pointer in a.
    fillwithones(a, n); // Fill the allocated array with ones.
    printarray(a, n); // Print the elements of the array.
    freearray(a); // Free the allocated memory.

    a = NULL; // Set the pointer a to NULL.
    return 0; // Return 0 to indicate successful program execution.
}
