/* 
Input:  Nhap vao ngay thang nam
Output: In ra ngay thang nam cua hom qua va ngay mai
*/
#include <stdio.h>
#include <stdbool.h>

bool check_leap_year(int year) {
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 ==0 )) {
        return 1;
    }
    return 0;
}
void yesterday_tomorrow_1(int day, int month, int year) {
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if(day > 1 && day < 31) {
            printf("Hom qua: %d/%d/%d", day - 1, month, year);
            printf("\nNgay mai: %d/%d/%d", day + 1, month, year);
        }
        else if (day == 1 && month == 1) {
            printf("Hom qua: %d/%d/%d", 31, 12, year -1);
            printf("\nNgay mai: %d/%d/%d", 2, 1, year);
        }
        else if(day == 1 && month == 3) {
            if(check_leap_year(year)) {
                printf("Hom qua: %d/%d/%d", 29, month -1, year);
                printf("\nNgay mai: %d/%d/%d", day + 1, month, year);
            }
            else {
                printf("Hom qua: %d/%d/%d", 28, month -1, year);
                printf("\nNgay mai: %d/%d/%d", day + 1, month, year);
            }
        }
        else if(day == 1) {
            printf("Hom qua: %d/%d/%d", 30, month -1, year);
            printf("\nNgay mai: %d/%d/%d", day + 1, month, year);
        }
        else if (day == 31 && month == 12) {
            printf("Hom qua: %d/%d/%d", 30, 12 , year);
            printf("\nNgay mai: %d/%d/%d", 1, 1, year + 1);
        }
        else {
            printf("Hom qua: %d/%d/%d", 30, month , year);
            printf("\nNgay mai: %d/%d/%d", 1, month + 1, year);
        }
        break;
    case 4: case 6: case 9: case 11:
        if(day > 1 && day < 30) {
            printf("Hom qua: %d/%d/%d", day - 1, month , year);
            printf("\nNgay mai: %d/%d/%d", day + 1, month, year);
        }
        else if(day == 1) {
            printf("Hom qua: %d/%d/%d", 31, month -1, year);
            printf("\nNgay mai: %d/%d/%d", 2, month, year);
        }
        else {
            printf("Hom qua: %d/%d/%d", 29, month , year);
            printf("\nNgay mai: %d/%d/%d", 1, month + 1, year);
        }
        break;
    case 2:
        if(day > 1 && day < 28) {
            printf("Hom qua: %d/%d/%d", day - 1, month, year);
            printf("\nNgay mai: %d/%d/%d", day + 1, month, year);
        }
        else if(day == 1) {
            printf("Hom qua: %d/%d/%d", 31, 1, year);
            printf("\nNgay mai: %d/%d/%d", 2, 2, year);
        }
        else if (day == 28 && check_leap_year(year)) {
            printf("Hom qua: %d/%d/%d", 27, 2, year);
            printf("\nNgay mai: %d/%d/%d", 29 , 2, year);
        }
        else if(day == 28) {
            printf("Hom qua: %d/%d/%d", 27, 2, year);
            printf("\nNgay mai: %d/%d/%d", 1, 3, year);
        }
        else {
            printf("Hom qua: %d/%d/%d", 28, 2, year);
            printf("\nNgay mai: %d/%d/%d", 1, 3, year);
        }
    default:
        break;
    }
}

int top(int m, int y) {
    switch (m)
    {
    case 4:case 6:case 9: case 11: return 30;
    case 2: return 28 + (y % 4 == 0 && (y % 100 != || y % 400 == 0));
    default:
        return 31;
    }
}

int main() {
    int day, month, year;
    printf("Nhap ngay, thang va nam: "); scanf("%d %d %d", &day, &month, &year);
    yesterday_tomorrow_1(day, month, year);
    return 0;
}