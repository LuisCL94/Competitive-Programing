#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, L;
    
    cin>>R>>L;
    
    double volume = (4*3.1415*R*R*R)/3;
    double quantidade = L/volume;
    
    printf("%d\n", (int)quantidade);
    
    return 0;
}