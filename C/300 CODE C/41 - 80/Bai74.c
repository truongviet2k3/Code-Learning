#include <stdio.h>

void nhap_mang(int A[], int n) {
    int i=0;
    printf("Nhap mang co %d phan tu: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}
int main() {
    int n, A[100],i ,j ,count;
    printf("Nhap n: "); scanf("%d", &n);
    nhap_mang(A, n);
    for(i = 0; i < n; i++) {
        for(count = j = 0; j < n; j++) {
            if(A[i] == A[j]) {
                if(j < i) break;
                else count++;
            }
        }
        if(count ) printf("%d[%d] ", A[i], count);
    }
    return 0;
}
