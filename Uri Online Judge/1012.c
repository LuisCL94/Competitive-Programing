#include <stdio.h>

int main() {

	double A, B, C;
	
	scanf("%lf %lf %lf", &A, &B, &C) ;

	double pi = 3.14159;
	
	double Atri = (A * C)/2;
	double Acir = pi * C * C;
	double Atra = ((A + B) * C)/2;
	double Aqua = B * B;
	double Aret = A * B;

	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", Atri, Acir, Atra, Aqua, Aret);
	return 0;
}
