// Input: Nhap n nguyen duong
// Output: In ra n so nguyen to dau tien


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
    unsigned int n, m = 0;
    unsigned int i= 2;
    printf("Nhap n: "); scanf("%u", &n);
    while (m != n)
    {
        if(check_prime_number(i)) {
            printf("%u ", i);
            m ++;
        }
        i++;
        if(m % 10 == 0) printf("\n");
    }
    return 0;
}
