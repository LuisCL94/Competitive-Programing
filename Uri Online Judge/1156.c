                                                                          /*            

S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?                                     */

#include <stdio.h>     

int main () {
    
    double Soma=0, i, j; 

    for(i=1, j=1; i<=39; i+=2,j*=2)  {
		
	Soma += i/j;		

	}
   
   	printf("%.2lf\n", Soma);

	return 0;
}

