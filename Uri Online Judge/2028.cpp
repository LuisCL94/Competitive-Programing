#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    while(cin>>n) {
        count++;
        vector<int> nums;
    
        nums.push_back(0);

        for(int i=0; i<=n; i++) 
            for(int j=0; j<i; j++)
                nums.push_back(i);

        if((int)nums.size()==1)
            cout<<"Caso "<<count<<": "<<nums.size()<<" numero"<<endl;
        else
            cout<<"Caso "<<count<<": "<<nums.size()<<" numeros"<<endl;

        for(int i=0; i<(int)nums.size(); i++) {
            if(i!=(int)nums.size()-1)
                cout<<nums[i]<<" ";
            else
                cout<<nums[i];
        }
        printf("\n\n");
        nums.clear();
    }
    return 0;
}