#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string mns;
    while(getline(cin, mns)) {
        for(int i=0; i<(int)mns.size(); i++) {
            if(mns[i] >= 'a' && mns[i] <='z') { 
                if(mns[i] + 13 > 'z')
                    mns[i] -= 13; 
                else 
                    mns[i] += 13; 
            }
            else if(mns[i] >= 'A' && mns[i] <='Z') { 
                if(mns[i] + 13 > 'Z')
                    mns[i] -= 13; 
                else 
                    mns[i] += 13; 
            }
            printf("%c", mns[i]);
        }
        printf("\n");
    }
    return 0;
}