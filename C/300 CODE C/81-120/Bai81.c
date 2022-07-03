#include <stdio.h>

void sap_xep_tang(int A[], int n) {
    int i,j;
    for(i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if(A[i] > A[j]) {
                int t = A[j];
                A[j] = A[i];
                A[i] = t;
            }
        }
    }
}

void in_mang(int A[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ",A[i]);
    }
}

int main() {
    int A[100], B[100], n, m, i, j;
    printf("Nhap so phan tu mang A va B (n , m > 0): "); scanf("%d%d", &n, &m);
    printf("Nhap %d phan tu mang A: \n", n);
    for(i = 0; i < n; i++) { scanf("%d", &A[i]);}
    printf("Nhap %d phan tu mang B: \n", m);
    for(i = 0; i < m; i++) { scanf("%d", &B[i]);}
    sap_xep_tang(A,n);
    sap_xep_tang(B,m);
    printf("Mang A sap xep tang: ");in_mang(A,n);
    printf("\nMang B sap xep tang: ");in_mang(B,m);
    printf("\nTron A va B thanh C giam: \n");
    i = n-1, j = m-1;
    do   
    {
        if(A[i] > B[j]) {
            printf("%d ", A[i]);
            i--;
        }
        else if(A[i] < B[j]) {
            printf("%d ", B[i]);
            j--;
        }
        else {
            printf("%d %d ",A[i], B[j]);
            i--;
            j--;
        }
    }while(i != 0 && j != 0);
    
    return 0;
}   