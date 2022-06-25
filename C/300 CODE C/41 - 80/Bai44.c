//In ra tam giac

#include <stdio.h>

void tam_giac_dac(int n) {
    int i, j, d;
    for(i = 1 ; i <= n ; i++) {
        d = 2*i-1;
        printf("%*c",2*n - 2*i + 2, ' ');
        for(j = 1 ; j <= d ; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
void tam_giac_rong(int n) {
    int i =1, j,d;
    printf("%*c*\n",2*n - 2*i + 2, ' ');
    for(i = 2 ; i < n ; i++) {
        d = 2*i-1;
        printf("%*c",2*n - 2*i + 2, ' ');
        printf("*%*c*", 2*d - 3 , ' ');
        printf("\n");
    }
    printf(" ");
    for(j = 1 ; j <= 2*n-1 ; j++) {
        printf(" *");
    }
    printf("\n");
}

int main() {
    int n, d;
    printf("Nhap n: "); scanf("%d", &n);    
    
    tam_giac_dac(n);
    tam_giac_rong(n);
    return 0;
}