/*
Input:  Nhap thang, nam
Output: In lich cua thang do voi lich truc cua tung ban
*/
#include <stdio.h>
#include <stdbool.h>

//dayOfWeek : 1 - Sun 2- Mon 3 - Tues 4 - Wed 5 - Thu 6 - Fri 7 - Sat   
unsigned int dayOfWeek(unsigned int day, unsigned int month, unsigned int year) {
    int a, y, m, day_of_week;
    //Cong thuc Zeller:
    a = (14- month) / 12;
    y = year - a;
    m = month + 12 * a - 2;
    day_of_week = (day + y + y/4 - y/100 + y/400 + (31*m) / 12) % 7;
    return day_of_week + 1;
}


int main() {
    char A = 'A', B = 'B', C = 'C', D = 'D', E = 'E';
    unsigned int month, year;
    printf("Enter year: "); scanf("%u", &year);
    printf("Enter month: "); scanf("%u", &month);
    unsigned int first_day_year;
    first_day_year = (dayOfWeek(1,1,year) != 1) ? 1 : 2;
    int i,j;
    int(i = 1; i <= 12;i++) {
        printf("Month %u: ", month);
        printf("\n%6s %6s %6s %6s %6s %6s %6s","Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat");    
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