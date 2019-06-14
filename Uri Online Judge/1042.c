#include <stdio.h>

void BubbleSort(int vetor[], int tamanho) {
    int memoria, troca, i, j;
	troca=1;
	for(j=tamanho-1; (j>=1) && (troca==1); j--) {
        troca=0;
		for(i=0; i<j; i++) {
			if(vetor[i]>vetor[i+1]) {
				memoria=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=memoria;
                troca=1;
            }
        }
    }
}

int main() {
    int i, vetor[3], vetor_original[3];
    for (i = 0; i < 3; i++) {
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 3; i++) {
        vetor_original[i]=vetor[i];
    }
    BubbleSort(vetor, 3);
    for (i = 0; i < 3; i++) {
        printf("%d\n", vetor[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++) {
        printf("%d\n", vetor_original[i]);
    }
}
