#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    string sinal1, sinal2;
    
    cin>>N;
    
    while(N--) {
        cin>>sinal1>>sinal2;
        
        if(sinal1=="ataque" && sinal2!="ataque")
            printf("Jogador 1 venceu\n");

        else if(sinal1!="ataque" && sinal2=="ataque")
            printf("Jogador 2 venceu\n");

        else if(sinal1=="ataque" && sinal2=="ataque")
            printf("Aniquilacao mutua\n");

        if(sinal1=="pedra" && sinal2=="papel")
            printf("Jogador 1 venceu\n");

        else if(sinal1=="papel" && sinal2=="pedra")
            printf("Jogador 2 venceu\n");

        else if(sinal1=="pedra" && sinal2=="pedra")
            printf("Sem ganhador\n");

        else if(sinal1=="papel" && sinal2=="papel")
            printf("Ambos venceram\n");
    }

    return 0;
}