                                                                          /*            

S = 1 + 1/2 + 1/3 + … + 1/100                                              */

#include <stdio.h>

int main () {
    
    double Soma=0, i; 

    for(i=1; i<=100; i++)  {
		
		Soma += 1/i;

	}
   
   	printf("%.2lf\n", Soma);
	
	return 0;
}
