#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, H;

    scanf("%d", &N);

    int medidas[N];

    for(i=0; i<N; i++) {
        scanf("%d", &H);
        medidas[i] = H;
    }
    
    int x = 1;
    
    if(N==2 && medidas[0]==medidas[1])
        x=0;

    for(i=2; i<N; i++) {  
        if(medidas[i]>=medidas[i-1] && medidas[i-1]>=medidas[i-2])
            x=0;    
        else if(medidas[i]<=medidas[i-1] && medidas[i-1]<=medidas[i-2])
            x=0;
    }

    if(x)
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
}