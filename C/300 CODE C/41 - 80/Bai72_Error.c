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

void dich_phai_mang(int A[], int n, int k) {
    int i, B[100], t = 0;
    for(i = n-k; i < n; i++) {B[t] = A[i]; t++;}
    for(i = n-1; i >= k ; i--) 
    {A[i] = A[i-k];}
    for(i = 0, t =0; i < n-k; i++) {A[i] = B[t] ; t++;}
}

int main() {
    int A[100], n;
    printf("Nhap n: ");scanf("%d", &n);
    rand_arr(A, n, MIN, MAX);
    in_mang(A, n);
    int vt = -1, i, so_le = MIN - 1;
    for(i = 0; i < n; i++) 
        if(A[i] % 2 && A[i] > so_le) {so_le = A[i]; vt = i;}
    if(vt != -1) {
        printf("\nPhan tu le lon nhat: A[%d] = %d\n", vt, so_le);
    }
    else printf("Mang khong co phan tu le\n");
    int k;
    printf("Nhap so lan can dich phai: "); scanf("%d", &k);
    dich_phai_mang(A, n, k);
    in_mang(A, n);
    return 0;
}