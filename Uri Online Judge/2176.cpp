#include <bits/stdc++.h>
using namespace std;

int main() {
    char bits[100], bit1=0, size;

    cin>>bits;
    size = strlen(bits);

    for(int i=0; i<size; i++) {
        if(bits[i]=='1')
            bit1++;
    }

    if(bit1%2==0)
        printf("%s0\n", bits);
    else
        printf("%s1\n", bits);

    return 0;
}