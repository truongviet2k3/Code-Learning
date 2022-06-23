// Input: 
// Output: Tim so armstrong co 3, 4 chu so

#include <stdio.h>
#include <math.h>

int main() {
    int i, a,b,c,d;
    long sum_mu3, sum_mu4;
    for(i = 100; i < 1000; i++)
    {
        c = i % 10;
        b = (i % 100 )/ 10;
        a = i / 100;
        sum_mu3 = pow(a,3) + pow(b,3) + pow(c,3);
        if(sum_mu3 == i ) printf("%4d", i);
    }
    for(i = 1000; i < 10000; i++)
    {
        d = i % 10;
        c = (i % 100 ) / 10;
        b = (i % 1000) / 100;
        a = i / 1000;
        sum_mu4 = pow(a,4) + pow(b,4) + pow(c,4) + pow(d,4);
        if(sum_mu4 == i ) printf("%5d", i);
    }

    return 0;
}