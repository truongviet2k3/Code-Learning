#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
int main() {
    int A[100], n, i, j;
    printf("Nhap n: ");scanf("%d", &n);
    rand_arr(A, n, MIN, MAX);
    in_mang(A, n);
    for(i = 0; i < n-1; i++) 
        for(j = i+1; j< n; j++) 
            if(A[i] > A[j]) {
                int t = A[i];
                A[i] = A[j];
                A[j] = t;
            }
    printf("\nSap xep tang dan: \n");
    in_mang(A,n);
    int x;
    printf("\nNhap x: ");scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(A[i] <= x && A[i+1] >= x) {
            for(j = n; j >= i+2; j--) {
                A[j] = A[j-1];    
            } 
            A[i+1] = x;
            n++;
            break;
        } 
    }
    in_mang(A,n);
    return 0;
}