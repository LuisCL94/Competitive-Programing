#include <bits/stdc++.h>
using namespace std;

long long int fat(int numero) {
	long long int fat=1;
	for(int i=1; i<=numero; i++)
		fat*=i;
	return fat;
}

int main() {
    int M, N;
    
    while (cin>>M>>N) 
        cout<<fat(M)+fat(N)<<endl;        
    
    return 0;
}