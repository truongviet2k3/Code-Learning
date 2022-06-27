#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 100
#define MAX 200

void sap_xep_tang(int A[], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j =i+1; j < n; j++) {
            if (A[j] < A[i]) {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
        }
    }
}

void rand_arr(int A[], int n, int a, int b) {
    srand(time(NULL));
    int i;
    for(i = 0; i < n; i++) 
    {
        A[i] = rand() % (b - a) + a;
    }
}
int main() {
    int A[100] , n, i,j;
    printf("Nhap n (chan): "); scanf("%d", &n);
    rand_arr(A, n, MIN, MAX);
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            
        }
    }
    sap_xep_tang(A, n);
    putchar('\n');
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    
    return 0;
}