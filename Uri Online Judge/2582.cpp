#include <bits/stdc++.h>
using namespace std;

int main() {
    int C, X, Y;

    cin>>C;

    while(C--) {
        cin>>X>>Y;
        if(X+Y == 0)
            cout<<"PROXYCITY"<<endl;
        if(X+Y == 1)
            cout<<"P.Y.N.G."<<endl;
        if(X+Y == 2)
            cout<<"DNSUEY!"<<endl;
        if(X+Y == 3)
            cout<<"SERVERS"<<endl;
        if(X+Y == 4)
            cout<<"HOST!"<<endl;
        if(X+Y == 5)
            cout<<"CRIPTONIZE"<<endl;
        if(X+Y == 6)
            cout<<"OFFLINE DAY"<<endl;
        if(X+Y == 7)
            cout<<"SALT"<<endl;
        if(X+Y == 8)
            cout<<"ANSWER!"<<endl;
        if(X+Y == 9)
            cout<<"RAR?"<<endl;
        if(X+Y == 10)
            cout<<"WIFI ANTENNAS"<<endl;
    }

    return 0;
}