#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main() {
    int n;
    cin>>n;

    while(n--) {
        int x;
        cin>>x;

        ull sum = pow(2, x)/12000.0;
        
        cout<<sum<<" kg"<<endl;
    }
    return 0;
}