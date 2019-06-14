#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back
#define lf(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define len(a) (int)(a).size()

int main() {
	int n, num;
	while(cin>>n) {
		
		vi nums;
		int s=0;
		
		while(n--) {
			cin>>num;
			s+=num;
			nums.pb(num);
		}
		
		if(s % len(nums) != 0)
			cout<<"-1"<<endl;

		else {
			int media = s/len(nums);
			int soma = 0;
			lf(i,0,len(nums)) {
				if(nums[i]<media)
					soma+= media - nums[i];
			}
			cout<<soma+1<<endl;
		}
		nums.clear();
	}
	return 0;
}