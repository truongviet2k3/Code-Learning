#include <stdio.h>
#include <string.h> 

int main() {
    char str1[80], str2[80];
    int k;
    printf("Nhap chuoi 1: "); fgets(str1, 255, stdin); str1[strlen(str1)-1] = '\0';
    printf("Nhap chuoi 2: "); fgets(str2, 255, stdin); str2[strlen(str2)-1] = '\0';
    printf("Chuoi goc: %s\n", str1);
    printf("Chuoi chen: %s\n", str2);
    printf("Vi tri chen: "); scanf("%d", &k);
    str1[k] = '\0';
    printf("Chuoi ket qua: %s", strcat(str1, str2)); 
    return 0;
}