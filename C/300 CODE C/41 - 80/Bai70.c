#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(a, b) {int t = a; a = b; b = t;}
#define MIN -10
#define MAX 10

void rand_arr(int A[], int n, int a, int b) {
    srand(time(NULL));
    int i;
    for(i = 0; i < n; i++) 
    {
        A[i] = rand() % (b - a) + a;
    }
}
int main() {
    int A[100] , n, i, j, le = 0, chan = n-1;
    printf("Nhap n: "); scanf("%d", &n);
    rand_arr(A, n, MIN, MAX);
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    for(i = 0; i < n; i++) {
        if(A[i] != 0 && A[i] % 2) {
            swap(A[le], A[i]);
            le ++;
        }
    }
    for(i = le; i < n; i++) {
        if(A[i] == 0) {
            swap(A[i],A[le]);
            le++;
        }
    }
    printf("\n");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;

}