#include <stdio.h>
#include <math.h>

int main() {
    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    double distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("%.4lf\n", distancia);

    return 0;
}
