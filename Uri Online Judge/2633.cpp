#include <bits/stdc++.h>
using namespace std;
#define mis map<int,string>
#define len(a) (int)(a).size()

int main() {
    int n;
    while(cin>>n) {
        int m=n;
        mis date_obj;
        while(m--) {
            string obj;
            int date;
            cin>>obj>>date;
            date_obj[date]=obj;
        }
        int c = 0;
        for(auto i: date_obj) {
            if(c<len(date_obj)-1)
                cout<<i.second<<" ";
            else
                cout<<i.second;
            c++;
        }
        printf("\n");
    }
    return 0;
}