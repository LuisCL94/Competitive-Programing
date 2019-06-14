#include <stdio.h>

int main() {
   
    int tempo_gasto_h, velocidade_media;

    scanf("%d %d", &tempo_gasto_h, &velocidade_media);

    int distancia = tempo_gasto_h * velocidade_media;
    double litros_necessarios = distancia / 12.0;

    printf("%.3lf\n", litros_necessarios);
    
    return 0;
}
