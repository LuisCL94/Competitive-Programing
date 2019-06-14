#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, M;

    while(1) {
        cin>>X>>M;
        if(X==0 && M==0)
            break;
        printf("%d\n", X*M); 
    }
    return 0;
}