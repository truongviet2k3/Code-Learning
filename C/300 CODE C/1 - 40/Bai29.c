//Input: Nhap a,b,c,d
//Output: In ra bang so sanh do C va do F tu [a,b] C -> F va [c,d] F -> C

#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Nhap a,b: "); scanf("%d%d", &a, &b);
    printf("Nhap c,d: "); scanf("%d%d", &c, &d);
    float C_F, F_C;
    int i;
    printf("Celcius  Fahrenheit");
    for(i = a; i <= b; i++) {
        C_F = 9*i/5.0 + 32;
        printf("\n%7d  %10.2f", i, C_F);
    }
    printf("\n\nFahrenheit  Celsius");
    for (i = c; i <= d; i++)
    {
        F_C = 5*(i - 32)/9.0;
        printf("\n%7d %10.2f", i, F_C);
    }
    
    return  0;
}