#include <stdio.h>
#include <string.h>

int main() {
    char str[255];
    int xh[8] = {0}, len, i;
    char d[] = " ,.", *token;
    printf("Nhap chuoi: "); fgets(str, 255, stdin); str[strlen(str)-1] = '\0';
    token = strtok(str, d);
    while (token != NULL) 
    {
        len = strlen(token);\
        xh[len] ++;
        token = strtok(NULL, d);
    }
    for(i = 1; i <= 7; i++) 
        printf("%d[%d]  ", i, xh[i]);
    return 0;
}