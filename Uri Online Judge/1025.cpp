#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q, count=1;
    vector<int> marmores;
    
    while(cin>>N>>Q, N||Q) {

        int m;
        while(N--) {
            cin>>m;
            marmores.push_back(m);
        }
        sort(marmores.begin(), marmores.end());
        cout<<"CASE# "<<count++<<":"<<endl;

        while(Q--) {
            cin>>m;
            auto lower = lower_bound(marmores.begin(), marmores.end(), m);
            if(*lower!=m)
                cout<<m<<" not found"<<endl;
            else {
                cout<<m<<" found at "<< lower - marmores.begin() + 1<<endl;
            }
        }
            marmores.clear();
    }
    return 0;
}