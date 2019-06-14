#include <stdio.h>

int main() {

    int distancia_percorrida_Km;
    double combustivel_gasto_litros;

    scanf("%d %lf", &distancia_percorrida_Km, &combustivel_gasto_litros);

    double consumo_medio = distancia_percorrida_Km / combustivel_gasto_litros;

    printf("%.3lf km/l\n", consumo_medio);

    return 0;
}
