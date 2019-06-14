#include <stdio.h>

int main() {

	int i, X, N[10];

	scanf("%d", &X);							/* Vc digita o valor de X  */

	for (i=0; i<10; i++) {
		
		if(i==0) 
            N[i] = X;             			    /*    N[0] = X     */
		else                                    /*    N[1] = 2X    */      
            N[i] = 2 * N[i-1];    				/*    N[2] = 4X    */			
	                                           	/*       . . .     */
		printf("N[%d] = %d\n", i, N[i]);        /*       . . .     */
	}                                           /*       . . .     */
	return 0;									/*   N[10] = 512X  */
}
