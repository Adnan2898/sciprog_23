#include <stdio.h>

// Function prototype
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main() {
  int n = 5, p = 3, q = 4; //Declaring the number of rows columns
  double A[n][p], B[p][q], C[n][q];
  int i, j, k;

  // Initializing the matrix A
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      A[i][j] = i + j;
    }
  }

  // Initializing the matrix B
  for (i = 0; i < p; i++) {
    for (j = 0; j < q; j++) {
      B[i][j] = i - j;
    }
  }

  // Initializing the matrix B to 0
  for (i = 0; i < n; i++) {
    for (j = 0; j < q; j++) {
      C[i][j] = 0.0;
    }
  }

  // Calling the matmult function which we have created in a seperate file
  matmult(n, p, q, A, B, C);

  printf("\n This is Matrix A: \n"); //Printing the Matrix A
  for (i = 0; i < n; i++) {        //These loops run from i to n and j to p this is different for every matrix A B and C (refer to readme)
    for (j = 0; j < p; j++) {
      printf("%3.0f ", A[i][j]);
    }
    printf("\n");
  }

  printf("\n This is Matrix B: \n"); //Printing the Matrix B
  for (i = 0; i < p; i++) {
    for (j = 0; j < q; j++) {
      printf("%3.0f ", B[i][j]); 
    }
    printf("\n");
  }

  printf("\n This is Matrix C: \n"); //Printing the Matrix C
  for (i = 0; i < n; i++) {
    for (j = 0; j < q; j++) {
      printf("%3.0f ", C[i][j]);  
    }
    printf("\n");
  }

  return 0;
}




