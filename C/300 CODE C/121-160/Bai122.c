#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char bit[255];
    printf("Nhap chuoi nhi phan: "); fgets(bit, 255, stdin); bit[strlen(bit) - 1] = '\0';
    long int dec = 0;
    int i, mu2 = 1,len = strlen(bit);
    for(i = len - 1; i >= 0;  i--) {
        mu2 *= 2;
        dec += (int)(bit[i] - 48) * mu2/2;
    }
    printf("Tri thap phan: %d", dec);
    return 0;
}