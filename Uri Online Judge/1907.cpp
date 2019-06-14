#include<iostream> 
using namespace std; 
  
#define MAX_V 1024

char G[MAX_V][MAX_V];
int N, M;

void floodFillUtil(int x, int y, char prevC, char newC)  { 

    if (x < 0 || x >= N || y < 0 || y >= M) 
        return; 
    if (G[x][y] != prevC) 
        return; 

    G[x][y] = newC; 
  
    floodFillUtil(x+1, y, prevC, newC); 
    floodFillUtil(x-1, y, prevC, newC); 
    floodFillUtil(x, y+1, prevC, newC); 
    floodFillUtil(x, y-1, prevC, newC); 
} 
  
void floodFill(int x, int y, char newC) { 
    int prevC = G[x][y]; 
    floodFillUtil(x, y, prevC, newC); 
} 
  
int main() {
    
    cin>>N>>M;

    int count = 0;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            cin>>G[i][j];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(G[i][j]=='.') {
                floodFill(i, j,'o');
                count++;
            }
        }
    }    
    cout<<count<<endl;
}