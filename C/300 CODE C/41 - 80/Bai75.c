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
    int n, A[100],i ,j ,count, max = 1, min = 100, i_min = 100, i_max =0;
    printf("Nhap n: "); scanf("%d", &n);
    nhap_mang(A, n);
    for(i = 0; i < n; i++) {
        for(count = j = 0; j < n; j++) {
            if(A[i] == A[j]) {
                if(j < i) break;
                else count++;
            }
        }
        if(count > 0) {
            if(count > max) {
                i_max = i;
                max = count;
            }
            if (count < min) {
                i_min = i;
                min = count;
            }
        }
    }
    printf("Phan tu xuat hien nhieu nhat: %d[%d]\n", A[i_max], max);
    printf("Phan tu xuat hien it nhat: %d[%d]\n", A[i_min], min);
    return 0;
}