

#include <stdio.h>

int sum_1_to_n(unsigned int n) {
    int sum = 0, i;
    for(i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    unsigned int n;
    printf("Nhap n: "); scanf("%u", &n);
    unsigned int i, m;
    for(i = 1; i <= n; i++) {
        if(sum_1_to_n(i) > n) {
            m = i -1;
            printf("m = %u", m);
            break;
        }
    }
    printf("\n1");
    for(i = 2; i <= m; i++) {
        printf(" + %u", i);
    }
    printf(" = %d", sum_1_to_n(m));
    return 0;
}