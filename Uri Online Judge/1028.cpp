#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { 
    return (a%b == 0) ? abs(b) : gcd(b,a%b); 
}

int main() {
    int n;
    cin>>n;

    while(n--) {
        int a, b;
        cin>>a>>b;
        cout<<gcd(a,b)<<endl;
    }

    return 0;
}