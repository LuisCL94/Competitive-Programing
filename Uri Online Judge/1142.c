#include <stdio.h>

int main() {

	int N;

	scanf("%d", &N);

 	for (int i = 1; i <= (4*N - 1); i+=4) {
        for (int j = i; j <= i+2; j++) {
            printf("%d ", j);
        }
		printf("PUM\n"); 
	}

	return 0;
}

 	