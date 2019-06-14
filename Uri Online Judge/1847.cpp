#include <bits/stdc++.h>

using namespace std;

int A, B, C;

int main() {
    
    cin>>A>>B>>C;

    if(A>B && B<=C) 
        printf(":)\n");
    
    else if(A<B && B>=C)
        printf(":(\n");

    else if(A<B && B<C && (C-B)<(B-A))
        printf(":(\n");

    else if(A<B && B<C && (C-B)>=(B-A))
        printf(":)\n");
    
    else if(A>B && B>C && (B-C)<(A-B))
        printf(":)\n");

    else if(A>B && B>C && (B-C)>=(A-B))
        printf(":(\n");
    
    else if(A==B) {
        if(C>B)
            printf(":)\n");
        else
            printf(":(\n");
    }

    return 0;
}