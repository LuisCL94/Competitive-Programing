#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    double Ti;
    vector<double> tentativas;

    while(cin>>T) {
        while(T--) {
            cin>>Ti;
            tentativas.push_back(Ti);
        }
        auto min_value = min_element(tentativas.begin(),tentativas.end());
        cout<<*min_value<<endl;
        tentativas.clear();
    }
    return 0;
}