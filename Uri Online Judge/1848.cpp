#include <bits/stdc++.h>

using namespace std;

int convertToDecimal(string piscada);

int main() {
    string piscada;
    int grito = 0, conta_piscada = 0;
    while(1) {
        getline(cin, piscada);
        if(piscada!="caw caw")
            conta_piscada += convertToDecimal(piscada);
        else {
            grito++;
            printf("%d\n", conta_piscada);
            conta_piscada = 0;

            if(grito==3) 
                break;    
        }
    }    
    return 0;
}

int convertToDecimal(string piscada) {
    int decimal = 0; 
    
    for(int i=0; i<3; i++) {
        if(piscada[i]=='*')
            decimal += 1 * pow(2, 2-i);
    }

    return decimal;
}
