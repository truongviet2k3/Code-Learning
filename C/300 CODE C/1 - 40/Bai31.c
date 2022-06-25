// Input: Nhap so nguyen n
// Output: In ra bang cuu chuong tu 2 den n

#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Bang cuu chuong ");
    int i, j;
    for (i = 2; i <= n; i++) {
        for(j = 1; j <= 10; j++) {
            printf("\n%d x %d = %d", i, j, i*j);
        }
        printf("\n----------");
    }
    return 0;
}