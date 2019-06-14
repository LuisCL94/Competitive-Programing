#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, double> registration_note;
    
    int n;
    cin>>n;
    
    while(n--) {
        string re;
        double no;
        cin>>re>>no;
        registration_note[re]=no;
    }

    string registration;
    double note=0;
    for(auto i: registration_note) {
        if(i.second > note) {
            note = i.second;
            registration = i.first;
        }
    }
    
    if(note<8) // o 8.0 deu compilation error no uri pq?????
        cout<<"Minimum note not reached"<<endl;
    else
        cout<<registration<<endl;
    
    return 0;
}