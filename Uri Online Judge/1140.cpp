#include <bits/stdc++.h>
using namespace std;
#define vs vector<string>
#define pb push_back
#define for(i,a,b) for(int i=a;i<b;i++)
#define len(a) (int)(a).size()

vs split(string str) { 
    vs words;
    istringstream ss(str); 
    do {  
        string word; 
        ss>>word; 
        words.pb(word); 
    }while(ss); 
    return words;
}

int main () {
    string line;
    while(1) {
        getline(cin, line);
        if(line == "*") break;

        vs words = split(line);

        bool istauto = true;
        for(i,0,len(words)-2) {
            if(tolower(words[i][0])!=tolower(words[i+1][0])) {
                istauto = false;
                break;
            }      
        }
        if(istauto)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}