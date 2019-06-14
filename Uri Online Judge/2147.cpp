#include <bits/stdc++.h>
using namespace std;

int main() {
    char palavra[10001];
    double tempo;
    int C;
    
    cin>>C;

    while(C--) {
        cin>>palavra;
        tempo = strlen(palavra)/100.0;
        printf("%.2lf\n", tempo);
    }
    
    return 0;
}