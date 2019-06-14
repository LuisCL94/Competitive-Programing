#include <stdio.h>

int main() {

    int M, N, i, soma=0;

	while(1) {
    	scanf("%d %d", &M, &N);
    	if(M<=0||N<=0) break;
   		
   		if (M>N) {
    		soma = 0;
    		for(i=N;i<=M;i++) {
    			soma+=i;
    			printf("%d ", i);
    		}
			printf("Sum=%d\n", soma);
		}  
	  	
	  	if (M<N) {
    		soma=0;
    		for(i=M;i<=N;i++) {
    			soma+=i;
    			printf("%d ", i);
    		}
			printf("Sum=%d\n", soma);
		}
	}
     
    return 0;
}
