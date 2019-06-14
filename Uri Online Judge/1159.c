#include <stdio.h>

int main () {
    
    int X, i, Soma; 

    while(1) {
    	 	
    	scanf("%d", &X);
    
    	if(X==0) break; 
		
		Soma=0;

		if(X%2!=0) X++; //Porque nao pode .. if(X%2==1)... da erro de 10% ????

		for(i=1; i<=5; i++)  {
			
				Soma+=X;
				X+=2;
				
		}
		
		printf("%d\n", Soma);

	}

	return 0;
}

