#include <bits/stdc++.h>
using namespace std;

int main() {
    int line1 = 39;
    int line2 = 39;
    int midlle_lines = 5;

    while(line1--) 
        cout<<"-";    
    
    cout<<endl;    

    while(midlle_lines--)
        cout<<"|                                     |"<<endl;
    
    while(line2--) 
        cout<<"-";    
    
    cout<<endl;

    return 0;
}