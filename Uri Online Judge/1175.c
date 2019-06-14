#include <stdio.h>

void Troca(int *a, int *b)  {
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return;
} 

int main() {
	int i, N[20];
	for (i=0; i <20; i++) {
		scanf("%d", &N[i]);
	}
    
    for (i=0; i<20; i++) {
    	if(i<(20/2))
    		Troca(&N[i], &N[19-i]);
		printf("N[%d] = %d\n", i, N[i]);
	}

   return(0);
}