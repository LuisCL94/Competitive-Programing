#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, I, id, jogo;
    vector<int> ids;
    vector<int> jogos;
    int count_cs;
     
    while(cin>>N>>I) {
        count_cs = 0;
        while(N--) {            
            cin>>id>>jogo;
            ids.push_back(id);
            jogos.push_back(jogo);
        }
        for(int i=0; i<(int)ids.size(); i++) {
            if(ids[i]==I)
                if(jogos[i]==0)
                    count_cs++;
        }
        cout<<count_cs<<endl;
        ids.clear();
        jogos.clear();
    }
    return 0;
}