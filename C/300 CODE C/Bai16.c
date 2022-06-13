/*
Input: Nhap vao mot nam
Output: In lich cua nam do, tinh thu ngay dau nam  
*/

#include <stdio.h>
#include <stdbool.h>

bool check_leap_year(int year) {
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 ==0 )) {
        return 1;
    }
    return 0;
}
//dayOfWeek : 1-Sun 2-Mon 3-Tue 4-Wed 5-Thu 6-Fri 7-Sat
int dayOfWeek(int day, int month, int year) {
    int a, y, m, day_of_week;
    //Cong thuc Zeller:
    a = (14- month) / 12;
    y = year - a;
    m = month + 12 * a - 2;
    day_of_week = (day + y + y/4 - y/100 + y/400 + (31*m) / 12) % 7;
    return day_of_week + 1;
}

void display_line_1(int x) {
    switch (x)
    {
    case 1:
        printf("\n%5d %3d %3d %3d %3d %3d %3d",1,2,3,4,5,6,7);
        break;
    case 2:
        printf("\n%5s %3d %3d %3d %3d %3d %3d", "", 1,2,3,4,5,6);
        break;
    case 3:
        printf("\n%5s %3s %3d %3d %3d %3d %3d","","",1,2,3,4,5);
        break;
    case 4:
        printf("\n%5s %3s %3s %3d %3d %3d %3d","","","",1,2,3,4);
        break;
    case 5:
        printf("\n%5s %3s %3s %3s %3d %3d %3d","","","","",1,2,3);
        break;
    case 6:
        printf("\n%5s %3s %3s %3s %3s %3d %3d","","","","","",1,2);
        break;
    case 7:
        printf("\n%5s %3s %3s %3s %3s %3s %3d","","","","","","",1);
        break;
    default:
        break;
    }
}

int daysInMonth(int month, int year) {
    switch (month)
    {
    case 4: case 6: case 9: case 11:
        return 30;
        break;
    case 2:
        return 28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    default:
        return 31;
        break;
    }
}

int main() {
    int year; 
    printf ("Nhap nam: "); scanf("%d", &year);
    if (dayOfWeek(1,1,year) == 1) {
        printf ("Ngay dau tien la: Chu nhat \n");
    }
    else 
        printf("Ngay dau tien la: Thu %d\n", dayOfWeek(1,1,year));
    printf("Lich nam %d:", year);
    int i,j;
    for(i=1; i <= 12; i++) {
        printf("\nThang %d", i);
        printf("\n%5s %3s %3s %3s %3s %3s %3s","Sun","Mon","Tue","Wed","Thu","Fri","Sat");
        int frist = dayOfWeek(1,i,year);
        int days_month = daysInMonth(i,year);
        display_line_1(frist);
        int day_line_2 = 9 - frist; int k = day_line_2;
        printf("\n  ");
        for(j=day_line_2; j <= days_month; j++ ) {
            printf("%3d ", j);
            if((j-6) % k == 0 && (j-6)/ k == 1) {
                printf("\n  ");
                k += 7;
            }
        }
    }
    return 0;
}