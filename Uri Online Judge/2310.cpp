#include <bits/stdc++.h>
using namespace std;

int main() {
    double S=0.0, B=0.0, A=0.0, S1=0.0, B1=0.0, A1=0.0;
    int N, s, b, a, s1, b1, a1;
    string nome;

    cin>>N;
    while(N--) {
        cin>>nome;
        cin>>s>>b>>a;
        cin>>s1>>b1>>a1;
        S+=s;
        B+=b;
        A+=a;
        S1+=s1;
        B1+=b1;
        A1+=a1;
    }

    printf("Pontos de Saque: %.2lf %%.\n", (S1/S)*100);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (B1/B)*100);
    printf("Pontos de Ataque: %.2lf %%.\n", (A1/A)*100);

    return 0;
}