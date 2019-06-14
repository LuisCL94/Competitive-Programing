#include <bits/stdc++.h> 
  
using namespace std;  

void printknapSack(int W, vector<int> wt, vector<int> val, int n)  { 
    int i, w; 
    int K[n + 1][W + 1]; 
  
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max(val[i - 1] +  
                    K[i - 1][w - wt[i - 1]], K[i - 1][w]); 
            else
                K[i][w] = K[i - 1][w]; 
        } 
    } 
  
    int res = K[n][W];      
    printf("%d brinquedos\n", res); 
      
    w = W;
    int count_weigts=0;
    int count_selected=0;
    for (i = n; i > 0 && res > 0; i--) { 
        if (res == K[i - 1][w])  
            continue;         
        else { 
            count_selected+=1;
            count_weigts += wt [i - 1];
            res = res - val[i - 1]; 
            w = w - wt[i - 1]; 
        } 
    } 
    printf("Peso: %d kg\n", count_weigts); 
    cout<<"sobra(m) "<<wt.size() - count_selected<<" pacote(s)\n";
} 

int main() {
    int capacidade = 50, peso, valor, n;
    vector<int> pesos, valores;
    int N;

    cin>>N;

    while(N--) {
        cin>>n;
        while(n--) {
            cin>>valor>>peso;
            valores.push_back(valor);
            pesos.push_back(peso);
        }
        printknapSack(capacidade, pesos, valores, valores.size()); 

        pesos.clear();
        valores.clear();
        cout<<"\n";
    }
    return 0; 
} 