#include <stdio.h>
int main() {
    int hi, mi, hf, mf, M, H;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    H = hf - hi;
    if (H < 0) {
        H = 24 - hi + hf;
    }
    M = mf - mi;
    if (M < 0) {
        M = 60 - mi + mf;
        H--;
    }
    if (hf == hi && mf == mi)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);

    return 0;
}
