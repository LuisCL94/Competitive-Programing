#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        double num;
        cin>>num;
        double count=0;
        while(num>1) {
            num/=2.0;
            count++;
        }
        cout<<count<<" dias"<<endl;
    }    
    return 0;
}