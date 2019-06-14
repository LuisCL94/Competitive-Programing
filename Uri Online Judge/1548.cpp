#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define for(i,a,b) for(int i=a;i<b;i++)
#define len(a) (int)(a).size()
#define allv(a) (a).begin(),(a).end()

int main() {
    int n;
    cin>>n;

    while(n--) { 
        int m;
        cin>>m;

        vi notes;
        while(m--){
            int note;
            cin>>note;
            notes.pb(note);
        }
        reverse(allv(notes));
        
        vi notesR;
        for(i,0,len(notes)) 
            notesR.pb(notes[i]); 
        
        sort(allv(notesR));

        int count=0;
        for(i,0,len(notes)) 
            if(notes[i]==notesR[i])
                count++; 

        cout<<count<<endl;
        
    }
    return 0;
}