#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin>>n && n){
        list<int> cartas;
        vector<int> discarted;
        for(int i=1; i<=n; i++) 
            cartas.push_back(i);
            
        while(cartas.size()>=2) {
            int x = cartas.front();
            cartas.pop_front();
            discarted.push_back(x);
            int y = cartas.front();
            cartas.pop_front();
            cartas.push_back(y);
        }        
        printf("Discarded cards:");
        int count=0;
        for(auto i: discarted){
            if(count<(int)discarted.size()-1)
                cout<<" "<<i<<",";
            else
                cout<<" "<<i;            
            count++;
        }
        printf("\nRemaining card: %d\n", (int)cartas.front());
    }
    return 0;
}