#include <stdio.h>

void troca (int *x, int *y){
	
	int temp;
	
	printf("%d; %d \n", *x, *y); 
	temp = *x; *x = *y; *y = temp;
	printf("%d; %d \n", *x, *y);
}

int main (void){
	int var1 = 5, var2 = 8;
	printf("%d; %d \n", var1, var2);
	troca(&var1, &var2);
	printf("%d; %d \n", var1, var2);
	
	return 0;
}
