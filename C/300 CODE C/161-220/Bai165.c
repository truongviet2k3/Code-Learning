#include <stdio.h>
#include <math.h>
int UCLN(int a, int b) {
    if(a == b) return a;
    while(a != b) {
        if( a > b) a -= b;
        else b -= a;
    }
}
typedef struct phan_so {
    int tu, mau;
}phan_so;
phan_so toi_gian(phan_so t) {
    phan_so r;
    int u = UCLN(abs(t.tu), abs(t. mau));
    r.tu = t.tu / u;
    r.mau = t.mau / u;
    return r;
}
phan_so add(phan_so x, phan_so y) {
    phan_so r;
    int a = x.tu, b = x.mau, c = y.tu, d = y.mau;
    r.tu = a * d + b * c;
    r.mau = b * d;
    r = toi_gian(r);
    return r;
}
phan_so sub(phan_so x, phan_so y) {
    phan_so r;
    int a = x.tu, b = x.mau, c = y.tu, d = y.mau;
    r.tu = a * d - b * c;
    r.mau = b * d;
    r = toi_gian(r);
    return r;
}
phan_so mul(phan_so x, phan_so y) {
    phan_so r;
    r.tu = x.tu * y.tu;
    r.mau = x.mau * y.mau;
    r = toi_gian(r);
    return r;
}
phan_so div(phan_so x, phan_so y) {
    phan_so r;
    r.tu = x.tu * y.mau;
    r.mau = x.mau * y.tu;
    r = toi_gian(r);
    return r;
}
int output(phan_so t) {
    char dau = '\0';
    int a = t.tu, b = t.mau;
    if (a * b < 0) dau = '-';
    if (abs(b) == 1) printf("%c%d", dau, abs(a));
    else printf("%c%d/%d\n",dau, abs(a) , abs(b));
    return 0;
}
int main() {
    phan_so a, b;
    printf("Nhap tu so va mau so: "); scanf("%d%d", &a.tu, &a.mau); 
    printf("Nhap tu so va mau so: "); scanf("%d%d", &b.tu, &b.mau);
    printf("a + b = "); output(add(a,b));
    printf("a - b = "); output(sub(a,b));
    printf("a * b = "); output(mul(a,b));
    printf("a / b = "); output(div(a,b));
    return 0;
}