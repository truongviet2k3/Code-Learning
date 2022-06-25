#include <stdio.h>
#include <math.h>

int main() {
    int n; 
    printf("Nhap n: "); scanf("%d", &n);
    int i , sum = 0;
    for(i = 1; i <= n; i++) {
        sum += pow(i,3);
    }
    int vp = pow(n,2) * pow(n+1,2) /4;
    printf("Ve trai = %d\n", sum);
    printf("Ve phai = %d\n", vp);
    return 0;
}