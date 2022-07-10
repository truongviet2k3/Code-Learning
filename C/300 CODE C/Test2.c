#include <stdio.h>

int main() {
    int a;
    int* p = &a;
    scanf("%d", p);
    printf("%d", *p);
    return 0;
}