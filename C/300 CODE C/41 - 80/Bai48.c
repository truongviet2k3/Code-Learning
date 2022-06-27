//Input: Nhap n 
//Output: Tim uoc so le lon nhat va uoc so lon nhat la luy thua cua 2

#include <stdio.h>
 
#define is_pow2(x) (!(x & (x - 1)) && x) //Kiem tra luy thua cua 2

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    int i =0;
    for(i = n /2 + 1 ; i >= 1; i-= 2) {
        if(n % i == 0) {
            printf("US le lon nhat: %d\n", i);
            break;
        }
    }
    int temp;

    for(i = 1; i <= n ; i*= 2) {
        if(n % i == 0) {
            temp = i;
        }
    }
    printf("US lon nhat la luy thua cua 2: %d\n", temp);
    return 0;
}