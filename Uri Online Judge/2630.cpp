#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, R, G, B, P;
    string conv;
    vector<int> values;

    cin>>T;
    
    for(int i=0; i<T; i++) {        
        cin>>conv>>R>>G>>B;

        if(conv=="eye")
            P = 0.3*R + 0.59*G + 0.11*B;    
        
        else if(conv=="mean")
            P = (R + G + B)/3;
        
        else {
            values.push_back(R);
            values.push_back(G);
            values.push_back(B);
            
            if(conv=="max") {
                auto max_value = max_element(values.begin(),values.end());
                P = *max_value;
            }
            
            else if(conv=="min") {
                auto min_value = min_element(values.begin(),values.end());
                P = *min_value;    
            }
    
        }
        printf("Caso #%d: %d\n", i+1, P);
        values.clear();
    }
    return 0;
}