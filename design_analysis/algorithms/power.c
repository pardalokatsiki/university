// Algorithm 4: Calculate power of number n
// Requires: Integer number x, integer n.
// Returns: Number x raised in n power.

#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main(){
	int x; int n;
	printf("Insert base: ");
	scanf("%d", &x);
	printf("Insert power: ");
	do{
		scanf("%d", &n);
	}while(n<0);
	printf("Result: %d\n", power(x, n));
	return 0;
}

int power (int x, int n){
	int res=1;
	for(int i=1; i<=n; i++)
		res*=x;
	return res;
}
