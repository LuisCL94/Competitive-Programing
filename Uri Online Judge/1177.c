#include <stdio.h>
int main() {

	int i, T, N[10];

	scanf("%d", &T); 		   /* A entrada contém um valor inteiro T (2 ≤ T ≤ 50) */

	for (i=0; i<10; i++) {
			
		N[i] = i % T;			
			
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}
