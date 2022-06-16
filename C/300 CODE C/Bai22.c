// Input: Nhap vao 1 so n nguyen duong
// Output: Cac uoc so va tong

#include <stdio.h>

int main() {
    unsigned int n;
    printf("Nhap n: "); scanf("%u", &n);
    int i=0, sum = 0, count = 0;
    printf("Cac uoc so: ");
    for (i=1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
            sum += i;
            count ++;
        }
    }   
    printf("\nCo %d uoc so, tong la: %d", count, sum);
    return 0;
}
