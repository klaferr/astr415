// create a random number generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

 //for a.
int i, num, N=7, lower = -3, upper = 3, count = 1; 
float rnums[N];

num = rand() %(upper +1 - lower)+lower;

for (i=0, i<N,i++){
  rnum[i]=num;
}

/*
//double arrays[]; 
srand(time(NULL)); rnums = rand()%upper; 
if (rnums <lower) {
  rnums += lower;
  for (i=0; i<count;i++) {

  }
}
//try to just use rand() from -3 to 3


// assign to an array

//int array[20]=a, instead use float for single and double for double prec
float array[] = whatever
//random number x from -3 to 3

//assign to 10^x array of N length

//b. kahan summ algorithm, use psuedo code from wiki page
//c. sort values, qsort,  a bubble sort is switching arrays
//d. repeat for double precision
*/
}

