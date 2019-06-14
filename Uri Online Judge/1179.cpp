#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=15, numero;
    vector<int> pares;
    vector<int> impares;

    while(n--) {
        cin>>numero;
        
        if(numero%2==0) {
            pares.push_back(numero);
            if(pares.size()==5) {
                for(int i=0; i<(int)pares.size(); i++)
                    printf("par[%d] = %d\n", i, pares[i]);
                pares.clear();
            }
        }

        else {
            impares.push_back(numero);    
            if(impares.size()==5) {
                for(int i=0; i<(int)impares.size(); i++)
                    printf("impar[%d] = %d\n", i, impares[i]);
                impares.clear();
            }    
        }    
    }
    
    for(int i=0; i<(int)impares.size(); i++) {
        printf("impar[%d] = %d\n", i, impares[i]);
    }
    
    for(int i=0; i<(int)pares.size(); i++) {
        printf("par[%d] = %d\n", i, pares[i]);
    }

    return 0;
}