#include <stdio.h>
int main() {

    short i, j, n, l, aux;
    int troca, totalTrocas=0;
    short vetor[l];
    
    scanf("%hd", &n);
    for(i=0; i<n; i++) {
    	
    	scanf("%hd", &l);
    	
    	for (j = 0; j < l; j++)
        	scanf("%hd", &vetor[j]);

        troca = 1;
        totalTrocas = 0;
        while(troca){
	    	troca = 0;
	    	for(j = 0; j < l-1; j++){
				if(vetor[j] > vetor[j+1]){
				    aux = vetor[j];
				    vetor[j] = vetor[j+1];
		    		vetor[j+1] = aux;
		    		troca = 1;
		    		totalTrocas++;
		 		}
	     	}
	 	}

    	printf("Optimal train swapping takes %d swaps.\n", totalTrocas);
    
   	} 
    return 0;
}