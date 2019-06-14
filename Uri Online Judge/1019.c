#include <stdio.h>

int main () {
/*      N = tempo de duracao  */
    int N; 

    scanf("%d", &N);

    int horas = N / 3600;
    int minutos = (N - horas * 3600) / 60;
    int segundos = N - (minutos * 60 + horas * 3600);

    printf("%d:%d:%d", horas, minutos, segundos);

    return 0;
}
