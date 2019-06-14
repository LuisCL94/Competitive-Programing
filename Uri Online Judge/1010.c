#include <stdio.h>

int main() {
	int CP1, NP1, CP2, NP2;

	double VP1, VP2;

	scanf("%d %d %lf %d %d %lf", &CP1, &NP1, &VP1, &CP2, &NP2, &VP2);

	double VP = NP1 * VP1 + NP2 * VP2;

	printf("VALOR A PAGAR: R$ %.2lf\n", VP);

	return 0;
}
