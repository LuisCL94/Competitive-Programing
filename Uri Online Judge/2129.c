#include <bits/stdc++.h>
using namespace std;

int lastNon0Digit(int num) {
    int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
    if (num < 10)
        return dig[num];
    if (((num/10)%10)%2 == 0)
        return (6*lastNon0Digit(num/5)*dig[num%10]) % 10;
    else
        return (4*lastNon0Digit(num/5)*dig[num%10]) % 10;
}

int main() {
   
    int n;
    int inst=0;
   
    while(cin>>n) {
        inst++;
        cout<<"Instancia "<<inst<<endl;
        cout<<lastNon0Digit(n)<<endl<<endl;
    }

    return 0;
}