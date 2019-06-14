#include <stdio.h>

int main () {
    
    int N, X, i , j, contaInteiros; 

    scanf("%d", &N);

    for(j=1; j<=N; j++) {     
    	
    	scanf("%d", &X);
  
		contaInteiros=0;    
    	
    	for(i=1; i<=X; i++)
			if(X%i==0) 
				contaInteiros++; 
		
		if(contaInteiros==2) 
			printf("%d eh primo\n", X); 
		else
			printf("%d nao eh primo\n", X);
	
	}
		
	return 0;
}	