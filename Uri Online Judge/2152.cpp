#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, H, M, O;

    cin>>N;

    while(N--) {
        cin>>H>>M>>O;
        if(O==1)
            printf("%.2d:%.2d - A porta abriu!\n", H, M);
        else
            printf("%.2d:%.2d - A porta fechou!\n", H, M);
    }
    return 0;
}