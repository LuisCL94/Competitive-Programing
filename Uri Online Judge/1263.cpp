#include <bits/stdc++.h>
using namespace std;

int numAliterations(string line) {
    char v, flag;
	int i, num = 0;	
    for(i=1, v = line[0], flag = 0; line[i] != '\0'; i++) 
		if(line[i] == ' ') { 
			if(tolower(v) == tolower(line[i+1])) {
				if(!flag) {
					num++;
					flag = 1;
				}
			}
            else {
				v = line[i+1];
				flag = 0;
			}
        }
		return num;	
}

int main() {
    
    return 0;
}