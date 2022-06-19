// Input: Nhap n nguyen duong
// Output: In ra cac so hoan hao < n

#include <stdio.h>
#include <stdbool.h>

bool kiem_tra_so_hh(int n) {
    int sum =0, i;
    for (i =1; i <= n/2;i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}

int main() {
    int n, i;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Cac so hoan hao nho hon %d: ", n);
    for (i = 1; i <= n; i++) {
        if(kiem_tra_so_hh(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}