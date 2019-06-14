#include<bits/stdc++.h> 

using namespace std; 

int knapSack(int W, vector<int> wt, vector<int> val) { 
    int n = wt.size();
    
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
    return res; 
} 


int main()  {
    int c, n, peso, valor;
    vector<int> pesos;
    vector<int> valores;
    int capacidade, resistencia;

    cin>>c;

    while(c--){
        cin>>n;

        while(n--) {
            cin>>valor>>peso;
            valores.push_back(valor);
            pesos.push_back(peso);
        }
        cin>>capacidade>>resistencia;  
        
        if(knapSack(capacidade, pesos, valores)>=resistencia)
            cout<<"Missao completada com sucesso\n";
        else
            cout<<"Falha na missao\n";

        valores.clear();
        pesos.clear();
    }
} 