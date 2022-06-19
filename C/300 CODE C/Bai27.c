// Input: Nhap vao so nguyen duong n
// Output: Phan tich n thanh thua so nguyen to

#include <stdio.h>  

int main() {
    unsigned int n;
    printf("Nhap n: "); scanf("%u", &n);
    printf("Phan tich: ");
    int i = 2;
    for(i = 2; i <n;i++) {
        while (n % i == 0)
        {
        if(i == n) {
            break;
        }
        printf("%d * ",i);
        n /= i;    
        }
    }
    if(n > 1)
        printf("%u", n);
    
    return 0;
    
}