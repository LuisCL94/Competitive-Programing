#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define for(i,a,b)  for(int i=a;i<b;i++)
#define len(a) (int)(a).size()

int main() {
    int n;
    cin>>n;
    while(n--) {
        int c;
        cin>>c;
        vi medians;
        double median=0;
        while(c--) {
            int m;
            cin>>m;
            medians.pb(m);
            median+=m;
        }
        median/=(double)medians.size();
        int count=0;
        for(i,0,len(medians)) {
            if(medians[i]>median)
                count++;
        }
        printf("%.3lf%%\n", ((double)count/(double)medians.size())*100);
        medians.clear();
    }
    return 0;
}