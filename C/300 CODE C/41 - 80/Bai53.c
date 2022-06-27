//Tinh sinx theo cong thuc taylor

#include <stdio.h>
#include <math.h>

#define esp 1e-6

double sinx(double x) {
    int i;
    double sin = x, tu = x, phan_tu = x;
    long long mau = 1;
    int sign = -1;
    for(i = 1 ; phan_tu > esp ; i++, sign = - sign) {
        tu *= x * x;
        mau *= 2*i * (2*i + 1);
        phan_tu = tu / mau;
        sin += phan_tu * sign;
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