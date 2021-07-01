#include <stdio.h>

int main (void){
	
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;
	int diff, op;
	
	p == &i;
	diff = *p - *q;
	**&p;
	op = 3 - *p/(*q) + 7;
	
	printf("%d \n", p);
	printf("%d \n", diff);
	printf("%d \n", **&p);
	printf("%d \n", op);
	
	return 0;
}
