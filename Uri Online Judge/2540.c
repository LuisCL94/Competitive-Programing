#include <stdio.h>

int main() {
    int N, voto, count1;

    while(scanf("%d", &N)!=EOF) {
    count1 = 0;

    int total = N;
    while(N--){
        scanf("%d", &voto);
        if(voto==1)
            count1+=1;
    }

    if(count1 >= (2*total)/3.0) 
        printf("impeachment\n");
    else
        printf("acusacao arquivada\n");
    }
    return 0;
}