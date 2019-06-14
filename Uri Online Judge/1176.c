#include <stdio.h>

int main()  {

	unsigned long long int Fib[61];
	int i;

	Fib[0] = 0;
	Fib[1] = 1;
	for(i=2; i<61; i++) 
		Fib[i] = Fib[i-1] + Fib[i-2];

	int T, N;
	
	scanf("%d", &T);

	for(i=0; i<T; i++) {
		scanf("%d", &N);
		printf("Fib(%d) = %lld\n", N, Fib[N]);		
	}
	
	return 0;
}
	//unsigned long long int N;  // inteiro de 4 bits sem sinal

/*
#include <stdio.h>

long long int fibonacci_termo(long long int n) {
    if (n == 0) return 0;
    if (n == 1 || n==2) return 1;
    else return fibonacci_termo(n - 1) + fibonacci_termo(n - 2);
}

int main()  {
	int T;
	
	scanf("%d", &T);
	
	int i;
	unsigned long long int N;  // inteiro de 4 bits sem sinal

	for (i=0; i<T; i++) {
								
		scanf("%lld", &N);

		printf("Fib(%lld) = %lld\n", N, fibonacci_termo(N));
		
	}
	
	return 0;
}
     Porque unsigned int???
*/