#include <stdio.h>

main(){
	int i=5, *p;
	p = &i;
	
	printf("%x \n", p);           // imprimir� o endere�o de mem�ria de i na base hexadecimal (Resposta: 62fe1c)        
	printf("%d \n", *p+2);        // imprimir� o conte�do que o ponteiro p guardou acrescentado 2 unidades (R: 7)
	printf("%d \n", **&p);        // imprimir� o conte�do guardado no ponteiro p (R: 5)
	printf("%d \n", 3**p);        // imprimir� o conte�do do conte�do guardado no ponteiro multiplicado 3 (R: 15)
	printf("%d \n", **&p+4);      // imprimir� o conte�do guardado no ponteiro p acrescentado 4 (R: 9)
}

