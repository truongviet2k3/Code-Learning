#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void in_mang(int A[], int n) {
    int i;
    for(i = 0; i < n ; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    int n, i, A[100];
    printf("Nhap n: "); scanf("%d", &n);
    for(i = 0; i < n; i++) {
        A[i] = rand() % 201 - 100;
    }
    in_mang(A, n);
    int dem = 0;
    for(i = 0 ; i < n; i++) {
        if(A[i] % 4 == 0 && A[i] % 10 == 6) {
            dem ++;
        }
        if(A[i] % 2 != 0 ) A[i] *= 2;
    }
    printf("Co %d phan tu chia het cho 4, tan cung 6\n", dem);
    printf("Nhan doi phan tu le: \n");
    in_mang(A, n);
    return 0;
}