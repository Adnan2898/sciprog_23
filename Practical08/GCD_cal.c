#include<stdio.h>
int gcd_iteration(int a, int b){ //We are testing the use of iterations to find the GCD of no.s
    int temp; //creating a temporary variable
    while(b!=0){ //using while loop to set condition that till the time b!=0
        temp=b; //let temp be equal to b
        b=a%b; //b be then equal to a%b
        a=temp; //a will then take the value of temp which was b before the operation
    }
    return a; //returning a
}
int gcd_recursive(int a, int b){ //here will use the recursive function instead of iteration
    if(b==0) // checking the condition if b ==0, if yes we 
        return a; //will return the value of a
    else
        return gcd_recursive(b,a%b); //it then returns the value function with a =b(before opeation) and b=a%b 
}
int main(){ //in the main function we are calling this
    printf("The GCD using Recursive is: %d\n",gcd_recursive(50,51)); 
    printf("The GCD using Iteration is: %d\n",gcd_iteration(50,51));
    return 0;
}
