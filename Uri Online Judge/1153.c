#include <stdio.h>

int fatorial(int N) {
    int i, fat=1;
    for(i = 1; i <= N; i++) 
    	fat = fat * i;
    return fat;
}

int main () {
    
    int N;

    scanf("%d", &N);

    printf("%d\n", fatorial(N));
		
	return 0;
}
