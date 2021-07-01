#include <stdio.h>

int main (void){
	
	int i=3,j=5;
	int *p, *q;
	p = &i;
	q = &j;
	int diff, op;                //Declarando as variáveis para as operações 
	
	p == &i;
	diff = *p - *q;
	**&p;
	op = 3 - *p/(*q) + 7;
	
	printf("%d \n", p);                  //Resposta: 6487564
	printf("%d \n", diff);         		 //Resposta: -2
	printf("%d \n", **&p);				 //Resposta: 3
	printf("%d \n", op);				 //Resposta: 10
	
	return 0;
}
