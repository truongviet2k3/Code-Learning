// Input: Nhap n nguyen duong
// Output: In ra chuoi hailstones voi n nhap tu ban phim

#include <stdio.h>

int main() {
    unsigned int n, i=1;
    printf("Nhap n: "); scanf("%u", &n);
    printf("\n%6u", n);
    while (n > 1)
    {
        if(n % 2 == 0) {
            n /= 2;
            i ++;
            printf("%6u", n);
        }
        else {
            n = 3 * n + 1;
            i++;
            printf("%6u", n);
        }
        if(i % 6 == 0) printf("\n");
    }
    printf("\nHalistones sinh duoc: %u", i);
    
    return 0;
}