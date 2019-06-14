#include <stdio.h>

int main () {
    
    int Idades, contador=0;
    double Media, Soma=0;
    
    while(1) {
    
    	scanf("%d", &Idades);
		
		if (Idades<0) break;
		
		contador++;
		Soma+=Idades;
		
		Media = Soma/contador;
	}
   	
   	printf("%.2lf\n", Media);
	
	return 0;
}
