#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define len(a) (int)(a).size()

int main() {
    int t, c=1;
    cin>>t;
    while(t--) {
        vi idades;

        int n;
        cin>>n;
        printf("Case %d: ", c++);
        while(n--) {  
            int id;
            cin>>id;
            idades.pb(id);
        }
        int median = len(idades)/2;
        cout<<idades[median]<<endl;
    }

    return 0;
}