// Algorithm 2: Swap two numbers
// Requires: Two integers x, y.
// Returns: Integers x,y but swapped.

#include <stdio.h>
#include <stdlib.h>

void swap(int*, int*);

int main(){
	int x, y;
	printf("Insert number 1: ");
	scanf("%d", &x);
	printf("Insert number 2: ");
	scanf("%d", &y);
	printf("Number 1: %d, Number 2: %d\n", x, y);
	swap(&x, &y);
	printf("Number 1: %d, Number 2: %d\n", x, y);
	return 0;
}

void swap(int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
