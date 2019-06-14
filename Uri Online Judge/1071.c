#include <stdio.h>

int main() {

	int i, X, Y, soma=0;

	scanf("%d %d", &X, &Y);

	for (i=X-1; i>Y; i--) 
		if(i%2!=0)                                    
			soma+=i;
		
	printf("%d\n", soma);		     
	                                    
	return 0;									
}