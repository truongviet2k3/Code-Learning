// Input: Nhap so nguyen duong n
// Output: Kiem tra n co la so nguyen to khong neu khong xac dinh so nguyen to gan n nhat

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool check_prime_number(unsigned int n) {
    int i=2;
    for(; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int main() {
    unsigned int n;
    printf("Nhap n: "); scanf("%u", &n);
    int i, count1 = 0, count2 = 0;
    if(check_prime_number(n)) {
        printf("%u la so nguyen to", n);
        return 0;
    }
    for(i = n+1; ; i++)  {
        count1 ++;
        if(check_prime_number(i)) {
            break;
        }
    }
    for(i = n-1; ; i--) {
        count2++;
        if(check_prime_number(i)) {
            break;
        }
    }
    if(count1 > count2) {
        printf("So nguyen to be hon gan nhat: %u ", n - count2); 
    }
    else if(count2 > count1) {
        printf("So nguyen to lon hon gan nhat: %u ", n + count1);
    }
    else {
        printf("Co 2 so nguyem to gan nhat : %u va  %u", n - count2, n + count1);
    }
    return 0;
}