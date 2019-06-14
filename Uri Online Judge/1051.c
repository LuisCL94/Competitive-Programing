#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

	double Sal, VIR;
	
	scanf("%lf", &Sal);
		
	if(Sal>=0 && Sal<=2000)
		printf("Isento\n");
	
	else { 
		if(Sal>2000 && Sal<=3000) 
		VIR = 0.08 * (Sal - 2000);
		if(Sal>3000 && Sal<=4500)
		VIR = 0.18 * (Sal - 3000) + 0.08 * 1000;	
		if(Sal>4500)
		VIR = 0.28 * (Sal - 4500) + 0.18 * 1500 + 0.08 * 1000;
		
		printf("R$ %.2lf\n", VIR);
	}
	
	return 0;
}