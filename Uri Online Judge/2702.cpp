#include <bits/stdc++.h>
using namespace std;

int main() {
    int Ca, Ba, Pa;
    int Cr, Br, Pr;
    int passageiros = 0;

    cin>>Ca>>Ba>>Pa>>Cr>>Br>>Pr;

    if(Cr>Ca)
        passageiros += Cr-Ca;
    
    if(Br>Ba)
        passageiros += Br-Ba;

    if(Pr>Pa)
        passageiros += Pr-Pa;
    
    cout<<passageiros<<endl;

    return 0;
}