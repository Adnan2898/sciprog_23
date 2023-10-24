#include<stdio.h>
#include<stdlib.h>

//This declared function is for finding the fibonacci series
void fibonacci(int *a, int *b){
  int sum;
  //Here we are using pointers so for that we declare the value of *a as Fn-1 and *b as Fn-2 and sum as Fn 
  sum= *a + *b;
  *b = *a;
  *a = sum;
}

int main(){
    int n,i;  //here we are declaring two variables n will be checking what input is given to find the series for
    //i is given here for the lopp
    int f0=0,f1=1; // setting the value for f0 and f1
    printf("Enter the value of n\n");
    scanf("%d",&n);
    if(n<1){ //this is to check if teh number is positive or not
        printf("The number is not positive.\n");
        //exit terminates execution when it is called
        exit(1);
    }
    printf("The fibonacci sequence is \n");
    printf("%d %d ", f0,f1); // here we are only print f0 and f1

    //Calculating fibonacci sequence from 2 (0,1,2 hence used i= 3)
    for(i=3;i<=n;i++){ 
    fibonacci(&f1,&f0); 
    printf("%d ",f1);
//this code is not necessary but to make sure it is presentable we use it so that 9 elements in one line are printed and the line changes next
    if((i+1)%10==0)
        printf("\n");
    }
    return 0;
}
