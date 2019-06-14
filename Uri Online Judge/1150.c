#include <stdio.h>

int main() {

	int X, Z, soma=0, i, c=0;

	scanf("%d %d", &X, &Z);

	while (Z<=X) {
		scanf("%d", &Z);          
	}
	
	for(i=X; i<Z; i++)  {		
		
		c++;
		soma += i;
		
		if(soma>Z) break;
	
	}
	
	printf("%d\n", c);
	
	return 0;
}