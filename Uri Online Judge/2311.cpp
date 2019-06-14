#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, n;
    string nome;
    vector<double> saltos;
    double salto, grau, resultado_final;
    cin>>N;
    while(N--) {    
        cin>>nome>>grau;
        n=7;
        while(n--) {
            cin>>salto;
            saltos.push_back(salto);
        }
        auto min_value = min_element(saltos.begin(),saltos.end());
        auto max_value = max_element(saltos.begin(),saltos.end());
        
        resultado_final=0.0;
        for(auto i: saltos)
            resultado_final += i;
            
            cout<<nome;
            printf(" %.2lf\n", (resultado_final - *min_value - *max_value) * grau);
            saltos.clear();
    }
    return 0;
}