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
    int g;
    int count = 0;
    cin>>g;

    while(g--) {

        cin>>n>>capacidade;
                
        int line=n;

        while(n--) {
            cin>>valor;
            valores.push_back(valor);
            cin>>peso;
            pesos.push_back(peso);
        }
        count+=1; 
        cout<<"Galho "<<count<<":"<<endl;
        cout<<"Numero total de enfeites: " << knapSack(line, capacidade, pesos, valores)<<endl;
        cout<<"\n";
        valores.clear();
        pesos.clear();
        
    }
    return 0; 
} 