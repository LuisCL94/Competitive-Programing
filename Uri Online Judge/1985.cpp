#include <bits/stdc++.h>

using namespace std;

int main() {
    short int p;
    int number, quantity;
    double total = 0.0;
    
    cin>>p;
    
    while(p--) {
        cin>>number>>quantity;
        
        if(number==1001)
            total += quantity * 1.5;
        if(number==1002)
            total += quantity * 2.5;
        if(number==1003)
            total += quantity * 3.5;
        if(number==1004)
            total += quantity * 4.5;
        if(number==1005)
            total += quantity * 5.5;
    }
    printf("%.2lf\n", total);
    return 0;
}