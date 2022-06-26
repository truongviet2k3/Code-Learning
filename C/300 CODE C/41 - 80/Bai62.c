#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
int UCLN(int a, int b) {
    if(a == b) return a;
    while (a != b) 
    {
        if (a > b)  a = a -b;
        else b = b - a;
    }
}
void in_mang(int A[], int n) {
    int i;
    for(i = 0; i < n ; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}


int main() {
    srand(time(NULL));
    int n, i, j , A[100];
    printf("Nhap n: "); scanf("%d", &n);
    for(i = 0; i < n; i++) {
        A[i] = rand() % 11 + 10;

    }
    in_mang(A, n);
    int tong_so_le_vt_chan =0 , tong_so_chan_vt_le = 0;
    for(i = 0; i < n; i++) {
        if((i + 1 ) % 2 == 0 && A[i] % 2 != 0) {
            tong_so_le_vt_chan += A[i];
        }
        else if ((i + 1 ) % 2 != 0 && A[i] % 2 == 0) tong_so_chan_vt_le += A[i];
    } 
    if(tong_so_chan_vt_le == tong_so_le_vt_chan) {
        printf("Tong le vi tri chan (%d) bang tong chan vi tri le (%d)\n", tong_so_le_vt_chan, tong_so_chan_vt_le);
    }
    else 
        printf("Tong le vi tri chan (%d) khac tong chan vi tri le (%d)\n", tong_so_le_vt_chan, tong_so_chan_vt_le);
    printf("Cac cap so nguyen to cung nhau: \n");
    sap_xep_tang(A, n);
    int B[100] = {A[0]}, k = 1;
    for(i = 1; i < n; i++) {
        if(A[i] == A[i-1]) continue;
        B[k] = A[i];
        k ++;
    }
    int m = k+1;
    for(i =0 ; i < m; i++) {
        for(j = i+1; j < m ; j++) {
            if(UCLN(B[i], B[j]) == 1) {
                printf("(%d, %d)\n", B[i], B[j]);
            }
        }
    }
    return 0;
}