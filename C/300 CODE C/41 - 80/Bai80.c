#include <stdio.h>

void nhap_mang(int A[], int n) {
    int i=0;
    printf("Nhap mang co %d phan tu: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}

int main() {
    int A[100], B[100], n, m, i;
    printf("Nhap n: "); scanf("%d", &n);
    nhap_mang(A, n);
    printf("Nhap m (m < %d): ", n); scanf("%d", &m);
    nhap_mang(B, m);
    for(i = 0; i < n; i++) {
        if(B[0] == A[i]) {
            printf("B co trong A tai: A[%d]: \n", i);
            break;
        }
    }
    for(i = n-1; i >=0; i--) {
        if(A[i] < 0) {
            printf("So nguyen am cuoi : %d", A[i]);
            break;
        }
    }
    return 0;
}