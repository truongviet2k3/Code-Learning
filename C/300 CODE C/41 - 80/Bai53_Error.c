//Tinh sinx theo cong thuc taylor

#include <stdio.h>
#include <math.h>

#define MAX 50

double sinx(double x) {
    int i;
    double sin = x, a = x;
    long long giai_thua = 1;
    int j;
    for(i = 1 ; i < MAX ; i++) {
        giai_thua *= 2*i + 1;
        a = a * x * x;
        if(i % 2 == 0) {
            sin += a / giai_thua;
        }
        else 
            sin -= a / giai_thua;
    }
    return sin;
}
int main() {
    double x;
    printf("Nhap x (rad): ");scanf("%lf", &x);
    printf("Cong thuc Taylor: sin(%.2lf) = %lf\n", x, sinx(x));
    printf("sin() cua math.h: sin(%.2lf) = %lf\n",x , sin(x));
    return 0;
}