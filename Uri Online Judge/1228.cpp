    #include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define lf(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()
#define all(a) (a).begin(),(a).end()
#define pos(a,v) (find(all(v), (a)))-(v).begin()

int countInv(vi s, vi f){
	int i=0, c=0, tmp;
	while(i<len(s)) {
		while(s[i] != f[i]) { 
    		tmp = pos(f[i], s);
    		swap(s[tmp - 1], s[tmp]);
   			c++;
   		}
   		i++;
  	}
	return c;
}

int main() {
	int n, m;

	while(cin>>n) {
		m=n;
		vi nums1;
		vi nums2;
		while(n--) {
			int num1;
			cin>>num1;
			nums1.pb(num1);
		}
		while(m--) {
			int num2;
			cin>>num2;
			nums2.pb(num2);
		}
		cout<<countInv(nums1, nums2)<<endl;
	}
	return 0;
}	