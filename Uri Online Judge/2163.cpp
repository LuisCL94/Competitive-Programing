#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin>>N>>M;
    int terreno[N][M];

    for(int i=0; i<N; i++) 
        for(int j=0; j<M; j++) 
            cin>>terreno[i][j];

    int X=0, Y=0;

    for(int i=0; i<N; i++) 
        for(int j=0; j<M; j++) 
            if(terreno[i][j]==42) 
                if(terreno[i-1][j] == 7)
                    if(terreno[i+1][j] == 7)     
                        if(terreno[i][j-1] == 7)
                            if(terreno[i][j+1] == 7) 
                                if(terreno[i-1][j-1] == 7)
                                    if(terreno[i-1][j+1] == 7)
                                        if(terreno[i+1][j-1] == 7)
                                            if(terreno[i+1][j+1] == 7) {
                                                X=i+1;
                                                Y=j+1;
                                            }
    printf("%d %d\n", X, Y);
    return 0;
}