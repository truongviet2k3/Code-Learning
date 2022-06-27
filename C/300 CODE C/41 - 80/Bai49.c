#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    double S = 1; 
    int i;
    for(i = 2; i <= n; i++) {
        S = pow(i + S, 1.0/(i+1));
    }
    printf("S = %lf\n", S);
    return 0;
}