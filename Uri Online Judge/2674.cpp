#include <bits/stdc++.h>
using namespace std;

int isPrime(int num) {
    
    if(num<2)
        return 0;

    for(int i=2; i<= num/2; i++) 
        if(num % i == 0)  
            return 0;        
    
    return 1;
}

int main() {
    int num;
    string num_str;
    while(cin>>num) {

        if(!isPrime(num))
            printf("Nada\n");
        
        else {
            num_str = to_string(num);
            int super = 1, x;
            for(int i=0; i<(int)num_str.size(); i++) {
                x = num_str[i] - 48;
                if(!isPrime(x))
                    super = 0;            
            }
            if(super)
                printf("Super\n");
            else
                printf("Primo\n");       
        }
    }
    return 0;
}