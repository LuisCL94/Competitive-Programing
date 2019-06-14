#include <stdio.h>

int maior_valor(int *vetor, int tamanho){
	int i, ma=0;
	for(i=0; i<tamanho; i++)                              
			if(vetor[i]>ma)  
				ma=vetor[i];				
	return ma;
}

int main() {

	int i, N[10];

	for(i=0; i<10; i++)                                   
			scanf("%d", &N[i]);
	
	printf("O maior elemento e %d\n", maior_valor(N, 10));	                                       
	
	return 0;									
}