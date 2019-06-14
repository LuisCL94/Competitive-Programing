#include <stdio.h>

int main () {

    int n, n100, n50, n20, n10, n5, n2, m100, m050, m025, m010, m005, m001;
    double N;

    scanf("%lf", &N);

    n = (int)N;
    N += 1e-9;
    n100 = n/100;
    n50 = (n - n100 * 100) / 50;
    n20 = (n - (n50 * 50 + n100 * 100)) /20;
    n10 = (n - (n20 * 20 + n50 * 50 + n100 * 100))/ 10;
    n5 = (n - (n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 5;
    n2 = (n - (n5 * 5 + n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 2;
    m100 = (n - (n2 * 2 + n5 * 5 + n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 1;
    m050 = (N - n)/0.5;
    m025 = ((N - n) - m050 * 0.5)/0.25;
    m010 = ((N - n) - (m050 * 0.5 + m025 * 0.25))/0.1;
    m005 = ((N - n) - (m050 * 0.5 + m025 * 0.25 + m010 * 0.1))/0.05;
    m001 = ((N - n) - (m050 * 0.5 + m025 * 0.25 + m010 * 0.1 + m005 * 0.05))/0.01;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", n100, n50, n20, n10, n5, n2, m100, m050, m025, m010, m005, m001);

    return 0;
}
