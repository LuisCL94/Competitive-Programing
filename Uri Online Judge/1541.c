#include <stdio.h>
#include <math.h>

int main()   {
    
    double percentual, medida_lado, medida_total;
    int A, B, C; 
    
    while(1)  {
        
        scanf("%d", &A);
        if(A==0) break; 
        
        scanf("%d", &B);
        if(B==0) break;
        
        scanf("%d", &C);
        if(C==0) break;

        percentual = (double) C/100;
        medida_total = (double) (A * B)/percentual;
        medida_lado = sqrt(medida_total);

        printf("%.lf\n", floor(medida_lado));
    }

    return 0;
}
