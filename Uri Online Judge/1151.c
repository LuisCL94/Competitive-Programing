#include <stdio.h>

int fibonacci_termo(int n) {
    if (n == 0) return 0;
    if (n == 1 || n==2) return 1;
    else return fibonacci_termo(n - 1) + fibonacci_termo(n - 2);
}

int main () {
    
    int N, i;
    
    scanf("%d", &N);
 
    for (i = 0; i < N-1 ; i++) {
  
   		printf("%d ", fibonacci_termo(i));
   		
   	}
    
    printf("%d\n", fibonacci_termo(N-1));

    return 0;
}
