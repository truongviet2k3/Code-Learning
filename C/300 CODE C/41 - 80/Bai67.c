#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(a, b) {int t = a; a = b; b =t;}
#define MAX 100
#define MIN -100

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
    printf("Nhap n: "); scanf("%d", &n);
    rand_arr(A, n, MIN, MAX);
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    for(i =0; i < n; i++) {
        for(j = i+1; j < n; j++) {
            if (A[i] % 2 == 0 && A[j] % 2 == 0 && A[j] < A[i]) {
                swap(A[i], A[j]);
            }
            else if (A[i] % 2 != 0 && A[j] % 2 != 0 && A[j] > A[i]) swap(A[j], A[i]); 
        }
    }
    putchar('\n');
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}