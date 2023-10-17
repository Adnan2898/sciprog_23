#include<stdio.h>
#include<math.h>

//Here we are declaring the variables TanValues, degtorad and traprule

int N=12;
double TanValues[13];
double degtorad(double deg);
double traprule(int N);

//In the main function we are taking the values of Tan from i to N increasing them with loop and then
//creating degrees with those. The using the degtorad, we are storing the values in rad variable
//The TanValues is an array with the values storing of 5,10,15 etc till N

int main(){
  
  int i;
  double deg, rad;
  for (i =0; i <=N; i++){
    deg= i*5.0;
    rad = degtorad(deg);
    TanValues[i] = tan(rad);
    //printf("TanValues{%d} = %f at x = %.2f degrees\n", i,TanValues[i], deg);


}

//here we are defining where the values of traprule and integral exact will be stored as

 double integral_approx = traprule(N);
 double integral_exact = log(2.0);
  
  printf("Your approximation of the integral from x=0 degrees to x = 60 degrees of the function tan(x) with respect to x is:\n%.5f\nThe exact solution is :\n%.5f\n", integral_approx, integral_exact);

}

//here we are defining what degtorad function will return

double degtorad(double deg){
  return (deg*M_PI)/180.0;

}


//The trapule defined will find the areas of all the areas (this is based on week3 code)

double traprule(int N){

  int i;
  double width, area = TanValues[0] +TanValues[N];
  for(i=1; i<N; i++){
    area+=2.0*TanValues[i];
}


//the width is here defined as (60.0-0)/2N
//area is then multiplied by width


  width = degtorad((60.0-0)/(2.0*N));
  area = width*area;
  return area;

}