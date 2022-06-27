#include <stdio.h>

#define ispow2(x) (!(x & x - 1) && x)

int main() {
    int n, A[100];
    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap %d phan tu: \n", n);
    int i, count = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    for(i = 0; i < n; i++) {
        if(ispow2(A[i])) count ++;
    }
    printf("Co %d so la luy thua cua 2\n", count);
    int x, j;
    printf("Nhap x: "); scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(A[i] == x) {
            for(j = i; j < n -1 ; j++) {
                A[j] = A[j+1];
            }i
            n--;
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]); 
    }
    return 0;
}
