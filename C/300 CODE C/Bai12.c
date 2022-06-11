/* 
Input:  int a1, a2, b1, b2, c1, c2  
Output: nghiem cua he pt a1x + b1y = c1
                         a2x + b2y = c1
*/

#include <stdio.h> 
#include <math.h>

int det_2(int a, int b, int c, int d) {
    return a*d - b*c;
} 

int main() {
    int a1, b1, c1, a2, b2, c2;
    printf("Nhap a1, b1, c1: "); scanf("%d %d %d", &a1, &b1, &c1);
    printf("Nhap a2, b2, c2: "); scanf("%d %d %d", &a2, &b2, &c2);
    int D, D_x, D_y;
    D = det_2(a1, b1, a2, b2);
    D_x = det_2(b1, c1, b2, c2);
    D_y = det_2(a1, c1, a2, c2);
    if (D == 0) {
        if (D_x == 0) {
            printf("Vo so nghiem!");
        }
        else {
            printf("Vo nghiem! ");
        }
    }
    else {
        printf("\nx = %f", (float)D_x/D);
        printf("\ny = %f", (float)D_y/D);
    }
    return 0;
}