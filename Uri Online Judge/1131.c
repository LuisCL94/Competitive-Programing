#include <stdio.h>

int main() {

    int G, I, SouN, grenais=0, grem=0, inter=0, empate=0;              
    
    while(1) {
    
        scanf("%d %d", &I, &G);
        
        grenais++;
        if(I>G) inter++;
        if(G>I) grem++;
        if(G==I) empate++;
        
        printf("Novo grenal 1-sim 2-nao\n");

        scanf("%d", &SouN);
        
        if (SouN==2) break;
   
    }
    
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", grem);
    printf("Empates:%d\n", empate);
    
    if (inter>grem) printf("Inter venceu mais\n");
    if (grem>inter) printf("Gremio venceu mais\n");
    if (inter==grem) printf("Nao houve vencedor\n");
    
    return 0;
}
