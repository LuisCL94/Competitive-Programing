#include <stdio.h>

int main() {

    int i, j, X, Y, soma=0;              
    
    scanf("%d %d", &X, &Y);
    
    if(X<Y) {           
        for(i=X; i<=Y; i++)
            if (i%13!=0)
                soma+=i;
        }
    
    else {           
        for(j=X; j>Y-1; j--)
            if (j%13!=0)
                soma+=j;
    }

    printf("%d\n", soma);

    return 0;
}
