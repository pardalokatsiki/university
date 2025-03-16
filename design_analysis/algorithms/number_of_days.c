// Algorithm 3: Calculate number of a day of a year.
// Requires: Positive integers d, m where 1 <= m <= 12 and d is smaller than 28, 30 or 31.
// Returns: Number of day in a year of 365 days.

#include <stdio.h>
#include <stdlib.h>

int number_of_days(int, int);

int main(){
	int d, m;
	printf("Insert month: ");
	do{
		scanf("%d", &m);
	}while(m<1||m>12);
        printf("Insert day: ");
	if(m==2){
		do{
			scanf("%d", &d);
		}while(d>28);
	}
	else if(m==4||m==6||m==9||m==11){
		do{
			scanf("%d", &d);
		}while(d>30);
	}
	else{
		do{
			scanf("%d", &d);
		}while(d>31);
	}
	printf("Number of %d/%d: %d\n", d, m, number_of_days(d, m)); 
        return 0;
}

int number_of_days(int d, int m){
	int i, days=0;
	for(i=1; i<m; i++){
		if(i==2)
			days+=28;
		else if((i==4)||(i==6)||(i==9)||(i==11))
			days+=30;
		else
		        days+=31;
	}
	return days+d;
}


