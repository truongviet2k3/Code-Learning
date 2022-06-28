#include <stdio.h>

void nhap_mang(int A[], int n) {
    int i=0;
    printf("Nhap mang co %d phan tu: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}

void sap_xep_tang(int A[], int n) {
    int i,j;
    for(i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if(A[i] > A[j]) {
                int t = A[j];
                A[j] = A[i];
                A[i] = t;
            }
        }
    }
}
int main() {
    int n, A[100];
    printf("Nhap n: "); scanf("%d", &n);
    nhap_mang(A, n);
    sap_xep_tang(A, n);
    int i,j;
    printf("%d ", A[0]);
    for(i = 1; i < n; i++) {
        if(A[i] != A[i-1]) {
            printf("%d ", A[i]);
        }
    }
    return 0;
}