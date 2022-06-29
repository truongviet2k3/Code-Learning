#include <stdio.h>

void test(int *pn) {
    int n = *pn;
    *pn += 1;
}

int main() {
    int n, i, j;
    printf( "Nhap n: " ); scanf("%d", &n); 
    test(&n);
    printf("%d ", n);
    
    return 0;
}