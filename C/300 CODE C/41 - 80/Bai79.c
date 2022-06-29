#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MIN -100
#define MAX 100

void rand_arr(int A[], int n, int a, int b) {
    srand(time(NULL));
    int i;
    for(i = 0; i < n; i++) 
    {
        A[i] = rand() % (b - a) + a;
    }
}
void in_mang(int A[], int n) {
    int i;
    for(i = 0; i < n; i++) printf("%d ", A[i]);
}
void insert_num_right_nega(int A[], int* pn, int x) {
    int i, j, n = *pn;
    for(i = 0; i < n; i++) {
        if(A[i]  < 0) {
            for(j = n; j >= i+2 ; j--) {
                A[j] = A[j-1];
            }
            A[i+1]= x;
            n++;
        }
    }
    *pn = n;
}
int main() {
    int A[100], n, i, j;
    printf("Nhap n: ");scanf("%d", &n);
    rand_arr(A, n, MIN, MAX);
    in_mang(A, n);
    int x, pos, min = 100, kt;
    printf("\nNhap x: ");scanf("%d", &x);
    for(i = 0 ;i < n; i++) {
        kt = abs(A[i] - x);
        if(kt < min) {
            min = kt;
            pos = i;
        }
    }
    printf("So gan x nhat: %d\n", A[pos]);
    insert_num_right_nega(A, &n, 1);
    in_mang(A,n);
    return 0;
}