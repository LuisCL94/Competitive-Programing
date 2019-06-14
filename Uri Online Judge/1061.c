#include<stdio.h>

int main() {
 
 int Dia1, Hora1, Minuto1, Segundo1;
 int Dia2, Hora2, Minuto2, Segundo2;
 int W, X, Y, Z, Total1, Total2, Duracao;

 scanf(" %d %d : %d : %d\n", &Dia1, &Hora1, &Minuto1, &Segundo1);		
 scanf(" %d %d : %d : %d", &Dia2, &Hora2, &Minuto2, &Segundo2);
 
	
	Total1 = Dia1 * 86400 + Hora1 * 3600 + Minuto1 * 60 + Segundo1;    /* 1dia = 86400 seg */
    Total2 = Dia2 * 86400 + Hora2 * 3600 + Minuto2 * 60 + Segundo2;    

    Duracao = Total2 - Total1;

    W = Duracao / 86400;
    X = (Duracao - W * 86400) / 3600;
    Y = (Duracao - W * 86400 - X * 3600) / 60;
    Z = (Duracao - W * 86400 - X * 3600 - Y * 60);

 	printf("%d dia(s)\n", W);
 	printf("%d hora(s)\n", X);
 	printf("%d minuto(s)\n", Y);
 	printf("%d segundo(s)\n", Z);

 	return 0;
}