#include <bits/stdc++.h>
using namespace std;

int main () {

    int N, M, n100, n50, n20, n10, n5, n2;
    int n;
    while(1) {
        
        cin>>N>>M;
        if(N==0 && M==0)
            break;

        n = M-N;

        n100 = n/100;
        n50 = (n - n100 * 100) / 50;
        n20 = (n - (n50 * 50 + n100 * 100))/20;
        n10 = (n - (n20 * 20 + n50 * 50 + n100 * 100))/ 10;
        n5 = (n - (n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 5;
        n2 = (n - (n5 * 5 + n10 * 10 + n20 * 20 + n50 * 50 + n100 * 100))/ 2;

        if(n100+n50+n20+n10+n5+n2 == 2)
            printf("possible\n");
        else
            printf("impossible\n");
    }    

    return 0;
}
