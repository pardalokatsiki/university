// Algorithm 5: Calculate p(x)= d + c*x + b*x^2 + a*x^3
// Requires: Integers a, b, c, d and x
// Returns: value of p(x) as described above

// If you are in Linux OS compile the code with gcc poly.c -lm

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int poly (int, int, int, int, int);

int main(){
	int x, a, b, c, d;
	printf("Insert number x: ");
	scanf("%d", &x);
	printf("Insert coefficients: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("Value of p(%d) = %d + %d*%d + %d*%d^2 + %d*%d^3 = %d\n", x, d, c, x, b, x, a, x, poly(a, b, c, d, x));
	return 0;
}

int poly (int a, int b, int c, int d, int x){
	int x2 = pow(x, 2);
	int x3 = pow(x, 3);
	return d + c*x + b*x2 + a*x3; 
}

