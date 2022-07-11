#include <stdio.h>
#include <string.h>
#include <time.h>
typedef struct Book {
    char Tua[255];
    char ISBN[255];
    char Tac_gia[255];
    char NXB[255];
}Book;

int main() {
    Book Lib[255];
    int i = 0, k, pos = -1;
    char kt;
    do {
        printf("Nhap thong tin sach: \n");
        printf("  %-10s> ", "Tua"); gets(Lib[i].Tua);
        printf("  %-10s> ", "ISBN"); gets(Lib[i]. ISBN);
        printf("  %-10s> ", "Tac gia"); gets(Lib[i].Tac_gia);
        printf("  %-10s> ", "NXB"); gets(Lib[i].NXB);
        i++;
        printf("Tiep (y/n)? ");scanf("%c", &kt);
    } while(kt == 'y');
    char check_ISBN[255];
    printf("ISBN ? ");gets(check_ISBN);
    for(k = 0; k < i; k++) {
        if(strcmp(Lib[k].ISBN,check_ISBN) == 0) {
            pos = k;
            break;
        }
    }
    if(pos == -1)
        printf("Invalid ISBN");
    else {
    printf("Ket qua tim: \n");
    printf("  %s\n", Lib[pos].Tua);
    printf("  %s\n", Lib[pos].Tac_gia);
    printf("  %s\n", Lib[pos].NXB);
    }
    return 0;
}