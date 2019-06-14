#include <bits/stdc++.h>
using namespace std;
int numSquadsInMatrix(int num) {
    return (num * (num + 1)) * (2 * num + 1)/6;
}

int main() {
    int num;
    
    while(cin>>num and num) 
        cout<<(num * (num + 1)) * (2 * num + 1)/6<<endl;
    
    return 0;
}