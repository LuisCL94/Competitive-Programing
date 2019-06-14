#include <bits/stdc++.h>

using namespace std;

int unboundedKnapsack(int n, int W, vector<int> wt, vector<int> val)  { 

    int dp[W+1]; 
    memset(dp, 0, sizeof dp); 
  
    for (int i=0; i<=W; i++) 
      for (int j=0; j<n; j++) 
         if (wt[j] <= i) 
            dp[i] = max(dp[i], dp[i-wt[j]]+val[j]); 
  
    return dp[W]; 
} 
  
 
int main()  {
    int n, capacidade, peso, valor;
    vector<int> pesos, valores;
    int count = 0;

    while(1) {
        cin>>n>>capacidade;
        
        if(n==0 && capacidade==0)
            break;
                    
        int line=n;

        while(n--) {
            cin>>peso;
            pesos.push_back(peso);
            cin>>valor;
            valores.push_back(valor);
        }
        count+=1;
        cout<<"Instancia "<<count<<endl; 
        cout << unboundedKnapsack(line, capacidade, pesos, valores)<<endl; 

        valores.clear();
        pesos.clear();
        cout<<"\n";
    }
    return 0; 
} 