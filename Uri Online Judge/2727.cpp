#include <bits/stdc++.h>
using namespace std;
#define msc map<string,char>
#define for(i,a,b) for(int i=a;i<b;i++)

int main() {
    
    msc menssage;
    menssage["."] = 'a';
    menssage[".."] = 'b';
    menssage["..."] = 'c';
    menssage[". ."] = 'd';
    menssage[".. .."] = 'e';
    menssage["... ..."] = 'f';
    menssage[". . ."] = 'g';
    menssage[".. .. .."] = 'h';
    menssage["... ... ..."] = 'i';
    menssage[". . . ."] = 'j';
    menssage[".. .. .. .."] = 'k';
    menssage["... ... ... ..."] = 'l';
    menssage[". . . . ."] = 'm';
    menssage[".. .. .. .. .."] = 'n';
    menssage["... ... ... ... ..."] = 'o';
    menssage[". . . . . ."] = 'p';
    menssage[".. .. .. .. .. .."] = 'q';
    menssage["... ... ... ... ... ..."] = 'r';
    menssage[". . . . . . ."] = 's';
    menssage[".. .. .. .. .. .. .."] = 't';
    menssage["... ... ... ... ... ... ..."] = 'u';
    menssage[". . . . . . . ."] = 'v';
    menssage[".. .. .. .. .. .. .. .."] = 'w';
    menssage["... ... ... ... ... ... ... ..."] = 'x';
    menssage[". . . . . . . . ."] = 'y';
    menssage[".. .. .. .. .. .. .. .. .."] = 'z';
    
    int x;
    string line;
    
    while(cin>>x) {
        getchar();
        while(x--) {
            getline(cin, line);
            cout<<menssage[line]<<endl;
        }
    }   
    return 0;
}