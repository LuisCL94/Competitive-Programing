#include <stdio.h>

int main () {

    double raio;
    
    scanf("%lf",&raio);

    double PI = 3.14159;

    double volume = (4 * PI * raio * raio * raio) / 3;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
