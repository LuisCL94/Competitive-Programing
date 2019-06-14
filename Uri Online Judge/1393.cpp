#include <bits/stdc++.h>
using namespace std;

int fib(int n) { 
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
}

int main() {
    int n;

    while(cin>>n, n) 
        printf("%d\n", fib(n+1));
    
    return 0;
}