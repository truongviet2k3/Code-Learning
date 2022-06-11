#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

char chuyen_doi(int i) {
    char c;
    if (i== 1) {
        c = 'b';
    }
    else if(i == 2) {
        c = 'd';
    }
    else {
        c = 'k';
    }
    return c;
} 
int main() {
    int c, h_win = 0, c_win = 0;
    char human_selected, com_selected;
    human_selected = 'b';
    srand(time(0));
    while(human_selected == 'b' || human_selected == 'd' || human_selected == 'k') {
        printf("\nNhap ky tu (b-d-k), ky tu khac de thoat: ");scanf("%c", &human_selected);
        if (human_selected != 'b' && human_selected != 'd' && human_selected != 'k') {
            return 0;
        }
        c = 1 + rand() % 3;
        com_selected = chuyen_doi(c);
        if (human_selected == 'b') {
            if (com_selected == 'b') {
                printf("Computer: %c", com_selected);
            }
            else if (com_selected == 'd') {
                printf("Computer: %c", com_selected);
                h_win ++;
            }
            else {
                printf("Computer: %c", com_selected);
                c_win ++;
            }
        }
        else if(human_selected == 'd') {
            if (com_selected == 'b') {
                printf("Computer: %c", com_selected);
                c_win ++;
            }
            else if (com_selected == 'd') {
                printf("Computer: %c", com_selected);
            }
            else {
                printf("Computer: %c", com_selected);
                h_win ++;
            }
        }
        else {
            if (com_selected == 'b') {
                printf("Computer: %c", com_selected);
                h_win ++;
            }
            else if (com_selected == 'd') {
                printf("Computer: %c", com_selected);
                c_win ++;
            }
            else  {
                printf("Computer: %c", com_selected);
            }
        }
        printf("\nTy so human - computer: %d - %d", h_win, c_win);

    }
    return 0;
}
