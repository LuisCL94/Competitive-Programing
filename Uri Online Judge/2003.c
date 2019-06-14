#include <stdio.h>

int main() {
    int hora, min;
    int atraso;

    while(scanf("%d:%d", &hora, &min)!=EOF) {
        
        if(hora<7)
            atraso = 0;    
        else
            atraso = (hora-7)*60 + min;

        printf("Atraso maximo: %d\n", atraso);
    }
    return 0;
}