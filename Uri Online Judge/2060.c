
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m2=0, m3=0, m4=0, m5=0;
    int N, num;

    scanf("%d", &N);

    while(N--) {
        scanf("%d", &num);
        if(num%2==0)
            m2++;
        if(num%3==0)
            m3++;
        if(num%4==0)
            m4++;
        if(num%5==0)
            m5++;
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

    return 0;
}