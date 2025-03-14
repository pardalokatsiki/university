// Algorithm 1: Find minimum
// Requires: Array of integers
// Returns: Smallest number in the array

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int minimum(int*);

int main(){
	int A[SIZE]={9, 5, 6, 7, 14, 78, 3, 10, 11, 12};
	printf("Minimum number of array is %d", minimum(A));
	return 0;
}

int minimum(int *A)
{
        int min=100;
	for (int i=0; i<SIZE; i++)
	{ 
	    if(min>A[i])
	       min=A[i];
	}
	return min;
}

