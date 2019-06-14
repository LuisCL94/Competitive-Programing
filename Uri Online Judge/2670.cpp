#include <bits/stdc++.h>
using namespace std;

int main() {
    int A1, A2, A3;
    int x, y, z, min_value;    

    cin>>A1>>A2>>A3;
    
    x = 4*A3+2*A2;
    y = 4*A1+2*A2;
    z = 2*A1+2*A3;
     
    min_value = min( min(x,y), z);
    
    cout<<min_value<<endl;

    return 0;
}