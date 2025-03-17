// Algorithm 8: Calculate product of a*b with russian multiplication
// Requires: Integers A and B
// Returns: a*b

#include <stdio.h>
#include <stdlib.h>

int russian_multi(int, int);

int main(){
	int a, b;
	printf("Insert number a: ");
	scanf("%d", &a);
	printf("Insert number b: ");
	scanf("%d", &b);
	printf("Product: %d\n", russian_multi(a, b));
	return 0;
}

int russian_multi(int a, int b){
	int product=0;
	while(b>0){
		if(b%2==1) 
			product+=a;
		b=b/2;
		a*=2;
	}
	return product;
}


