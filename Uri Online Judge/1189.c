#include <stdio.h>

int main()   {
     
    char O;

    scanf("%c", &O);

    int i, j;
    double M[12][12], soma = 0, media;

    for(i=0; i<12; i++)
        for(j=0; j<12; j++)
            scanf("%lf", &M[i][j]);

    for(i=1; i<=10; i++) {
        if(i<=5) 
            for(j=0; j<=i-1; j++)  
                soma += M[i][j];                     
        else 
            for(j=0; j<=10-i; j++)
                soma += M[i][j];
    }   
    
    media = soma/30;
    
    if(O=='S') printf("%.1lf\n", soma);
    if(O=='M') printf("%.1lf\n", media);

    return 0;
}
