#include <stdio.h>

int main () {
    
    int N, X, i, j; 

    scanf("%d", &N);

    for(j=1; j<=N; j++) {  
    	
    	scanf("%d", &X);
    
    	int Soma=0;
    
    	for(i=1; i<=X; i++)  {	
			if(X%i==0) 
				Soma += i;
		}
	
		int Rezultado = Soma-X; 
	
		if(Rezultado==X) printf("%d eh perfeito\n", X);
		else printf("%d nao eh perfeito\n", X);
	}	
		return 0;
}
