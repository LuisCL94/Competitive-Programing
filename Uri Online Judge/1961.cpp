#include <bits/stdc++.h>

using namespace std;

int main() {
    short int P, N, altura;
    vector<int> alturas;

    cin>>P>>N;

    while(N--) {
        cin>>altura;
        alturas.push_back(altura);
    }
    
    int x=0;
    for(int i=0; i<(int)alturas.size()-1; i++) {
        if(alturas[i] + P < alturas[i+1] || alturas[i+1] + P < alturas[i]) 
            x=1;
    }

    if(x)
        printf("GAME OVER\n");

    else
        printf("YOU WIN\n");        
    
    return 0;
}