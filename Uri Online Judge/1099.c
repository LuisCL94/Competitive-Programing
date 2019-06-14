#include <stdio.h>

int main() {

    int i, j, N, X, Y, cont=0;

    scanf("%d", &N);

    for(i=1;i<=N;i++) {
        scanf("%d%d",&X,&Y);
        if(X<Y)  {
            cont=0;							/* atencao para os contadores*/
            for(j=X+1;j<Y;j++) 
                if(j%2!=0)
                    cont+=j;            
        }
        else  {   
            cont=0;
            for(j=Y+1,cont=0;j<X;j++)  
                if(j%2!=0)
                    cont+=j;
        }
    
    printf("%d\n",cont);
    }
    return 0;
}
