#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        int power;
        cin>>power;
        if(power>8000)
            printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");        
    }
    return 0;
}