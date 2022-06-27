#include <stdio.h>


int main() {
    int n, A[100];
    printf("Nhap n: "); scanf("%d", &n);
    printf("Nhap %d phan tu: \n", n);
    int i, j, k;
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    double s = 0, d =0;
    for(i = 0; i < n; i++) {
        if(A[i] < 0 && A[i] % 2) {
            s += A[i];
            d ++;
        }
    }
    printf("Trung binh cong nguyen am le = %lf\n", s/d);
    for(i = 0; i < n; i++) {
        for(j = i+1 ; j < n; j++) {
            if(A[j] == A[i]) {
                for(k = j ; k < n -1; k++) {
                    A[k] = A[k+1];
                }
                n --;
            }
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}