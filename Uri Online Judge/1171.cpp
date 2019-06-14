#include <bits/stdc++.h>
using namespace std;
#define mii map<int,int>
#define len(a) (int)(a).size()

int main() {
    int n;
    cin>>n;
    mii num_freq;
    while(n--) {
        int num;
        cin>>num;
        num_freq[num]++;
    }    
    for(auto i: num_freq)
        printf("%d aparece %d vez(es)\n", i.first, i.second);
        
    return 0;
}