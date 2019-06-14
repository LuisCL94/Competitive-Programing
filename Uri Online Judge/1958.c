#include <stdio.h>
#include <stdlib.h>

int main() {
	
    long double n;

	scanf("%LE", &n);
	
    printf("%+.4LE\n", n);	
	
    return 0;
}