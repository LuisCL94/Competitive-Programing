#include <bits/stdc++.h>
using namespace std;
#define lf(i,a,b) for(int i=a;i<b;i++)

int countWords(string str) { 
    stringstream s(str);  
    string word; 
    int count = 0; 
    while(s>>word) 
        count++; 
    return count; 
}

int main() {
    int n;
    cin>>n;
    double sumP=0.0, sumKg;
	
    lf(i, 1, n+1) {
       	string frutas;
        double price;
        int nf;
    
        cin>>price;
		getchar();
        getline(cin, frutas);
    
        nf=countWords(frutas);
        sumKg+=nf;
        sumP+=price;
    
        printf("day %d: %d kg\n", i, nf);    
	}

    printf("%.2lf kg by day\n", sumKg/(double)n);
    printf("R$ %.2lf by day\n", sumP/(double)n);
	return 0;
}
