#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    string action;

    cin>>N>>M;

    while(M--) {
        cin>>action;
        if(action =="fechou")
            N++;
        else if(action =="clicou")
            N--;
    }   
    cout<<N<<endl;
    return 0;
}