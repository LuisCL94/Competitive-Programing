#include <stdio.h>

int main () {
    
    int T;

    scanf("%d", &T);

    int PA, PB;
    double G1, G2;

    int i, tempo;

    for (i=1; i<=T; i++)  {
    	
    	scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

    	tempo=0;
    	
    	while(PA<=PB) {   		
    		
    		PA *= 1 + (G1/100); // PA = PA * (1 + (G1/100))
    		PB *= 1 + (G2/100); // PB = PB * (1 + (G2/100))  				
    		
    		tempo++;
    	
			if(tempo>100) {
				printf("Mais de 1 seculo.\n"); 
 				break;
 			}   	
    	}   		

   		if(tempo<=100) 
   			printf("%d anos.\n", tempo);  	
    }
    
	return 0;
}
