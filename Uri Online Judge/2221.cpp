#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, B, Ad, Dd, Ld, golpeDabriel, Ag, Dg, Lg, golpeGuarte;
    cin>>T;
    
    while(T--) {
        cin>>B;
        cin>>Ad>>Dd>>Ld;
        cin>>Ag>>Dg>>Lg;

        golpeDabriel = (Ad + Dd)/2;
        golpeGuarte = (Ag + Dg)/2;

        if(Ld%2==0)
            golpeDabriel+=B;

        if(Lg%2==0)
            golpeGuarte+=B;

        if(golpeDabriel>golpeGuarte)
            printf("Dabriel\n");
        else if(golpeGuarte>golpeDabriel)
            printf("Guarte\n");
        else
            printf("Empate\n");
    }

    return 0;
}