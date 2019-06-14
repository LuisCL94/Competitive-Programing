#include <bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i=a;i<b;i++)
#define len(a) (int)(a).size()

int fat(int n) {
    int fat=1;
    for(i, 2, n)
        fat*=i;
    return fat;
}

int main() {
    int numb;
    while(cin>>numb, numb) {
        string num = to_string(numb);
        int numDigits = len(num);

        int sum=0;
        for(i,0,numDigits) 
            sum+=(num[i] - '0') * fat(numDigits-i+1);

        cout<<sum<<endl;
    }
    return 0;
}