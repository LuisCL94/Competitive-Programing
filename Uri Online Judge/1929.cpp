#include <bits/stdc++.h>
using namespace std;

int possibleTriangle(int a, int b, int c) {
    if(a>=b+c || b>=a+c || c>=a+b)
        return 0;
    else
        return 1;
}

int main() {
    int A, B, C, D;

    cin>>A>>B>>C>>D;
    
    if(possibleTriangle(A, B, C) || possibleTriangle(B, C, D) || possibleTriangle(A, C, D) || possibleTriangle(A, B, D))
        printf("S\n");
    else
        printf("N\n"); 

    return 0;
}