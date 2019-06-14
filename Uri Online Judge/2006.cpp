#include <bits/stdc++.h>
using namespace std;

int main() {
    int resposta_correta, acertos=0;
    int resposta;

    cin>>resposta_correta;
    
    for(int i=0; i<5; i++) {
        cin>>resposta;
        if(resposta==resposta_correta)
            acertos++;
    }
    cout<<acertos<<endl;
    return 0;
}