#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q, nota, posicao;
    vector<int> notas;

    while (cin>>N>>Q) {
    
        while(N--)  {
            cin>>nota;

            notas.push_back(nota);
        }

        sort(notas.begin(), notas.end());
        reverse(notas.begin(), notas.end());
        
        while(Q--) {
            cin>>posicao;
            cout<<notas[posicao-1]<<endl;
        }
        notas.clear();
    }
    return 0;
}