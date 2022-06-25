//Input: Nhap n
//Output: Tinh S = 2 + 4 + 6 + .. + n neu n chan , S =  1 + 2 + 3 + .. + n neu n le

#include <stdio.h>

int tong_chan(int n) {
    return n * (n + 2 ) /4;
}
int tong_le(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    int S=0;
    S = n % 2 == 0 ? tong_chan(n) : tong_le(n);
    printf("S = %d", S);
    return 0;
}