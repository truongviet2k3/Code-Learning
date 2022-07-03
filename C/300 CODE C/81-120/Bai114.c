#include <stdio.h>

int _strlen(const char *s) {
   const char* p = s; 
    int len = 0;
    while (*p) {len++; p++;}
    return p - s;
}
char* _strcpy(char *s, const char *t) {
    char *p = s;
    while (*t)
    {
        *p = *t;
        p++;
        t++;
    }
    return s;
}
char* _strcat(char *s, const char *t) {
    char *p = s;
    while(*p) p++;
    while(*t) {*p = *t; p++; t++;}
    return s;
}

int main() {
    char s1[255]= "the quick brown fox ";
    char s2[255]= "jumps over the lazy dog";
    int len1 = _strlen(s1), len2 = _strlen(s2);
    printf("Chuoi 1: [%s] (%d)\n", s1, len1);
    printf("Chuoi 2: [%s] (%d)\n", s2, len2);
    char buf[255]= {0};
    _strcpy(buf, s1); 
    _strcat(buf, s2);
    printf("strcpy(buf, s1) roi strcat(buf, s2): \n[%s] (%d)", buf, _strlen(buf));
    return 0;
}