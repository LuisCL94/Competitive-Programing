#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin>>N;

    int medidas[N], medida, posicao_queda=0;

    for(int i=0; i<N; i++) {
        cin>>medida;
        medidas[i] = medida;
    }

    for(int i=1; i<N; i++) {
        if(medidas[i]<medidas[i-1]) {
            posicao_queda = i+1;
            break;
        }
    }

    printf("%d\n", posicao_queda);
    return 0;
}