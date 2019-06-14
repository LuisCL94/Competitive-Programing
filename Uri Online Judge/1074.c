#include <stdio.h>

int main() {

	int i, N, X;
	
	scanf("%d", &N);
	
	for (i=0; i<N; i++) { 
		scanf("%d", &X);				/* nao da pra separar o for */
		if(X==0) 
			printf("NULL\n");
		else {
			if(X%2==0) 
				printf("EVEN ");
			else 
				printf("ODD ");
			if(X>0) 
				printf("POSITIVE\n");
			else 
				printf("NEGATIVE\n");
		}	  
	}                                 
	
	return 0;									
}