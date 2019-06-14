#include <bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    cin>>A>>B;

    int count=0;
    int lenb = B.size();
    for(int i=(int)A.size()-1; i>=0; i++) {
        if(A[i]==B[i])
            count++;
    }

    if(count==lenb)
        cout<<"encaixa"<<endl;
    else
        cout<<"nao encaixa"<<endl;
    
    return 0;
}