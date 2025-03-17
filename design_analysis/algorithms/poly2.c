// Algorithm 6: Calculate p(x)= d + c*x + b*x^2 + a*x^3
// Requires: Integers a, b, c, d and x
// Returns: value of p(x) as described above

#include <stdio.h>
#include <stdlib.h>

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
        return d+x*(c+x*(b+a*x));
}
