#include <bits/stdc++.h>
using namespace std;
#define len(a) (int)(a).size()
#define lf(i,a,b) for(int i=a;i<b;i++)

int main() {
	string str = "Entao eh Natal!";
	int n;
	cin>>n;

	lf(i,0,len(str)) {
		cout<<str[i];
		if(str[i]=='a') {
			lf(j,0,n-1)
				cout<<'a';
		}
	}

	printf("\n");
	
	return 0;
}