// Algorithm 7: Calculate sum of (a+j*t) (for j=0 to n-1)
// Requires: Positive integers n, a, t
// Returns: Sum mentioned above


#include <stdio.h>
#include <stdlib.h>

int sum_of_terms(int, int, int);

int main(){
	int a, t, n;
	printf("Insert number a: ");
	scanf("%d", &a);
	printf("Insert how many terms to add: ");
	scanf("%d", &n);
	printf("Insert step t: ");
	scanf("%d", &t);
	printf("Sum of terms is %d\n", sum_of_terms(n, a, t));
	return 0;
}

int sum_of_terms(int n, int a, int t){
       int i, sum;
       i=1;
       sum=0;
       while(i<=n){
         sum+=a;
	 a+=t;
	 i++;
	 }
       return sum;
       }
             

