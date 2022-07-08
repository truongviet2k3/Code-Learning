#include <stdio.h>
#include <string.h>
int main() {
    char str[80];
    printf("Nhap chuoi: ");fgets(str, 255, stdin); str[strlen(str) -1 ] = '\0';
    int n, p, i, len = strlen(str);
    printf("Chuoi goc: [%s]\n            ", str);
    printf("\nNhap vi tri dau: ");scanf("%d", &n);
    printf("Nhap so ky tu loai bo: "); scanf("%d", &p);
    if(n + p >= len) str[0] = '\0';
    else {
        char d[80];
        char* s = str;
        strcpy(d, s + n + p);
        str[n] = '\0';
        strcat(str, d);
    }
    printf("Chuoi ket qua: [%s]", str);
    return 0;
}