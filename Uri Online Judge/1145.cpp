#include <bits/stdc++.h>
using namespace std;
#define lf(i,a,b) for(int i=a;i<b;i++)

int main() {
    int x, y;
    cin>>x>>y;

    lf(i,1,y+1) {        
        printf("%d", i);    
        if(i>0 && i%x==0 && i!=y)
            printf("\n");
        else if(i!=y)
            printf(" ");
    }
    printf("\n");
    return 0;
}