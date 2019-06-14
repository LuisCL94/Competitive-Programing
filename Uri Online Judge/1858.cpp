#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, min=100, position;
    cin>>N;
    int pessoas[N];

    for(int i=0; i<N; i++) 
        cin>>pessoas[i];
    
    for(int i=0; i<N; i++) 
        if(pessoas[i]<min){
            min = pessoas[i];
            position = i + 1;
        }
        
    printf("%d\n", position);

    return 0;
}


