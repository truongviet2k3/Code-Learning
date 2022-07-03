#include <stdio.h>
#include <limits.h>

void nhap_mang(int A[], int n) {
    int i=0;
    printf("Nhap mang co %d phan tu: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
}
int main() {
    int n, A[100],i ,j ,count, max = 1, pos = -1, oldmax = 0;
    int B[100]; 
    printf("Nhap n: "); scanf("%d", &n);
    nhap_mang(A, n);
    printf("Phan tu xuat hien nhieu nhat: ");
    do {
        max = 0;
        for(i = pos + 1; i < n - 1; i++) {
            for(count = 1 , j = i+ 1; j < n; j++) 
                if(A[i] == A[j]) count++;
            if(count > max) {max = count; pos = i; }
        }
        if(max >= oldmax) {
            printf("%d[%d] ", A[pos], max);
            oldmax = max;
        }
    } while(max == oldmax);
    putchar('\n');
    return 0;
}