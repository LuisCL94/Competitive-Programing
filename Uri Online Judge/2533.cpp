#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, Ni, Ci, somtn, somtd;

    while(cin>>M) {
        
        somtn=0; 
        somtd=0;
        
        while(M--) {
            cin>>Ni>>Ci;
            somtn += Ni*Ci;
            somtd += Ci;    
        }

        double res;
        res = (double)somtn/(somtd*100);

        printf("%.4lf\n", res);
    }
    return 0;
}