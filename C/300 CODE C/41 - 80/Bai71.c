#include <stdio.h>

void nhap_mang(int A[], int n) {
    int i=0;
    printf("Nhap mang co %d phan tu: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}

void dich_trai_mang(int A[],int n, int k) {
    int B[100], i, t=0;
    for(i = 0; i < k; i++) 
        B[i] = A[i];
    for(i = 0; i < n-k; i++) 
        A[i] = A[i+k];
    for(i = n-k; i < n;i++) {
        A[i] = B[t];
        t++;
    }
}

int main() {
    int A[100],n;
    printf("Nhap n: "); scanf("%d", &n);
    nhap_mang(A,n);
    int i,j,k, kt = 1;
    for(i =0; i < (int)(n/2.0 - 0.5); i++) {
        if(A[i] != A[n-i-1]) {
            kt = 0;
            break;
        }
    }
    if(kt == 0) printf("Mang khong doi xung\n");
    else {
        if(n % 2 == 0 && A[n/2 -1] == A[n/2]) {
            printf("Mang doi xung\n");
        }
        else if(n % 2 != 0) {
            printf("Mang doi xung\n");
        }
        else printf("Mang khong doi xung\n");
    }
    printf("Nhap so lan can dich trai: "); scanf("%d", &k);
    dich_trai_mang(A, n, k);
    for(i = 0; i < n; i++) printf("%d ", A[i]);
    return 0;
}