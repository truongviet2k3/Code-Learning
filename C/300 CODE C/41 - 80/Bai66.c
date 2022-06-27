#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    rand_arr(A, n, 0, 20);
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    int max = A[0], min = A[0], vt_max, vt_min;
    for(i = 1; i < n; i++) {
        if(A[i] > max) {max = A[i]; vt_max = i;}
        else if(A[i] < min) {min = A[i]; vt_min = i;} 
    }
    printf("\nMax = %d\nMin = %d\n",max,min);
    int k = (vt_max >= vt_min) ? vt_min : vt_max;
    for(i = k + 1 ; i < n; i++) {
        if(A[i] == max && i != vt_max || A[i] == min && i != vt_min) {
            for(j = i; j < n -1; j++)
                A[j] = A[j + 1];
            n--;
        }
    }
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    return 0;

}