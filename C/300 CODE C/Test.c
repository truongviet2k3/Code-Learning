#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a[255], b[255], c[255];
    int len_a, len_b;
    printf("Nhap a: ");fgets(a, 255, stdin);
    len_a = strlen(a) - 1;
    if(a[len_a] == '\n') a[len_a] = '\0';
    printf("Nhap b: "); fgets(b, 255, stdin);
    len_b = strlen(b) - 1;
    if(b[len_b] == '\n') b[len_b] = '\0';
    if(!strcmp(a, b))  printf("Giong");
    else printf("Khac\n");
    // strcat(a," "); strcat(a,b);
    // strcpy(c, a); strcat(c, " "); strcat(c, "Hoc gioi");
    // puts(a);
    // puts(b);
    // puts(c);
    // strlwr(a); strupr(b);
    // puts(a);
    // puts(b);
    // printf("Dao nguoc a: ");strrev(a);puts(a);
    // printf("Dao nguoc b: ");strrev(b);puts(b);
    // char* first, *last;
    // first = strchr(a, 'v');
    // last = strrchr(a, 'v');
    // printf("[%s]\n", first);
    // printf("[%s]\n", last);
    // printf("%p\n%p\n%p\n%p", !first, a, last, !NULL);
    // printf("%d", !first);
    // printf("\n%d", last - a);     
    // char* c_1 = strdup(a);
    // printf("%s\n%d", c_1, strlen(c_1));
    char d[] = " \t\"'?!.,";
    char* token = strtok(a,d);
    while(token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL,d);
    }
    return 0;
}