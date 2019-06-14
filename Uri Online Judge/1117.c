#include <stdio.h>

int main() {

    double X, Y, media;
    
    scanf("%lf", &X);

    while(X<0 || X>10) {
        printf("nota invalida\n");
        scanf("%lf", &X);
    }

    scanf("%lf", &Y);

    while(Y<0 || Y>10) {
        printf("nota invalida\n");
        scanf("%lf", &Y);
    }
    
    media = (X+Y)/2;
    
    printf("media = %.2lf\n", media);
    
    return 0;
}
