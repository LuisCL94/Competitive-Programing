#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, Q, consumido;
    string nomeDaFruta;

    while(1) {
        
        cin>>T;
        if(T==0)
            break;
            
        consumido = 0;
        while(T--) {
            cin>>Q;
            getchar();
            getline(cin, nomeDaFruta);
            if(nomeDaFruta=="suco de laranja")
                consumido+=Q*120; 
            if(nomeDaFruta=="morango fresco") 
                consumido+=Q*85;
            if(nomeDaFruta=="mamao") 
                consumido+=Q*85;
            if(nomeDaFruta=="goiaba vermelha") 
                consumido+=Q*70;
            if(nomeDaFruta=="manga") 
                consumido+=Q*56;
            if(nomeDaFruta=="laranja") 
                consumido+=Q*50;
            if(nomeDaFruta=="brocolis") 
                consumido+=Q*34;        
        }

        if(consumido>130)
            printf("Menos %d mg\n", consumido - 130);
        else if(consumido<110)
            printf("Mais %d mg\n", 110 - consumido);
        else
            printf("%d mg\n", consumido);
    }
    
    return 0;
}