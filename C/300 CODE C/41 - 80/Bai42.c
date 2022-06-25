//Gia thuyet Goldbach: Moi so nguyen to chan lon hon 2 la tong cua 2so nguyen to
//                     Moi so nguyen to le co the duoc viet tong bang cua 3 so nguyen to 

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool check_prime_number(int n) {
    if(n < 2 || n % 2 == 0) return 0;
    if(n == 2) return 1;
    int i;
    for(i = 3; i <= (n >> 1) ; i+=2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int p[200], n = 3;
    p[0] = 2; p[1] = 3; p[2] = 5;
    int x, y, z, i, count = 0, d;
    for(i = 7 ; i < 1000 ; i +=2) {
        if(check_prime_number(i)) {
            p[n] = i;
            n++;
        }
    }
    printf("Co %d so nguyen to n (5 < n < 1000)\n", n -3);
    for(i = 3; i < n; i++) {
        for(x = 0;  x < n; x++) {
            for(y = 0; y < n; y++) {
                for(z = 0; z < n; z++) {
                    d = p[i] - p[x] - p[y] - p[z];
                    if(!d) {
                        printf("%3d = %d + %2d + %d\n", p[i], p[x], p[y], p[z] );
                        count ++;
                        goto done;
                    }
                }
            }
        }
        done:{}
    }
    printf("Da kiem tra %d so nguyen to\n", count);
    return 0;
}