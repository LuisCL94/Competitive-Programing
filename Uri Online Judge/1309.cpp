#include <bits/stdc++.h>
using namespace std;
#define for(i,a,b) for(int i=a;i<b;i++)
#define len(a) (int)(a).size()

int main() {
    string d, c;
    while(cin>>d>>c){

        string dd;
        reverse(d.begin(), d.end());

        for(i, 0, len(d)){
            dd+=d[i];
            if((i+1)%3==0&&i!=len(d)-1)
                dd+=",";
        }

        reverse(dd.begin(), dd.end());
    
        dd+=".";
        if(stoi(c)>=10)
            dd+=c;
        else
            dd+="0"+c;

        cout<<"$"<<dd<<endl;        
    }
    return 0;
}   