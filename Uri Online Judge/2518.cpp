#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, H, C, L;

    while (cin>>N) {
        
        cin>>H>>C>>L;    
        
        double area = N * sqrt(H*H+C*C) * L;
        
        printf("%.4lf\n", area/10000);
    }   
    
    return 0;
}