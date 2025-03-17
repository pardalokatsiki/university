// Algorithm 9: Divisors of n.
// Requires: Integer n > 1
// Returns: Divisors of number n

// To execute on Linux, run gcc divisors.c -lm

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void divisors(int);

int main(){
	int n;
	printf("I want divisors of: ");
	scanf("%d", &n);
	if(n<=1){
		printf("Number must be greater than 1.\n");
		return 1;
	}
	divisors(n);
	return 0;
}

void divisors(int n){
	int bound=floor(sqrt(n));
	for(int i=1; i<=bound; i++){
		if(n%i==0)
			printf("%d\n%d\n", i, n/i);
	}
}
			
