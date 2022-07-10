#include <stdio.h>
#include <string.h>
int str_to_num(char* str) {
    int k = 1, num = 0, i, len = strlen(str);
    for(i = len -1; i >=0; i--) {
        k *= 10;
        num += (int)(str[i] - 48)*k/10;
    }
    return num;
}
char* num_to_str(char* p, int num) { 
    char* s = p;
    int i = 0, k;
    while (num > 0) {
        k = num % 10;
        *s = k + '0';
        num /= 10;
        s++;
    } 
    *s = '\0';
}
int main() {    
    char str[255];
    num_to_str(str,12345);
    printf("%s\n",str);
    return 0;  
}