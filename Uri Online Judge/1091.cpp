#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, m;

    while(cin>>k, k) {
        cin>>n>>m;

        while(k--) {
            int xi, yi;
            cin>>xi>>yi;
            if(xi==n || yi ==m)
                cout<<"divisa"<<endl;
            else if(xi>n && yi>m)
                cout<<"NE"<<endl;
            else if(xi>n && yi<m)
                cout<<"SE"<<endl;
            else if(xi<n && yi>m)
                cout<<"NO"<<endl;
            else
                cout<<"SO"<<endl;        

        }
    }
    return 0;
}