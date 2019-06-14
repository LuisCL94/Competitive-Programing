#include <stdio.h>

int main() {

	int i;
	double X, N[100];

	scanf("%lf", &X);

	for (i=0; i<100; i++) {
		
		if(i==0) 
            N[i] = X;
		else
            N[i] = N[i-1] / 2;
		
		printf("N[%d] = %.4lf\n", i, N[i]);
	}
	
	return 0;
}