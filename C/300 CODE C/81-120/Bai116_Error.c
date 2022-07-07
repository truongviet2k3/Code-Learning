#include <stdio.h>
int _strlen(const char* s) {
    const char* p = s;
    while (*p) {
        p++;
    }
    return p - s;
}
const char* _strchr(const char* s, int c) {
    for(; *s ; ++s) 
        if (*s == c) return s;
    return NULL;
}
int _strspn(const char* s, const char* t) { //Tim phan dau tien cua s1 khong co trong s2 tra ve vi tri cua phan tu s1
    int i;
    for(i = 0 ; s[i] && _strchr(t, s[i]); i++) 
    return i;
}
int _strncmp(const char* s1, const char* s2, int len){
    if(len > _strlen(s1)) len = _strlen(s1);
    if(len > _strlen(s2)) len = _strlen(s2);
    int i;
    for(i = 0; i < len; i++ ){
        if(s1[i] != s2[i]) 
            return s1[i] > s2[i] ? 1 : -1;
    }
    return 0;
}
const char* _strstr(const char* s1, const char* s2) {
    int len = _strlen(s2);
    for(; *s1; s1++) {
        if(_strncmp(s1, s2, len) == 0) return s1;
    }
    return NULL;
}

int main() {
    char s1[255] = "hom qua qua noi qua ma qua khong qua";
    const char* p = s1;
    const char* oldp = s1;
    char s2[100] = "cabbage";
    printf("Chuoi kiem tra : %s\n", s1);
    printf("Vi tri tu 'qua': ");
    while ((p = _strstr(p, "qua")) != NULL) {
        printf("%*c", p - oldp + 1, 'x');
        oldp = ++p;
    }
    int d_1 = _strspn(s2, "abc");
    printf("\nKy tu dau tien cua s = '%s' khong co trong '%s' la s[%d]\n", s2, "abc", d_1);
    return 0;
}