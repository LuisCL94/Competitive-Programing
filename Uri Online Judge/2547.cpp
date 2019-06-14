#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Amin, Amax, count, visitante;

    while(cin>>N) {
        cin>>Amin>>Amax;
        count=0;
        while(N--) {
            cin>>visitante;
            if(Amin<=visitante && visitante<=Amax)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}