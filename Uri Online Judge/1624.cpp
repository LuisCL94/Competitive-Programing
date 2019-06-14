#include<bits/stdc++.h> 

using namespace std; 

int knapSack(int n, int W, vector<int> wt, vector<int> val) { 
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
    int n, capacidade, peso, valor;
    vector<int> pesos, valores;

    while(1) {
        cin>>n;
        
        if(n==0)
            break;
                    
        int line=n;

        while(n--) {
            cin>>valor;
            valores.push_back(valor);
            cin>>peso;
            pesos.push_back(peso);
        } 
        cin>>capacidade;
        cout << knapSack(line, capacidade, pesos, valores)<<endl;

        valores.clear();
        pesos.clear();
        
    }
    return 0; 
} 