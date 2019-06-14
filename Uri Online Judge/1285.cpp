#include <bits/stdc++.h>
using namespace std;

int mostFrequent(string text){
    int max = 0;
    int count = 0;
    string maxCharacter;
    for(char q=' ';q<='~';q++) {
        count = 0;
        for(unsigned int i=0; i<text.length();i++)
            if(text[i]==q)
                count++;        
        if(count == max)
            maxCharacter += q;
        if(count>max) {
            max=count;
            maxCharacter=q;
        }
    }
    return max;
}

int main() {
    int N, M, count;
    
    while(cin>>N>>M) {
        count=0;
        for(int i=N; i<=M; i++) 
            if(mostFrequent(to_string(i))==1)
                count++;
    
        cout<<count<<endl;
    }

    return 0;
}