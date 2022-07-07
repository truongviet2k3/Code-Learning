#include <stdio.h>

int _strcmp(const char* p, const char* t) {
    for(; *p == *t; ++p, ++t) {
        if(*p == '\0') return 0;
    }
    return *p - *t;
}
char* _strchr(const char* s, int ch) {
    for(; *s ; ++s) 
        if(*s == ch) return s;  
    return NULL;
}
char* _strrchr(char* s, int ch) {
    char *p = NULL;
    for(; *s ; ++s) {
        if(*s == ch) p = s;
    }
    return p;
}
int main() {
    char s[255] = "jackdaws love my big sphinx of quartz";
    printf("Chuoi goc s: [%s]\n", s);
    char *first , *last;
    first = _strchr(s, 'm');
    last = _strrchr(s, 'o');
    printf("strchr (s, 'm') : [%s]\n", first);
    printf("strrchr (s, 'o') : [%s]\n", last);
    printf("Sap xep chuoi dung strcmp() : \n");
    return 0;
}