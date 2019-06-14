#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fib_binet(int n);

int main() {
    int num;
    scanf("%d", &num);
    printf("%.1lf\n", fib_binet(num));
    return 0;
}

double fib_binet(int n) {
    double fibonacci;
    fibonacci = (pow((1 + sqrt(5))/2, n) - pow((1 - sqrt(5))/2, n)) / sqrt(5);
    return fibonacci;
}
