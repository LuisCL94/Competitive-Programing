#include <stdio.h>

int main() {

    int L;
  
    while(scanf("%d", &L)!=EOF) {

   		int Vi, i;  
    	int mais_veloz = 0;

	    for (i = 0; i < L; i++) {
    	    scanf("%d", &Vi);
        	if(Vi > mais_veloz)  
        		mais_veloz = Vi;
		}

		int nivel;
	
		if(mais_veloz < 10)
			nivel = 1;
		else if (mais_veloz>=10 && mais_veloz<20)
			nivel = 2;
		else
			nivel = 3;
    
   		printf("%d\n", nivel);
   	}
    
    return 0;
}
