#include <stdio.h>
#include <math.h>

int main() {
    double x;
    printf("Nhap x: "); scanf("%lf", &x);
    float F = x + pow(2,10) / x;
    int i;
    for(i = 9 ; i >=0 ; i--) {
        F = x + pow(2,i)/F;
    }
    printf("F = %lf\n",F);
}