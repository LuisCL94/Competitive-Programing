#include <bits/stdc++.h>
using namespace std;

int possibleTriangle(int a, int b, int c) {
    if(a>=b+c || b>=a+c || c>=a+b)
        return 0;
    else
        return 1;
}

string typeTriangle(int a, int b, int c) {
    string type;
    if(a != b && a != c && b != c)
        type = "Escaleno";
    else if(a == b && a == c && b == c)
        type = "Equilatero";
    else if(a != b && b == c)
        type = "Isoceles";
    else if(a != c && c == b)
        type = "Isoceles";
    else if(b != c && c == a)
        type = "Isoceles";
    
    return type;
}

int isRetangle(int a, int b, int c) {
    if(pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2))
        return 1;
    else
        return 0;
}

int main() {
    int A, B, C;

    cin>>A>>B>>C;
    
    if(possibleTriangle(A, B, C)) { 
        if(isRetangle(A, B, C))
            cout<<"Valido-"<<typeTriangle(A, B, C)<<endl<<"Retangulo: S"<<endl;
        else
            cout<<"Valido-"<<typeTriangle(A, B, C)<<endl<<"Retangulo: N"<<endl;
    }
    else
        printf("Invalido\n");
    
    return 0;
}