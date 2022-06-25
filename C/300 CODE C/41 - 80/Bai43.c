//Tim so Fibonacci thu n (khong dung de quy)
#include <stdio.h>

int Fibonacci(int n) {
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;
    int i,j;
    int arr[52] = {0, 1 ,1};
    for(i = 3; i <= 50; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}
int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("Fi(%d) = %d", n,  Fibonacci(n));
    return 0;
}