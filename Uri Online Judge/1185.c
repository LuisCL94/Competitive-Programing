#include <stdio.h>

int main()   {
     
    char O;

    scanf("%c", &O);

    int i, j;
    float M[12][12], soma = 0, media;

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%f", &M[i][j]);

    for(i=0; i<=10; i++) {
        for(j=0; j<=10-i; j++) {
                soma += M[i][j];                     
        }
    }   
    
    media = soma/66;
    
    if(O=='S') printf("%.1lf\n", soma);
    if(O=='M') printf("%.1lf\n", media);

    return 0;
}
