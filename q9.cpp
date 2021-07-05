
int main(){
	
	int vet[] = {4,9,13};
	int i;
	
	for(i=0;i<3;i++){
	printf("%d ", *(vet+i));            //Retorna os valores guardados em cada elemento do vetor (4, 9 e 13)
	}
	
}

int main(){
	
	int vet[] = {4,9,13};
	int i;
	
	for(i=0;i<3;i++){
	printf("%X ", vet+i);            //Retorna o endereço de memória guardado em cada elemento do vetor (62FE10, 62FE14 e 62FE18)
	}
	
}
