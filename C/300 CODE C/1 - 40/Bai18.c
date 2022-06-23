/*
Input:  Nhap vao so gio
Output: In ra so tuan, ngay, gio
*/
#include <stdio.h>

int main() {
    unsigned int hours, w, d, h;
    printf("Nhap so gio: ");scanf("%u", &hours);
    w = hours / 168;
    d = (hours - w*168)/24;
    h = (hours - w*168 - d*24);
    printf("%u tuan, %u ngay, %u gio", w, d, h);
    return 0;
}