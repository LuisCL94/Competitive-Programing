#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, conta_digitos;
    int C;

    cin>>C;

    while(C--) {

        cin>>n>>m;
        conta_digitos = m * log10(n) + 1;
    
        cout<<conta_digitos<<endl;
    }

    return 0;
}