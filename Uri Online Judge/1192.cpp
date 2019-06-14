#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--) {
        string ch;
        cin>>ch;
        if(ch[2]==ch[0])
            printf("%d\n", (ch[2]-'0') * (ch[0]-'0'));
        else
            if(islower(ch[1]))
                printf("%d\n", (ch[2]-'0') + (ch[0]-'0'));
            else 
                printf("%d\n", (ch[2]-'0') - (ch[0]-'0'));
    }
    return 0;
}