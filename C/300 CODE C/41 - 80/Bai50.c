//Phan so lien tuc (continued fraction)

#include <stdio.h>

int main() {
    int s, t, k;
    printf("Nhap s, t (0 < s < t): "); scanf("%d %d", &s, &t);
    int B[100], i=0, j;
    while (s != 1)
    {
        B[i] = t / s;
        k = s;
        s = t % s;
        t = k; 
        i ++;
    }
    B[i] = t;
    for(j = 0; j <=i; j++ ) {
        printf("%d ", B[j]);
    }
    return 0;
}