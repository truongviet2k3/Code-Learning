// Input: Nhap vao mot so tien n(nghin dong)
// Output: Doi so tien thanh a to 1000 b to 2000 va c to 5000 sao cho b >= (a+b+c)/2

#include <stdio.h>

int main() {
    unsigned int n;
    printf("Nhap n (nghin dong, n > 5): "); scanf("%u", &n);
    int to_5n, to_2n, to_1n;
    to_5n = n / 5;
    to_2n = (n % 5) /2;
    to_1n = (n % 5) % 2;
    while (to_2n <= to_5n + to_1n) {
        to_5n --;
        to_2n += 2;
        to_1n += 1;
        if(to_1n % 2 == 0) {
            to_1n = 0;
            to_2n ++;
        }
    }
    printf("( %d, %d, %d ): %d", to_1n, to_2n, to_5n, to_1n + to_2n + to_5n);
    return 0;
}