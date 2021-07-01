#include <stdio.h>

main(){
	int i=5, *p;
	p = &i;
	
	printf("%x \n", p);           // imprimirá o endereço de memória de i na base hexadecimal (Resposta: 62fe1c)        
	printf("%d \n", *p+2);        // imprimirá o conteúdo que o ponteiro p guardou acrescentado 2 unidades (R: 7)
	printf("%d \n", **&p);        // imprimirá o conteúdo guardado no ponteiro p (R: 5)
	printf("%d \n", 3**p);        // imprimirá o conteúdo do conteúdo guardado no ponteiro multiplicado 3 (R: 15)
	printf("%d \n", **&p+4);      // imprimirá o conteúdo guardado no ponteiro p acrescentado 4 (R: 9)
}

