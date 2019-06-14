#include <bits/stdc++.h>
using namespace std;

int minimumBlocks(vector<int> wt, int n, int w) {
    int dp[w + 1];
    for(int i=0; i<=w; i++) 
        dp[i] = 1e9;
    
    dp[0] = 0;
    for(int i=0; i<n; i++) {
        for(int j=wt[i]; j<=w; j++) {
            if(j - wt[i] >= 0)
                dp[j] = min(dp[j], dp[j - wt[i]] + 1);
        }
    }
    return dp[w];
}

int main() {
    vector<int> pesos;
    int capacidade;
    int T, n, peso;

    cin>>T;

    while(T--) {
        cin>>n>>capacidade;
        int linha=n;
        while(n--) {
            cin>>peso;
            pesos.push_back(peso);
        }
        cout << minimumBlocks(pesos, linha, capacidade) << '\n';
        pesos.clear();
    }

   return 0;
}