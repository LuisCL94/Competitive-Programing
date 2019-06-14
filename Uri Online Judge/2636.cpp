#include <bits/stdc++.h>
using namespace std;
#define mii map<int,int>
#define ll long long

mii getFactors(ll n)  {  
    mii prim_freq;
    while (n % 2 == 0)  {  
        prim_freq[2]++;
        n = n/2;  
    }  
    for (ll i = 3; i <= sqrt(n); i = i + 2) {  
        while (n % i == 0)  {  
            prim_freq[i]++;
            n = n/i;  
        }  
    }  
    if (n > 2) 
        prim_freq[n]++;
        
    return prim_freq;
} 

int main()  {  
    ll num;
    while(cin>>num && num) {
   
        printf("%lld =", num);
        mii primes_freq = getFactors(num);
        int count=0;        
        for(auto i: primes_freq) {
            if(count<2)
                printf(" %d x", i.first);
            else
                printf(" %d\n", i.first);
            count++;
        }
    }
    return 0;  
}