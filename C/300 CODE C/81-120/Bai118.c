#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* allTrim(char* s) { //Xoa bo khoang trang
    char* p = s;
    //Tim chuoi co hai space lien tiep//
    while( (p = strstr(p, "  ")) != NULL ) 
        strcpy(p , p + 1);
    if(*s == ' ' ) strcpy(s, s+1);
    p = s + strlen(s) - 1;
    if(*p == ' ' ) *p = '\0';
    return s;
}
char* stdWord(char* s) { //Loai bo ki tu dac biet
    int i;
    s[0] = toupper(s[0]);
    for(i = 1; i < strlen(s); i++) 
        s[i] = tolower(s[i]); 
    return s;
}

int main() {
    char str[255];
    char d[] = " '-?!.,/\"";
    printf("Nhap chuoi: ");gets(str);
    printf("Chuoi goc: [%s]\n", str);
    printf("Loai bo space du: [%s]\n", allTrim(str));
    printf("Cac tu da chuan hoa: \n");
    char* token;
    token = strtok(str,d);
    while (token != NULL) {
        printf("%s ", stdWord(token));
        token =strtok(NULL,d);
    }
    return 0;
}