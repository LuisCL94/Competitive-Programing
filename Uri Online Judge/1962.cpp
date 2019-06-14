#include <bits/stdc++.h>

using namespace std;

int main() {
    int ano_atual = 2015;
    int anos_transcorridos, ano_acontecimento;
    int N;

    cin>>N;

    while(N--) {
        cin>>anos_transcorridos;

        ano_acontecimento = ano_atual - anos_transcorridos;
    
        if(ano_acontecimento<=0) {
            ano_acontecimento *= -1;
            ano_acontecimento++;
    
            cout<<ano_acontecimento<<" A.C."<<endl;
        }
        else
            cout<<ano_acontecimento<<" D.C."<<endl;
        }
        return 0;
}