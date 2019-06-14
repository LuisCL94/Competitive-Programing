#include <bits/stdc++.h>

using namespace std;

int main() {
    int carta1, carta2;

    cin>>carta1>>carta2;

    if(carta1>=carta2)
        printf("%d\n", carta1);
    else
        printf("%d\n", carta2);
    
    return 0;
}