#include <stdio.h>
int main() {
    int p, a, max = 0, result = 0;
    for(p = 2; p <= 1000; p+= 2) {
        int count = 0;
        for(a = 1; a < p/3 ; a++) {
            if(p * (p - a ) % 2*(p - 2*a) == 0) {
                count ++;
            }
        }
        if(count > max) {
            max = count;
            result = p;
        }
    }
    printf("%d\n", result);
    printf("%d", max);

    return 0;
}
