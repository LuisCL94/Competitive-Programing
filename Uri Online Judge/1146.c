#include <stdio.h>

int main() {
    
    int X, Y;

    while(1) {
    	
    	scanf("%d", &X) ;

    	int i;

    	for(i=1; i<=X; i++) {
			printf("%d", i);
			if(i==X)
				printf("\n");
			else
				printf(" ");

    	}	
		if(X==0) break;
	}
	return 0;
}