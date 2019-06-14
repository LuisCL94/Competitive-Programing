#include <bits/stdc++.h>
using namespace std;
#define for(i,a,b)  for(int i=a;i<b;i++)
#define len(a) (int)(a).size()

int main() {
    int n;
    cin>>n;

    while(n--) {
        int a, b;
        cin>>a>>b;

        string A = to_string(a);
        string B = to_string(b);
        
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());
        
        int enc=1;
        for(i,0,len(B)) {
            if(B[i]!=A[i]) { 
                enc=0;
                break;
        }}
        
        if(enc==1)
            printf("encaixa\n");
        else 
            printf("nao encaixa\n");
    }
    
    return 0;
}