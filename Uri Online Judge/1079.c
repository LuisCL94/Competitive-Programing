#include <stdio.h>

int main() {

	int i, N;
	double n1, n2, n3, media;
	
	scanf("%d", &N);
	
	for (i=0; i<N; i++) { 
		scanf("%lf %lf %lf", &n1, &n2, &n3);				/* nao da pra separar o for */ 
		media = (2*n1 + 3*n2 + 5*n3) / 10;	  
		printf("%.1lf\n", media);
	}                                 
	
	return 0;									
}