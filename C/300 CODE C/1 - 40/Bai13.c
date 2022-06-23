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
    if(year < 1582) {
        printf("Lich Gregorian bat dau tu nam 1582\n");
        return 1;
    }
    if (month < 1 || month > 12) {
        printf("Thang khong hop le\n");
        return 2;
    }
    switch (month)
    {
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
        if (day >= 1 && day <= 31) {
            printf("Hop le!");
        }
        else printf("Khong hop le!");
        break;
    }
    printf("\n");
    if( !day_of_week(day,month,year) ) printf("Chu nhat\n");
    else printf("Thu %d\n", day_of_week(day,month,year) + 1);
    return 0;
}
