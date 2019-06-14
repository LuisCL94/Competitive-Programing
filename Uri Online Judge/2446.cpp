#include <bits/stdc++.h>
using namespace std;

int dp[100005];
vector<int> coins;

int paidExactAmount(int value) {
    dp[0] = 1;
    for (int j = 0; j < int(coins.size()); j++)
        for (int i = value; i >= coins[j]; i--)
            dp[i] |= dp[i-coins[j]];

    return dp[value];
}

int main() {
    int v, m;
    int coin;

    cin>>v>>m;

    while(m--){
        cin>>coin;
        coins.push_back(coin);
    }

    if(paidExactAmount(v)) 
        printf("S");
    else
        printf("N");

    printf("\n");  
  return 0;
}