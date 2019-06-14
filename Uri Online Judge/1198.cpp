#include <stdio.h>

int main() {
    
    long long int sh, so;

    while(scanf("%lld %lld", &sh, &so) != EOF) {
        
        if(sh > so)
            printf("%lld\n", sh-so);
        else
            printf("%lld\n", so-sh);
    }

    return 0;
}