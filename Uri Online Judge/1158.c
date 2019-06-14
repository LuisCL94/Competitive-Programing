#include <stdio.h>

int main () {
    
    int N, X, Y, i, j, Soma; 

    scanf("%d", &N);

    for(i=1; i<=N; i++)  {
		
		scanf("%d %d", &X, &Y);

		Soma=0; 
		
		for(j=X; j<X+2*Y; j++)  {
			
			if(j%2!=0) //porque nao pode ser if(j%2==1) da erro de 10% ???? 

				Soma+=j;
	
		}
		
		printf("%d\n", Soma);

	}

	return 0;
} 
/*  ou


int main () {
    
    int N, X, Y, i, j, Soma; 

    scanf("%d", &N);

    for(i=1; i<=N; i++)  {
		
		scanf("%d %d", &X, &Y);

		Soma=0; 
		
		if(X%2==0) X++;

		for(j=1; j<=Y; j++)  {
			
				Soma+=X;
				X+=2;
				
		}
		
		printf("%d\n", Soma);

	}

	return 0;
}

*/