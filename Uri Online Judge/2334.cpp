#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int x;
    
    while(cin>>x) {
        cin>>x;
        if(x==-1)
            break;

        if(x==0)
            printf("0\n");
        else
            printf("%llu\n", x-1);            
    }
    return 0;
}