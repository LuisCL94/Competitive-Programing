#include <stdio.h>

int main() {

    int X;

    scanf("%d", &X);
	
	while(X!=2002) {
		printf("Senha Invalida\n");
		scanf("%d", &X);
	}
    	
    printf("Acesso Permitido\n");	
   		
    return 0;
}
