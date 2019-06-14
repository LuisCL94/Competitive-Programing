#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define si set<int>
#define in insert

int main() {
    int n;
    cin>>n;

    while(n--) {
        vi v;
        si vl;
        int x, y;
        cin>>x>>y;

        v.pb(3*x*3*x+(y*y));
        v.pb(2*x*x + 5*y*5*y);  
        v.pb(-100*x + y*y*y);

        vl.in(v[0]);
        vl.in(v[1]);
        vl.in(v[2]);

        int maior = *vl.rbegin();

        if(v[0]==maior)
            printf("Rafael ganhou\n");
        else if(v[1]==maior)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");    
    }
    return 0;
}