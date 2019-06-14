#include <bits/stdc++.h>

using namespace std;

int main() {
    int QT, x, y;
    string nome_paridade;
    vector<string> linha;

    cin>>QT;

    while(QT--) {
        for(int i=0; i<4; i++) {
            cin>>nome_paridade;
            linha.push_back(nome_paridade);   
        }
        
        cin>>x>>y;
        
        if((x+y)%2 == 0)
            for(int i=0; i<(int)linha.size(); i++) {
                if(linha[i]=="PAR")
                    cout<<linha[i-1]<<endl;
            }
            
        else
            for(int i=0; i<(int)linha.size(); i++) {
                if(linha[i]=="IMPAR")
                    cout<<linha[i-1]<<endl;
            }
        linha.clear();
    }
    return 0;
}