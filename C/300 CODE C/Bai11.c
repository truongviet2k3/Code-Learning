//Tro choi bao da keo

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <stdbool.h>
char chuyen_doi(int i) {
    char c;
    if (i== 1) {
        c = 'b';
    }
    else if(i == 2) {
        c = 'd';
    }
    else if(i == 3) {
        c = 'k';
    }
    else {
        c = '0';
    }
    return c;
} 
bool check(char c) {
    if(c != 'b' && c != 'd' && c != 'k' ) {
        return 0;
    }
    return 1;
}
int cach1() {
    int c, h, h_win = 0, c_win = 0;
    char human_selected, com_selected;
    bool kt = 1;
    srand(time(0));
    while(kt != 0) {
        c = 1 + rand() % 3;
        com_selected = chuyen_doi(c);
        printf("\nNhap (1-2-3 tuong ung la bao - da - keo), ky tu khac de thoat: "); scanf("%d", &h);
        human_selected =  chuyen_doi(h);
        kt = check(human_selected);
        if (kt == 0) {
            break;
        }
        if(human_selected == 'b') {
            if (com_selected == 'b') {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
            }
            else if (com_selected == 'd') {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
                h_win ++;
            }
            else {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
                c_win ++;
            }
        }
        else if(human_selected == 'd') {
            if (com_selected == 'b') {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
                c_win ++;
            }
            else if (com_selected == 'd') {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
            }
            else {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
                h_win ++;
            }
        }
        else {
            if (com_selected == 'b') {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
                h_win ++;
            }
            else if (com_selected == 'd') {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
                c_win ++;
            }
            else  {
                printf("Human: %c", human_selected);
                printf("\nComputer: %c", com_selected);
            }
        }
        printf("\nTy so human - computer: %d - %d", h_win, c_win);
    }
    return 0;
}

int cach2() {
    char human, computer;
    unsigned int h_win, c_win;

    srand(time(NULL));
    h_win= c_win = 0;

    while (1)
    {
        printf("Nhap ky tu (b-d-k), ky tu khac de thoat: ");
        scanf("%c", &human);
        while (getchar() != '\n') {}
        switch (human) 
        {
        case 'b':
            switch (rand() % 3) {
                case 0: computer = 'b';break;
                case 1: computer = 'd'; h_win++;break;
                case 2: computer = 'k'; c_win++ ;break;
            }
            break;
        case 'd': 
            switch (rand() % 3) {
                case 0: computer = 'b'; c_win ++;break;
                case 1: computer = 'd';break;
                case 2: computer = 'k'; h_win++;break;
            }
            break;
        case 'k':
            switch (rand() % 3) {
                case 0: computer = 'b'; h_win ++;break;
                case 1: computer = 'd'; c_win ++;break;
                case 2: computer = 'k';break;
            }
            break;
        default:
            return 0;
        }
        printf("Human: %c\n", human);
        printf("Computer: %c\n", computer);
        printf("Ty so: %u - %u\n", h_win, c_win);
    }
}

int main() {
    cach2();
    return 0;
}