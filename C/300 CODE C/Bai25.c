// Input: Nhap hai so a, b nguyen duong
// Output: In ra UCLN va BCNN

#include <stdio.h>

#define swap(a, b) {int t = a; a = b; b = t;}
// GCD (Greatest Common Divisor): UCLN
int GCD(int a, int b) {
    while( a!= b ) {
        if(a > b) {
            a = a -b;
        }
        else b = b-a;
    }
    return a;
}
//LCM (Least Common Multipe): BCNN
int LCM(int a, int b) {
    if(a < b) {swap(a,b);}
    int i =a;
    while (a % b != 0)
    {
        a += i ;
    }
    return a;
}

int main() {
    int a,b;
    printf("Nhap hai so: "); scanf("%d %d", &a, &b);
    printf("UCLN(%d ,%d): %d", a, b, GCD(a,b));
    printf("\nBCNN(%d ,%d): %d", a, b, LCM(a,b));
    return 0;
}