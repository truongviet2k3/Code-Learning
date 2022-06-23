#include <stdio.h>

int main() {
    int d, n;
    for(d = 1; d < 15; d++) {
        for(n = 1; n < 25; n++) {
            if(7 * d + 4 * n == 100) {
                printf(" (%d, %d, %d) \n", d, n, 6*d +3*n);
            }
        }
    }
    
}