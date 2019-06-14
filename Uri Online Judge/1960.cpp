#include <bits/stdc++.h>
using namespace std;

string convertToRoman(int);

int main() {
    int n;
    
    cin>>n;

    cout<<convertToRoman(n)<<endl;
    
    return 0;
}

string convertToRoman(int n) {
    int arr[14]={1000,900,500,400,100,90,60,50,40,10,9,5,4,1};
    string numRoman = "";
    for(int i=0;i<14;i++) {
        while(n>=arr[i]) {
            n = n-arr[i];
            if(arr[i] == 1000) 
                numRoman+="M";
            else if(arr[i]==900) 
                numRoman+="CM";
            else if(arr[i]==500) 
                numRoman+="D";
            else if(arr[i]==400) 
                numRoman+="CD";
            else if(arr[i]==100) 
                numRoman+="C";
            else if(arr[i]==90) 
                numRoman+="XC";
            else if(arr[i]==60) 
                numRoman+="LX";
            else if(arr[i]==50) 
                numRoman+="L";
            else if(arr[i]==40) 
                numRoman+="XL";
            else if(arr[i]==10) 
                numRoman+="X";
            else if(arr[i]==9) 
                numRoman+="IX";
            else if(arr[i]==5) 
                numRoman+="V";
            else if(arr[i]==4) 
                numRoman+="IV";
            else if(arr[i]==1) 
                numRoman+="I";
        }
    }
    return numRoman;
}