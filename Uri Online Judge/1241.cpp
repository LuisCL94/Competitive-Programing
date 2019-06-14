#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    while(n--) {
        string A, B;

        cin>>A>>B;
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());

        int encaixa = 1;
        for(int i=0; i<(int)B.size(); i++) 
            if(B[i]!=A[i])
                encaixa = 0;

        if(encaixa)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    
    }
    return 0;
}