#include <stdio.h>

int main() {
   
    int A, maior, menor;

    for (int i = 0; i < 3; i++) {  
        scanf("%d", &A);
        if (i==0)   {
            menor = maior = A;
        }
        if (A < menor){
            menor = A;
            
        }
        if (A > maior){
            maior = A;
        }
    }
    
    printf("%d eh o maior\n", maior);
    
    return 0;
}
