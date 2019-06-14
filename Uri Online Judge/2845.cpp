#include <bits/stdc++.h>
using namespace std;
#define si set<int>
#define in insert

int gcd(int a, int b) { 
    return (a%b == 0)? abs(b) : gcd(b,a%b); 
} 

int main() {
    int n;
    cin>>n;

    si nums;
    while(n--) {
        int num;
        cin>>num;
        nums.in(num);
    }
    n = *nums.rbegin(); 
    for(int i=n+1;;i++) { 
        if(gcd(n,i)==1) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}