/* 
Input:  Nhap vao ngay thang nam
Output: Kiem tra ngay thang nam co hop le khong. Tinh thu
*/
#include <stdio.h>
#include <stdbool.h>

bool check_leap_year(int year) {
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 ==0 )) {
        return 1;
    }
    return 0;
}
int day_of_week(int day, int month, int year) {
    int dayOfWeek, a, y, m;
    //Cong thuc Zeller
    a = (14 - month) / 12;
    y = year - a;
    m = month + 12 * a - 2;
    dayOfWeek = (day + y + y / 4 - y / 100 + y / 400 + (31 * m ) / 12 ) % 7;
    return dayOfWeek;
}
int main() {
    int day, month, year;
    printf("Nhap ngay, thang va nam: "); scanf("%d %d %d", &day, &month, &year);

    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (day >= 1 && day <= 31) {
            printf("Hop le!");
        }
        else printf("Khong hop le!");
        break;
    case 2: 
        if (day >= 1 && day <= 28) {
            printf("Hop le!");
        }
        else if (day == 29 && check_leap_year(year)) {
            printf("Hop le!");
        }
        else printf("Khong hop le!");
        break;
    case 4: case 6: case 9: case 11: 
        if (day >= 1 && day <= 30) {
            printf("Hop le!");
        }
        else printf("Khong hop le!");
        break;
    default:
        printf("Khong hop le!");
        break;
    }
    printf("\n");
    switch (day_of_week(day,month,year))
    {
    case 0:
        printf("Chu nhat!");
        break;
    case 1:
        printf("Thu hai!");
        break;
    case 2:
        printf("Thu ba!");
        break;
    case 3:
        printf("Thu tu!");
        break;
    case 4:
        printf("Thu nam!");
        break;
    case 5:
        printf("Thu sau!");
        break;
    case 6:
        printf("Thu bay!");
        break;
    default:
        break;
    }
    return 0;
}
