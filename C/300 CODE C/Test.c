#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    char s;
    srand(time(0));
    for (int i=0 ; i < 100; i++) {
        s = rand('b','d','k');
        printf("%c", s);
    }
    return 0;
}