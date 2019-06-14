#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    while(n--) {
        int num;
        string line;
        
        cin>>line>>num;

        for(int i=0; i<(int)line.size(); i++) {
            if(line[i]-num<'A')
                line[i]+=26;
            printf("%c", line[i]-num);
        }
        printf("\n");
    }
    
    return 0;
}