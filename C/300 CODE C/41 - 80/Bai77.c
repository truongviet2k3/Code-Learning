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
    double s1;
    for(i = 0; i < n; i++) {
        s1 += 1.0/A[i];
    }
    printf("\nTong nghich dao: %lf\n", s1);
    for(i = 0; i < n; i++) {
        if(A[i] % 2) {
            for(j = i+1; j < n; j++) {
                A[j] = A[j+1];
            }
            n--;
        }
    }
    in_mang(A,n);
    return 0;
}