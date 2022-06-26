#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void in_mang(int A[], int n) {
    int i;
    for(i = 0; i < n ; i++) {
        printf("%d ", A[i]);
    }
}

int main() {
    srand(time(NULL));
    int n, i, A[100];
    printf("Nhap n [1, 99]: "); scanf("%d", &n);
    for(i = 0; i < n; i++) {
        A[i] = rand() % 201 - 100;
    }
    in_mang(A, n);
    int sum = 0;
    for(i = 0; i < n; i++) {
        if(A[i] > 0) sum += A[i];
    }
    printf("\nTong cac so nguyen duong: %d\n", sum);
    int p;
    printf("Nhap p [0, %d]: ", n- 1); scanf("%d", &p);
    for(i = p; i < n; i++ ) {
        A[i] = A[i+1]; 
    }
    in_mang(A, n-1);
    return 0;
}