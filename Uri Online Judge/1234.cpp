#include <bits/stdc++.h>
using namespace std;

string dancingSentence(string line) {
    string name = "";
    int ch=0, i;
        for (i=0; i<(int)line.size(); i++) {
            if(line[i] != ' ') {
                if(ch == 0) {
                    ch = 1;
                    name+=toupper(line[i]);
                }
                else {
                    ch = 0;
                    name+=tolower(line[i]);
                }   
            }
            else {
                name+=" ";
            }
        }
    return name;
}
int main() {

    string line;

    while(getline(cin, line)) 
        cout<<dancingSentence(line)<<endl;

    return 0;
}


