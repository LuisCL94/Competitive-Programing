#include <stdio.h>

int main () {
/*      N = idade em dias   */
    int N;

    scanf("%d", &N);

    int anos = N / 365;
    int meses = (N - anos * 365) / 30;
    int dias = N - (meses * 30 + anos * 365);

    printf("%d ano(s)\n", anos);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);

    return 0;
}
