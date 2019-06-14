#include <stdio.h>

int main() {

	int i, N;
	int quantia, C=0, R=0, S=0, Total=0;
	char tipo;
	double percentC, percentR, percentS ;
	

	scanf("%d", &N);

	for(i=0; i<N; i++) {
		scanf("%d %c", &quantia, &tipo);
		if(tipo == 'C') C+=quantia;
		if(tipo == 'R') R+=quantia;
		if(tipo == 'S') S+=quantia;	
	}
	
	Total=R+S+C;
	percentC = (C * 100.00) / Total;
	percentR = (R * 100.00) / Total;
	percentS = (S * 100.00) / Total;
	
	printf("Total: %d cobaias\n", Total);
	printf("Total de coelhos: %d\n", C);
	printf("Total de ratos: %d\n", R);
	printf("Total de sapos: %d\n", S);
	printf("Percentual de coelhos: %.2lf %%\n", percentC);
	printf("Percentual de ratos: %.2lf %%\n", percentR);
	printf("Percentual de sapos: %.2lf %%\n", percentS);

	return 0;
}