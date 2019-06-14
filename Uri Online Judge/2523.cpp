#include <bits/stdc++.h>
using namespace std;

int main() {
    char letras[27];

    while(cin>>letras) {    
        int N;
        cin>>N;

        int escolhas[N];

        for(int i=0; i<N; i++) {
            cin>>escolhas[i];
        }

        for(int i=0; i<N; i++) 
            printf("%c", letras[escolhas[i]-1]);
        
        printf("\n"); 
    }

   return 0;
}