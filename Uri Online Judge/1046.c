#include <stdio.h>
int main () {
    int hi, hf, t, Dur;

    scanf("%d %d", &hi, &hf);

    t = 24 - hi + hf;

    if(t<=24)
    printf("O JOGO DUROU %d HORA(S)\n", t);
    else
    printf("O JOGO DUROU %d HORA(S)\n", hf - hi);

    return 0;
}
