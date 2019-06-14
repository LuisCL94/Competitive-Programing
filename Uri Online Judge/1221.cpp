#include <bits/stdc++.h>
using namespace std;
#define N 1000000000

using ll = long long;
bool isPrime[N];

int main()   {
	ios::sync_with_stdio(0);cin.tie(NULL);
	memset(isPrime, 1, sizeof isPrime);

	isPrime[1] = false;

	for(ll i=2; i<N; i++) 
		if(isPrime[i]) 
			for(ll j = i + i; j < N; j+=i) 
				isPrime[j] = false;

    ll n;
    cin>>n;
	while(n--)  {
		ll num;
		cin>>num;
		cout<<(isPrime[num]?"Prime":"Not Prime")<<endl;
	}
    return 0;
}