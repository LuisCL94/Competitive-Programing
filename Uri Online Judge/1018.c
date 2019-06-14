#include <stdio.h>

int main () {
/*      N = valor em reais  */
    int N;

    scanf("%d", &N);

    int n100 = N/100;
    int n50 = (N - n100 * 100) / 50;
    int n20 = (N - (n50 * 50 + n100 * 100)) /20;
    int n10 = (N - (n20 * 20 + n50 * 50 + n100 * 100))/ 10;
    int n5 = (N - (n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 5;
    int n2 = (N - (n5 * 5 + n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 2;
    int n1 = (N - (n2 * 2 + n5 * 5 + n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 1;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}
