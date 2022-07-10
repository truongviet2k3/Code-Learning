#include <stdio.h>
typedef struct complex_num {
    float a, b;
} complex_num;
complex_num addComplex(complex_num x, complex_num y) {
    complex_num result;
    result.a = x.a + y.a;
    result.b = x.b + y.b;
    return result;
}
complex_num subComplex(complex_num x, complex_num y) {
    complex_num result;
    result.a = x.a - y.a;
    result.b = x.b - y.b;
    return result;
}
complex_num mulComplex(complex_num x, complex_num y) {
    complex_num result;
    result.a = x.a * y.a - x.b * y.b;
    result.b = x.a * y.b + x.b * y.a;
    return result;
}
complex_num divComplex(complex_num x, complex_num y) {
    complex_num result;
    float a = x.a, b = x.b, c = y.a, d = y.b;
    result.a = (a * c + b * d) / (c*c + d*d);
    result.b = (b*c - a*d) / (c*c + d*d);
    return result;
}
void output(complex_num x) {
    char dau = '+';
    if(x.b <0) {
        x.b = -x.b;
        dau = '-';
    }
    printf("%.1f %c %.1fi\n", x.a, dau, x.b );
}
int main() {
    complex_num z, w;
    printf("Nhap mot so phuc: \n");
    printf("  Phan thuc: "); scanf("%f", &z.a);
    printf("  Phan ao: "); scanf("%f", &z.b);
    printf("Nhap mot so phuc: \n");
    printf("  Phan thuc: "); scanf("%f", &w.a);
    printf("  Phan ao: "); scanf("%f", &w.b);
    printf("z + w = "); output(addComplex(z,w));
    printf("z - w = "); output(subComplex(z,w));
    printf("z * w = "); output(mulComplex(z,w));
    printf("z / w = "); output(divComplex(z,w));
    return 0;
}