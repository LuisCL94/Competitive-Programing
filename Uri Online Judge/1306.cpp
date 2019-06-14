#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, n, c=1;;

    while(cin>>r>>n, r or n) {
        
        printf("Case %d: ", c++);
        
        if(n*27<r)
            printf("impossible\n");
        else if(r%n==0)
            printf("%d\n", (r/n)-1); 
        else
            printf("%d\n", r/n);            
    
    }
    return 0;
}