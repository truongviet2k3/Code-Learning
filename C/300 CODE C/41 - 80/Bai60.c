#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int n, i, A[100];
    printf("Nhap n: "); scanf("%d", &n);
    for(i = 0; i < n; i++) {
        A[i] = rand() % 201 - 100;
    }
    for(i = 0; i < n; i++) {
        printf("%4d ", A[i]);
//        if( (i+1) % 10 == 0) printf("\n");
    }
    printf("\n");
    int m = n >> 1, k = 0;
    int B[100];
    for(i = 0; i < n; i++) {
        if(i % 2 == 0) { B[i] = A[k];}
        else {
            B[i] = A[k + m];
            k++;
        }
    }
    for(i = 0; i < n; i++) {
        printf("%4d ", B[i]);
//        if( (i+1) % 10 == 0) printf("\n");
    }
    return 0;
}
