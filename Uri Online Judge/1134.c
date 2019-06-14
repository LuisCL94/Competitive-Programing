#include <stdio.h>

int main() {
    
    int combustivel, alcool = 0, gasolina = 0, diesel = 0;
    
    while(1) {	
        
        scanf("%d", &combustivel);
		
		if (combustivel == 1)  
			alcool += 1;
		if (combustivel == 2)  
			gasolina += 1;
		if (combustivel == 3) 
	    	diesel += 1;
        if (combustivel == 4) 
        	break;
	}
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    
    return 0;
}