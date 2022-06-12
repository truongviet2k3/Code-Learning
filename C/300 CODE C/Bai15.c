/*
Input:  Nhap vao ngay thang nam
Output: Tim xem do la ngay thu bao nhieu trong nam
*/

#include <stdio.h>
#include <stdbool.h>

bool check_leap_year(int year) {
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 ==0 )) {
        return 1; 
    }
    return 0;
}

int main() {
    int day, month, year;
    printf("Nhap ngay, thang va nam: "); scanf("%d %d %d", &day, &month, &year);
    int i=0, st = 0;
    if (month == 1) {
        printf("Ngay thu: %d", day);
        return 0;
    }
    for (i=1; i < month; i++) {
        switch (i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            st += 31;
            break;
        case 4: case 6: case 9: case 11:
            st += 30;
            break;
        case 2:
            if(check_leap_year(year)) {
                st += 29;
            }
            else st += 28;
            break;
        default:
            break;
        }
    }
    printf("Ngay thu: %d", day + st );
    return 0;
}