#include <bits/stdc++.h>
using namespace std;
#define lf(i,a,b) for(int i=a;i<b;i++)
#define len(a) (int)(a).size()
#define vs vector<string>
#define msi map<string, int>

vs splitString(string str) { 
    vector<string> words;
    istringstream ss(str); 
    do{  
        string word; 
        ss>>word; 
        words.push_back(word); 
    }while(ss); 
    return words;
}

int main() {
	string calcados;
	int n, a=1;
	vs calcs;
	while(cin>>n) {
		int c=0, m=0, f=0;
		getchar();
		getline(cin, calcados);
		calcs = splitString(calcados);
		
		lf(i,0,len(calcs)) {
			if(calcs[i]==to_string(n)) {
				c++;
				if(calcs[i+1] == "F") f++;	
				if(calcs[i+1] == "M") m++;
			}
		}
		if(a>=2) printf("\n");
		
		printf("Caso %d:\n", a++);
		printf("Pares Iguais: %d\n", c);
		printf("F: %d\n", f);
		printf("M: %d\n", m);
	}
	return 0;
}
