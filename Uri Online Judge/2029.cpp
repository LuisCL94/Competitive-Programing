#include <bits/stdc++.h>
using namespace std;

int main() {
    double V, D, altura, area;
    const double pi = 3.14;

    while (cin>>V) {
        cin>>D;
        altura = V / (pi*(D/2)*(D/2));
        area = (pi*(D/2)*(D/2)) ;
        printf("ALTURA = %.2lf\n", altura);
        printf("AREA = %.2lf\n", area);
    }
    return 0;
}