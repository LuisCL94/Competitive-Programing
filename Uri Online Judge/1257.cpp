#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        int l, value=0;
        cin>>l;
        for(int i=0; i<l; i++) {
            string str;
            cin>>str;
            for(int j=0; j<(int)str.size(); j++) {
                value+=str[j]-'A' + i + j;                
            }
        }
        cout<<value<<endl;
    }
 
    return 0;
}