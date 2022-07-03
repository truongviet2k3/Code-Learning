#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char S[255];
    printf("Nhap vao chuoi nhi phan: "); fgets(S, 255, stdin);
    int i, pos, pos_max, len_0, len_max;
    pos = pos_max = len_max = 0;
    do {
        len_0 = 0;
        for(i = pos; S[i] && S[i] == '0'; i++) { //DK S[i] <-> S[i] != '\0'
            len_0++;
        }
        if(len_0 > len_max) {len_max = len_0; pos_max = pos;}
        pos = i+1;
    } while(S[i]); //Dieu kien S[i] <-> S[i] != '\0'
    printf("Chuoi 0 dai nhat co %d ky tu\n", len_max);
    printf("Bat dau tai S[%d] ", pos_max);
    return 0;
}