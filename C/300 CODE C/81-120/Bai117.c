#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* _left(const char* s, int n ) {
    char* buf;
    int len = strlen(s);
    if(n > len) n = len;
    buf = (char*)malloc(n + 1);    
    buf[n] = '\0';
    return strncpy(buf, s, n);
}
char* _right(const char* s, int n ) {
    char* buf;
    int len = strlen(s);
    if(n > len) n = len;
    buf = strdup(& s[len - n]);
    return buf;
}

int main() {
    char str[255] = "Kernighan and Ritchie";
    printf("Chuoi goc: [%s]\n", str);
    printf("left(str, 9): [%s]\n", _left(str, 9));
    printf("right(str, 7): [%s]\n", _right(str, 7));
    return 0;
}